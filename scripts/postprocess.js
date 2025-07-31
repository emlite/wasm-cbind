import fs from "fs/promises";
import path from "path";

const DEFAULT_ROOT = "./webbind/include/webbind";
const HEADER_EXTENSIONS = new Set([".h"]);

// ---- helpers ----
async function* walk(dir) {
  for (const dirent of await fs.readdir(dir, { withFileTypes: true })) {
    const p = path.join(dir, dirent.name);
    if (dirent.isDirectory()) {
      yield* walk(p);
    } else {
      yield p;
    }
  }
}

function detectLineEnding(text) {
  return text.includes("\r\n") ? "\r\n" : "\n";
}

function hasExternC(text) {
  // If a C++-guarded extern "C" block already exists, skip.
  // (Loose match to avoid false negatives on whitespace/comments.)
  return /\#ifdef\s+__cplusplus[\s\S]*?extern\s*"C"\s*\{[\s\S]*?\#endif/.test(text);
}

function findPragmaOnceIndex(lines) {
  for (let i = 0; i < Math.min(lines.length, 200); i++) {
    if (/^\s*#\s*pragma\s+once\b/.test(lines[i])) return i;
  }
  return -1;
}

function findLastTopIncludeIndex(lines) {
  // In practice includes are near the top; we still scan the whole file
  // and take the last #include. If you want to be stricter, limit the scan.
  let last = -1;
  for (let i = 0; i < lines.length; i++) {
    if (/^\s*#\s*include\b/.test(lines[i])) last = i;
  }
  return last;
}

async function processHeader(filePath) {
  const orig = await fs.readFile(filePath, "utf8");
  if (hasExternC(orig)) {
    console.log(`SKIP (already wrapped): ${filePath}`);
    return;
  }

  const EOL = detectLineEnding(orig);
  const lines = orig.replace(/\r?\n/g, "\n").split("\n");

  const pragmaIdx = findPragmaOnceIndex(lines);
  const lastIncludeIdx = findLastTopIncludeIndex(lines);

  // Opening goes after the last include if any; otherwise after #pragma once; otherwise at top.
  let openIdx;
  if (lastIncludeIdx >= 0) openIdx = lastIncludeIdx + 1;
  else if (pragmaIdx >= 0) openIdx = pragmaIdx + 1;
  else openIdx = 0;

  const openingBlock = [
    "",
    "#ifdef __cplusplus",
    "extern \"C\" {",
    "#endif",
    "",
  ];
  const closingBlock = [
    "",
    "#ifdef __cplusplus",
    "}",
    "#endif",
  ];

  lines.splice(openIdx, 0, ...openingBlock);
  // Closing at EOF
  lines.push(...closingBlock);

  const out = lines.join("\n").replace(/\n/g, EOL);
  await fs.writeFile(filePath, out, "utf8");
//   console.log(`UPDATED: ${filePath}`);
}

export async function postproc() {
  const root = process.argv[2] ? process.argv[2] : DEFAULT_ROOT;

  try {
    for await (const p of walk(root)) {
      if (!HEADER_EXTENSIONS.has(path.extname(p).toLowerCase())) continue;
      await processHeader(p);
    }
  } catch (err) {
    console.error(err);
    process.exit(1);
  }
}

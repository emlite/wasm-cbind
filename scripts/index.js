import * as webref from "@webref/idl";
import { clean } from "./clean.js";
import { generate } from "./gen.js";
import { postproc } from "./postprocess.js";

async function main() {
  await clean();
  const specAst = await webref.parseAll();
  generate(specAst);
  // await postproc();
  console.log("Generation done!");
}

main().catch((err) => console.log("Generation failed ", err));

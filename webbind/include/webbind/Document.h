#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMImplementation DOMImplementation;
typedef struct DocumentType DocumentType;
typedef struct Element Element;
typedef struct HTMLCollection HTMLCollection;
typedef struct DocumentFragment DocumentFragment;
typedef struct Text Text;
typedef struct CDATASection CDATASection;
typedef struct Comment Comment;
typedef struct ProcessingInstruction ProcessingInstruction;
typedef struct Attr Attr;
typedef struct Event Event;
typedef struct Range Range;
typedef struct NodeIterator NodeIterator;
typedef struct TreeWalker TreeWalker;
typedef struct SVGSVGElement SVGSVGElement;
typedef struct NamedFlowMap NamedFlowMap;
typedef struct ViewTransition ViewTransition;
typedef struct CaretPosition CaretPosition;
typedef struct CaretPositionFromPointOptions CaretPositionFromPointOptions;
typedef struct FontMetrics FontMetrics;
typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct Document Document;
typedef struct Location Location;
typedef struct HTMLElement HTMLElement;
typedef struct HTMLHeadElement HTMLHeadElement;
typedef struct NodeList NodeList;
typedef struct HTMLAllCollection HTMLAllCollection;
typedef struct PermissionsPolicy PermissionsPolicy;
typedef struct FragmentDirective FragmentDirective;
typedef struct Selection Selection;
typedef struct DocumentTimeline DocumentTimeline;
typedef struct FontFaceSet FontFaceSet;
typedef struct DOMQuad DOMQuad;
typedef struct BoxQuadOptions BoxQuadOptions;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct Animation Animation;
typedef struct XPathExpression XPathExpression;
typedef struct XPathResult XPathResult;
typedef struct ShadowRoot ShadowRoot;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMQuadInit DOMQuadInit;


DECLARE_EMLITE_TYPE(CaretPositionFromPointOptions, em_Val);

jb_Array CaretPositionFromPointOptions_shadowRoots(const CaretPositionFromPointOptions *self);

void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(BoxQuadOptions, em_Val);

CSSBoxType BoxQuadOptions_box(const BoxQuadOptions *self);

void BoxQuadOptions_set_box(BoxQuadOptions* self, CSSBoxType * value);

jb_Any BoxQuadOptions_relativeTo(const BoxQuadOptions *self);

void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(DOMQuadInit, em_Val);

DOMPointInit DOMQuadInit_p1(const DOMQuadInit *self);

void DOMQuadInit_set_p1(DOMQuadInit* self, DOMPointInit * value);

DOMPointInit DOMQuadInit_p2(const DOMQuadInit *self);

void DOMQuadInit_set_p2(DOMQuadInit* self, DOMPointInit * value);

DOMPointInit DOMQuadInit_p3(const DOMQuadInit *self);

void DOMQuadInit_set_p3(DOMQuadInit* self, DOMPointInit * value);

DOMPointInit DOMQuadInit_p4(const DOMQuadInit *self);

void DOMQuadInit_set_p4(DOMQuadInit* self, DOMPointInit * value);
DECLARE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);

CSSBoxType ConvertCoordinateOptions_fromBox(const ConvertCoordinateOptions *self);

void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, CSSBoxType * value);

CSSBoxType ConvertCoordinateOptions_toBox(const ConvertCoordinateOptions *self);

void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, CSSBoxType * value);
DECLARE_EMLITE_TYPE(Document, Node);

Document Document_new();

DOMImplementation Document_implementation(const Document *self);

jb_String Document_URL(const Document *self);

jb_String Document_documentURI(const Document *self);

jb_String Document_compatMode(const Document *self);

jb_String Document_characterSet(const Document *self);

jb_String Document_charset(const Document *self);

jb_String Document_inputEncoding(const Document *self);

jb_String Document_contentType(const Document *self);

DocumentType Document_doctype(const Document *self);

Element Document_documentElement(const Document *self);

HTMLCollection Document_getElementsByTagName(Document* self , jb_String * qualifiedName);

HTMLCollection Document_getElementsByTagNameNS(Document* self , jb_String * namespace_, jb_String * localName);

HTMLCollection Document_getElementsByClassName(Document* self , jb_String * classNames);

Element Document_createElement0(Document* self , jb_String * localName);

Element Document_createElement1(Document* self , jb_String * localName, jb_Any * options);

Element Document_createElementNS0(Document* self , jb_String * namespace_, jb_String * qualifiedName);

Element Document_createElementNS1(Document* self , jb_String * namespace_, jb_String * qualifiedName, jb_Any * options);

DocumentFragment Document_createDocumentFragment(Document* self );

Text Document_createTextNode(Document* self , jb_String * data);

CDATASection Document_createCDATASection(Document* self , jb_String * data);

Comment Document_createComment(Document* self , jb_String * data);

ProcessingInstruction Document_createProcessingInstruction(Document* self , jb_String * target, jb_String * data);

Node Document_importNode0(Document* self , Node * node);

Node Document_importNode1(Document* self , Node * node, jb_Any * options);

Node Document_adoptNode(Document* self , Node * node);

Attr Document_createAttribute(Document* self , jb_String * localName);

Attr Document_createAttributeNS(Document* self , jb_String * namespace_, jb_String * qualifiedName);

Event Document_createEvent(Document* self , jb_String * interface);

Range Document_createRange(Document* self );

NodeIterator Document_createNodeIterator0(Document* self , Node * root);

NodeIterator Document_createNodeIterator1(Document* self , Node * root, unsigned long whatToShow);

NodeIterator Document_createNodeIterator2(Document* self , Node * root, unsigned long whatToShow, jb_Function * filter);

TreeWalker Document_createTreeWalker0(Document* self , Node * root);

TreeWalker Document_createTreeWalker1(Document* self , Node * root, unsigned long whatToShow);

TreeWalker Document_createTreeWalker2(Document* self , Node * root, unsigned long whatToShow, jb_Function * filter);

SVGSVGElement Document_rootElement(const Document *self);

NamedFlowMap Document_namedFlows(const Document *self);

ViewTransition Document_startViewTransition0(Document* self );

ViewTransition Document_startViewTransition1(Document* self , jb_Any * callbackOptions);

Element Document_elementFromPoint(Document* self , double x, double y);

jb_Array Document_elementsFromPoint(Document* self , double x, double y);

CaretPosition Document_caretPositionFromPoint0(Document* self , double x, double y);

CaretPosition Document_caretPositionFromPoint1(Document* self , double x, double y, CaretPositionFromPointOptions * options);

Element Document_scrollingElement(const Document *self);

FontMetrics Document_measureElement(Document* self , Element * element);

FontMetrics Document_measureText(Document* self , jb_String * text, StylePropertyMapReadOnly * styleMap);

bool Document_fullscreenEnabled(const Document *self);

bool Document_fullscreen(const Document *self);

jb_Promise Document_exitFullscreen(Document* self );

jb_Any Document_onfullscreenchange(const Document *self);

void Document_set_onfullscreenchange(Document* self, jb_Any * value);

jb_Any Document_onfullscreenerror(const Document *self);

void Document_set_onfullscreenerror(Document* self, jb_Any * value);

Document Document_parseHTMLUnsafe(Document* self , jb_Any * html);

jb_Any Document_location(const Document *self);

jb_String Document_domain(const Document *self);

void Document_set_domain(Document* self, jb_String * value);

jb_String Document_referrer(const Document *self);

jb_String Document_cookie(const Document *self);

void Document_set_cookie(Document* self, jb_String * value);

jb_String Document_lastModified(const Document *self);

DocumentReadyState Document_readyState(const Document *self);

jb_String Document_title(const Document *self);

void Document_set_title(Document* self, jb_String * value);

jb_String Document_dir(const Document *self);

void Document_set_dir(Document* self, jb_String * value);

HTMLElement Document_body(const Document *self);

void Document_set_body(Document* self, HTMLElement * value);

HTMLHeadElement Document_head(const Document *self);

HTMLCollection Document_images(const Document *self);

HTMLCollection Document_embeds(const Document *self);

HTMLCollection Document_plugins(const Document *self);

HTMLCollection Document_links(const Document *self);

HTMLCollection Document_forms(const Document *self);

HTMLCollection Document_scripts(const Document *self);

NodeList Document_getElementsByName(Document* self , jb_String * elementName);

jb_Any Document_currentScript(const Document *self);

jb_Any Document_open(Document* self , jb_String * url, jb_String * name, jb_String * features);

jb_Undefined Document_close(Document* self );

jb_Undefined Document_write(Document* self , jb_Any * text);

jb_Undefined Document_writeln(Document* self , jb_Any * text);

jb_Any Document_defaultView(const Document *self);

bool Document_hasFocus(Document* self );

jb_String Document_designMode(const Document *self);

void Document_set_designMode(Document* self, jb_String * value);

bool Document_execCommand0(Document* self , jb_String * commandId);

bool Document_execCommand1(Document* self , jb_String * commandId, bool showUI);

bool Document_execCommand2(Document* self , jb_String * commandId, bool showUI, jb_String * value);

bool Document_queryCommandEnabled(Document* self , jb_String * commandId);

bool Document_queryCommandIndeterm(Document* self , jb_String * commandId);

bool Document_queryCommandState(Document* self , jb_String * commandId);

bool Document_queryCommandSupported(Document* self , jb_String * commandId);

jb_String Document_queryCommandValue(Document* self , jb_String * commandId);

bool Document_hidden(const Document *self);

DocumentVisibilityState Document_visibilityState(const Document *self);

jb_Any Document_onreadystatechange(const Document *self);

void Document_set_onreadystatechange(Document* self, jb_Any * value);

jb_Any Document_onvisibilitychange(const Document *self);

void Document_set_onvisibilitychange(Document* self, jb_Any * value);

jb_String Document_fgColor(const Document *self);

void Document_set_fgColor(Document* self, jb_String * value);

jb_String Document_linkColor(const Document *self);

void Document_set_linkColor(Document* self, jb_String * value);

jb_String Document_vlinkColor(const Document *self);

void Document_set_vlinkColor(Document* self, jb_String * value);

jb_String Document_alinkColor(const Document *self);

void Document_set_alinkColor(Document* self, jb_String * value);

jb_String Document_bgColor(const Document *self);

void Document_set_bgColor(Document* self, jb_String * value);

HTMLCollection Document_anchors(const Document *self);

HTMLCollection Document_applets(const Document *self);

jb_Undefined Document_clear(Document* self );

jb_Undefined Document_captureEvents(Document* self );

jb_Undefined Document_releaseEvents(Document* self );

HTMLAllCollection Document_all(const Document *self);

jb_Any Document_onfreeze(const Document *self);

void Document_set_onfreeze(Document* self, jb_Any * value);

jb_Any Document_onresume(const Document *self);

void Document_set_onresume(Document* self, jb_Any * value);

bool Document_wasDiscarded(const Document *self);

PermissionsPolicy Document_permissionsPolicy(const Document *self);

bool Document_pictureInPictureEnabled(const Document *self);

jb_Promise Document_exitPictureInPicture(Document* self );

jb_Any Document_onpointerlockchange(const Document *self);

void Document_set_onpointerlockchange(Document* self, jb_Any * value);

jb_Any Document_onpointerlockerror(const Document *self);

void Document_set_onpointerlockerror(Document* self, jb_Any * value);

jb_Undefined Document_exitPointerLock(Document* self );

bool Document_prerendering(const Document *self);

jb_Any Document_onprerenderingchange(const Document *self);

void Document_set_onprerenderingchange(Document* self, jb_Any * value);

jb_Promise Document_requestStorageAccessFor(Document* self , jb_String * requestedOrigin);

jb_Promise Document_hasUnpartitionedCookieAccess(Document* self );

FragmentDirective Document_fragmentDirective(const Document *self);

Selection Document_getSelection(Document* self );

jb_Promise Document_hasStorageAccess(Document* self );

jb_Promise Document_requestStorageAccess(Document* self );

jb_Promise Document_hasPrivateToken(Document* self , jb_String * issuer);

jb_Promise Document_hasRedemptionRecord(Document* self , jb_String * issuer);

DocumentTimeline Document_timeline(const Document *self);

FontFaceSet Document_fonts(const Document *self);

jb_Array Document_getBoxQuads0(Document* self );

jb_Array Document_getBoxQuads1(Document* self , BoxQuadOptions * options);

DOMQuad Document_convertQuadFromNode0(Document* self , DOMQuadInit * quad, jb_Any * from);

DOMQuad Document_convertQuadFromNode1(Document* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

DOMQuad Document_convertRectFromNode0(Document* self , DOMRectReadOnly * rect, jb_Any * from);

DOMQuad Document_convertRectFromNode1(Document* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

DOMPoint Document_convertPointFromNode0(Document* self , DOMPointInit * point, jb_Any * from);

DOMPoint Document_convertPointFromNode1(Document* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

Element Document_getElementById(Document* self , jb_String * elementId);

jb_Array Document_getAnimations(Document* self );

HTMLCollection Document_children(const Document *self);

Element Document_firstElementChild(const Document *self);

Element Document_lastElementChild(const Document *self);

unsigned long Document_childElementCount(const Document *self);

jb_Undefined Document_prepend(Document* self , jb_Any * nodes);

jb_Undefined Document_append(Document* self , jb_Any * nodes);

jb_Undefined Document_replaceChildren(Document* self , jb_Any * nodes);

jb_Undefined Document_moveBefore(Document* self , Node * node, Node * child);

Element Document_querySelector(Document* self , jb_String * selectors);

NodeList Document_querySelectorAll(Document* self , jb_String * selectors);

XPathExpression Document_createExpression0(Document* self , jb_String * expression);

XPathExpression Document_createExpression1(Document* self , jb_String * expression, jb_Function * resolver);

Node Document_createNSResolver(Document* self , Node * nodeResolver);

XPathResult Document_evaluate0(Document* self , jb_String * expression, Node * contextNode);

XPathResult Document_evaluate1(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver);

XPathResult Document_evaluate2(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type);

XPathResult Document_evaluate3(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type, XPathResult * result);

jb_Any Document_onbeforexrselect(const Document *self);

void Document_set_onbeforexrselect(Document* self, jb_Any * value);

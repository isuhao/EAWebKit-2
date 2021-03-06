/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSDOMWindow_h
#define JSDOMWindow_h

#include "JSDOMWindowBase.h"
#include "DOMWindow.h"
namespace WebCore {

class DOMWindow;

class JSDOMWindowShell;

class JSDOMWindow : public JSDOMWindowBase {
    typedef JSDOMWindowBase Base;
public:
    JSDOMWindow(DOMWindow*, JSDOMWindowShell*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    bool customGetOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    bool customPut(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    virtual void mark();

    virtual bool deleteProperty(KJS::ExecState*, const KJS::Identifier&);
    virtual void getPropertyNames(KJS::ExecState*, KJS::PropertyNameArray&);
    bool customGetPropertyNames(KJS::ExecState*, KJS::PropertyNameArray&);
    enum {
        // Attributes
        ScreenAttrNum, HistoryAttrNum, LocationbarAttrNum, MenubarAttrNum, 
        PersonalbarAttrNum, ScrollbarsAttrNum, StatusbarAttrNum, ToolbarAttrNum, 
        NavigatorAttrNum, ClientInformationAttrNum, LocationAttrNum, FrameElementAttrNum, 
        OffscreenBufferingAttrNum, OuterHeightAttrNum, OuterWidthAttrNum, InnerHeightAttrNum, 
        InnerWidthAttrNum, ScreenXAttrNum, ScreenYAttrNum, ScreenLeftAttrNum, 
        ScreenTopAttrNum, ScrollXAttrNum, ScrollYAttrNum, PageXOffsetAttrNum, 
        PageYOffsetAttrNum, ClosedAttrNum, LengthAttrNum, NameAttrNum, 
        StatusAttrNum, DefaultStatusAttrNum, DefaultstatusAttrNum, SelfAttrNum, 
        WindowAttrNum, FramesAttrNum, OpenerAttrNum, ParentAttrNum, 
        TopAttrNum, DocumentAttrNum, DevicePixelRatioAttrNum, ConsoleAttrNum, 
        StyleSheetConstructorAttrNum, CSSStyleSheetConstructorAttrNum, CSSValueConstructorAttrNum, CSSPrimitiveValueConstructorAttrNum, 
        CSSValueListConstructorAttrNum, CSSRuleConstructorAttrNum, CSSCharsetRuleConstructorAttrNum, CSSFontFaceRuleConstructorAttrNum, 
        CSSImportRuleConstructorAttrNum, CSSMediaRuleConstructorAttrNum, CSSPageRuleConstructorAttrNum, CSSStyleRuleConstructorAttrNum, 
        CSSVariablesRuleConstructorAttrNum, CSSVariablesDeclarationConstructorAttrNum, CSSStyleDeclarationConstructorAttrNum, MediaListConstructorAttrNum, 
        CounterConstructorAttrNum, CSSRuleListConstructorAttrNum, RectConstructorAttrNum, StyleSheetListConstructorAttrNum, 
        DOMExceptionConstructorAttrNum, DOMImplementationConstructorAttrNum, DocumentFragmentConstructorAttrNum, DocumentConstructorAttrNum, 
        NodeConstructorAttrNum, NodeListConstructorAttrNum, NamedNodeMapConstructorAttrNum, CharacterDataConstructorAttrNum, 
        AttrConstructorAttrNum, ElementConstructorAttrNum, TextConstructorAttrNum, CommentConstructorAttrNum, 
        CDATASectionConstructorAttrNum, DocumentTypeConstructorAttrNum, NotationConstructorAttrNum, EntityConstructorAttrNum, 
        EntityReferenceConstructorAttrNum, ProcessingInstructionConstructorAttrNum, HTMLDocumentConstructorAttrNum, HTMLElementConstructorAttrNum, 
        HTMLAnchorElementConstructorAttrNum, HTMLAppletElementConstructorAttrNum, HTMLAreaElementConstructorAttrNum, HTMLBRElementConstructorAttrNum, 
        HTMLBaseElementConstructorAttrNum, HTMLBaseFontElementConstructorAttrNum, HTMLBlockquoteElementConstructorAttrNum, HTMLBodyElementConstructorAttrNum, 
        HTMLButtonElementConstructorAttrNum, HTMLCanvasElementConstructorAttrNum, HTMLDListElementConstructorAttrNum, HTMLDirectoryElementConstructorAttrNum, 
        HTMLDivElementConstructorAttrNum, HTMLEmbedElementConstructorAttrNum, HTMLFieldSetElementConstructorAttrNum, HTMLFontElementConstructorAttrNum, 
        HTMLFormElementConstructorAttrNum, HTMLFrameElementConstructorAttrNum, HTMLFrameSetElementConstructorAttrNum, HTMLHRElementConstructorAttrNum, 
        HTMLHeadElementConstructorAttrNum, HTMLHeadingElementConstructorAttrNum, HTMLHtmlElementConstructorAttrNum, HTMLIFrameElementConstructorAttrNum, 
        HTMLImageElementConstructorAttrNum, HTMLInputElementConstructorAttrNum, HTMLIsIndexElementConstructorAttrNum, HTMLLIElementConstructorAttrNum, 
        HTMLLabelElementConstructorAttrNum, HTMLLegendElementConstructorAttrNum, HTMLLinkElementConstructorAttrNum, HTMLMapElementConstructorAttrNum, 
        HTMLMarqueeElementConstructorAttrNum, HTMLMenuElementConstructorAttrNum, HTMLMetaElementConstructorAttrNum, HTMLModElementConstructorAttrNum, 
        HTMLOListElementConstructorAttrNum, HTMLObjectElementConstructorAttrNum, HTMLOptGroupElementConstructorAttrNum, HTMLOptionElementConstructorAttrNum, 
        HTMLParagraphElementConstructorAttrNum, HTMLParamElementConstructorAttrNum, HTMLPreElementConstructorAttrNum, HTMLQuoteElementConstructorAttrNum, 
        HTMLScriptElementConstructorAttrNum, HTMLSelectElementConstructorAttrNum, HTMLStyleElementConstructorAttrNum, HTMLTableCaptionElementConstructorAttrNum, 
        HTMLTableCellElementConstructorAttrNum, HTMLTableColElementConstructorAttrNum, HTMLTableElementConstructorAttrNum, HTMLTableRowElementConstructorAttrNum, 
        HTMLTableSectionElementConstructorAttrNum, HTMLTextAreaElementConstructorAttrNum, HTMLTitleElementConstructorAttrNum, HTMLUListElementConstructorAttrNum, 
        HTMLCollectionConstructorAttrNum, CanvasRenderingContext2DConstructorAttrNum, EventConstructorAttrNum, KeyboardEventConstructorAttrNum, 
        MouseEventConstructorAttrNum, MutationEventConstructorAttrNum, OverflowEventConstructorAttrNum, ProgressEventConstructorAttrNum, 
        TextEventConstructorAttrNum, UIEventConstructorAttrNum, WheelEventConstructorAttrNum, MessageEventConstructorAttrNum, 
        EventExceptionConstructorAttrNum, ClipboardConstructorAttrNum, FileConstructorAttrNum, FileListConstructorAttrNum, 
        NodeFilterConstructorAttrNum, RangeConstructorAttrNum, RangeExceptionConstructorAttrNum, XMLDocumentConstructorAttrNum, 
        DOMParserConstructorAttrNum, XMLSerializerConstructorAttrNum, XMLHttpRequestExceptionConstructorAttrNum, XPathEvaluatorConstructorAttrNum, 
        XPathResultConstructorAttrNum, XPathExceptionConstructorAttrNum, 
    };

    // Custom attributes
    void setLocation(KJS::ExecState*, KJS::JSValue*);

    // Custom functions
    KJS::JSValue* postMessage(KJS::ExecState*, const KJS::ArgList&);
    DOMWindow* impl() const
    {
        return static_cast<DOMWindow*>(Base::impl());
    }
};

DOMWindow* toDOMWindow(KJS::JSValue*);

class JSDOMWindowPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self();
    void* operator new(size_t);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSDOMWindowPrototype() { }
};

// Functions

KJS::JSValue* jsDOMWindowPrototypeFunctionGetSelection(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionFocus(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionBlur(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionClose(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionPrint(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionStop(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionAlert(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionConfirm(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionPrompt(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionFind(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionScrollBy(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionScrollTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionScroll(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionMoveBy(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionMoveTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionResizeBy(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionResizeTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionGetComputedStyle(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionGetMatchedCSSRules(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsDOMWindowPrototypeFunctionPostMessage(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

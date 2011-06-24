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

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSElement.h"

#include <wtf/GetPtr.h>

#include "Attr.h"
#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "Element.h"
#include "JSAttr.h"
#include "JSCSSStyleDeclaration.h"
#include "JSElement.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "NodeList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSElementTableValues[22] =
{
    { "tagName", (intptr_t)JSElement::TagNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetLeft", (intptr_t)JSElement::OffsetLeftAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetTop", (intptr_t)JSElement::OffsetTopAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetWidth", (intptr_t)JSElement::OffsetWidthAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetHeight", (intptr_t)JSElement::OffsetHeightAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetParent", (intptr_t)JSElement::OffsetParentAttrNum, DontDelete|ReadOnly, 0 },
    { "clientLeft", (intptr_t)JSElement::ClientLeftAttrNum, DontDelete|ReadOnly, 0 },
    { "clientTop", (intptr_t)JSElement::ClientTopAttrNum, DontDelete|ReadOnly, 0 },
    { "clientWidth", (intptr_t)JSElement::ClientWidthAttrNum, DontDelete|ReadOnly, 0 },
    { "clientHeight", (intptr_t)JSElement::ClientHeightAttrNum, DontDelete|ReadOnly, 0 },
    { "scrollLeft", (intptr_t)JSElement::ScrollLeftAttrNum, DontDelete, 0 },
    { "scrollTop", (intptr_t)JSElement::ScrollTopAttrNum, DontDelete, 0 },
    { "scrollWidth", (intptr_t)JSElement::ScrollWidthAttrNum, DontDelete|ReadOnly, 0 },
    { "scrollHeight", (intptr_t)JSElement::ScrollHeightAttrNum, DontDelete|ReadOnly, 0 },
    { "firstElementChild", (intptr_t)JSElement::FirstElementChildAttrNum, DontDelete|ReadOnly, 0 },
    { "lastElementChild", (intptr_t)JSElement::LastElementChildAttrNum, DontDelete|ReadOnly, 0 },
    { "previousElementSibling", (intptr_t)JSElement::PreviousElementSiblingAttrNum, DontDelete|ReadOnly, 0 },
    { "nextElementSibling", (intptr_t)JSElement::NextElementSiblingAttrNum, DontDelete|ReadOnly, 0 },
    { "childElementCount", (intptr_t)JSElement::ChildElementCountAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSElementTable = { 8191, JSElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSElementConstructorTable = { 0, JSElementConstructorTableValues, 0 };

class JSElementConstructor : public DOMObject {
public:
    JSElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSElementConstructor::s_info = { "ElementConstructor", 0, &JSElementConstructorTable, 0 };

bool JSElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSElementConstructor, DOMObject>(exec, &JSElementConstructorTable, this, propertyName, slot);
}

JSValue* JSElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSElementPrototypeTableValues[26] =
{
    { "getAttribute", (intptr_t)jsElementPrototypeFunctionGetAttribute, DontDelete|Function, 1 },
    { "setAttribute", (intptr_t)jsElementPrototypeFunctionSetAttribute, DontDelete|Function, 2 },
    { "removeAttribute", (intptr_t)jsElementPrototypeFunctionRemoveAttribute, DontDelete|Function, 1 },
    { "getAttributeNode", (intptr_t)jsElementPrototypeFunctionGetAttributeNode, DontDelete|Function, 1 },
    { "setAttributeNode", (intptr_t)jsElementPrototypeFunctionSetAttributeNode, DontDelete|Function, 1 },
    { "removeAttributeNode", (intptr_t)jsElementPrototypeFunctionRemoveAttributeNode, DontDelete|Function, 1 },
    { "getElementsByTagName", (intptr_t)jsElementPrototypeFunctionGetElementsByTagName, DontDelete|Function, 1 },
    { "getAttributeNS", (intptr_t)jsElementPrototypeFunctionGetAttributeNS, DontDelete|Function, 2 },
    { "setAttributeNS", (intptr_t)jsElementPrototypeFunctionSetAttributeNS, DontDelete|Function, 3 },
    { "removeAttributeNS", (intptr_t)jsElementPrototypeFunctionRemoveAttributeNS, DontDelete|Function, 2 },
    { "getElementsByTagNameNS", (intptr_t)jsElementPrototypeFunctionGetElementsByTagNameNS, DontDelete|Function, 2 },
    { "getAttributeNodeNS", (intptr_t)jsElementPrototypeFunctionGetAttributeNodeNS, DontDelete|Function, 2 },
    { "setAttributeNodeNS", (intptr_t)jsElementPrototypeFunctionSetAttributeNodeNS, DontDelete|Function, 1 },
    { "hasAttribute", (intptr_t)jsElementPrototypeFunctionHasAttribute, DontDelete|Function, 1 },
    { "hasAttributeNS", (intptr_t)jsElementPrototypeFunctionHasAttributeNS, DontDelete|Function, 2 },
    { "focus", (intptr_t)jsElementPrototypeFunctionFocus, DontDelete|Function, 0 },
    { "blur", (intptr_t)jsElementPrototypeFunctionBlur, DontDelete|Function, 0 },
    { "scrollIntoView", (intptr_t)jsElementPrototypeFunctionScrollIntoView, DontDelete|Function, 1 },
    { "contains", (intptr_t)jsElementPrototypeFunctionContains, DontDelete|Function, 1 },
    { "scrollIntoViewIfNeeded", (intptr_t)jsElementPrototypeFunctionScrollIntoViewIfNeeded, DontDelete|Function, 1 },
    { "scrollByLines", (intptr_t)jsElementPrototypeFunctionScrollByLines, DontDelete|Function, 1 },
    { "scrollByPages", (intptr_t)jsElementPrototypeFunctionScrollByPages, DontDelete|Function, 1 },
    { "getElementsByClassName", (intptr_t)jsElementPrototypeFunctionGetElementsByClassName, DontDelete|Function, 1 },
    { "querySelector", (intptr_t)jsElementPrototypeFunctionQuerySelector, DontDelete|Function, 1 },
    { "querySelectorAll", (intptr_t)jsElementPrototypeFunctionQuerySelectorAll, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSElementPrototypeTable = { 1023, JSElementPrototypeTableValues, 0 };

const ClassInfo JSElementPrototype::s_info = { "ElementPrototype", 0, &JSElementPrototypeTable, 0 };

JSObject* JSElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSElement.prototype]]");
    return KJS::cacheGlobalObject<JSElementPrototype>(exec, prototypeIdentifier);
}

bool JSElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSElement::s_info = { "Element", &JSEventTargetNode::s_info, &JSElementTable , 0 };

JSElement::JSElement(JSObject* prototype, Element* impl)
    : JSEventTargetNode(prototype, impl)
{
}

JSValue* JSElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TagNameAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsStringOrNull(exec, imp->tagName());
    }
    case StyleAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case OffsetLeftAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->offsetLeft());
    }
    case OffsetTopAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->offsetTop());
    }
    case OffsetWidthAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->offsetWidth());
    }
    case OffsetHeightAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->offsetHeight());
    }
    case OffsetParentAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return toJS(exec, WTF::getPtr(imp->offsetParent()));
    }
    case ClientLeftAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->clientLeft());
    }
    case ClientTopAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->clientTop());
    }
    case ClientWidthAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->clientWidth());
    }
    case ClientHeightAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->clientHeight());
    }
    case ScrollLeftAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->scrollLeft());
    }
    case ScrollTopAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->scrollTop());
    }
    case ScrollWidthAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->scrollWidth());
    }
    case ScrollHeightAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->scrollHeight());
    }
    case FirstElementChildAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return toJS(exec, WTF::getPtr(imp->firstElementChild()));
    }
    case LastElementChildAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return toJS(exec, WTF::getPtr(imp->lastElementChild()));
    }
    case PreviousElementSiblingAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return toJS(exec, WTF::getPtr(imp->previousElementSibling()));
    }
    case NextElementSiblingAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return toJS(exec, WTF::getPtr(imp->nextElementSibling()));
    }
    case ChildElementCountAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        return jsNumber(exec, imp->childElementCount());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSElement, Base>(exec, propertyName, value, &JSElementTable, this);
}

void JSElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ScrollLeftAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        imp->setScrollLeft(value->toInt32(exec));
        break;
    }
    case ScrollTopAttrNum: {
        Element* imp = static_cast<Element*>(impl());
        imp->setScrollTop(value->toInt32(exec));
        break;
    }
    }
}

JSValue* JSElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[Element.constructor]]");
    return KJS::cacheGlobalObject<JSElementConstructor>(exec, constructorIdentifier);
}

JSValue* jsElementPrototypeFunctionGetAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args[0]->toString(exec);


    KJS::JSValue* result = jsStringOrNull(exec, imp->getAttribute(name));
    return result;
}

JSValue* jsElementPrototypeFunctionSetAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    return castedThisObj->setAttribute(exec, args);
}

JSValue* jsElementPrototypeFunctionRemoveAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& name = args[0]->toString(exec);

    imp->removeAttribute(name, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionGetAttributeNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args[0]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getAttributeNode(name)));
    return result;
}

JSValue* jsElementPrototypeFunctionSetAttributeNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    return castedThisObj->setAttributeNode(exec, args);
}

JSValue* jsElementPrototypeFunctionRemoveAttributeNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Attr* oldAttr = toAttr(args[0]);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->removeAttributeNode(oldAttr, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsElementPrototypeFunctionGetElementsByTagName(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args[0]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getElementsByTagName(name)));
    return result;
}

JSValue* jsElementPrototypeFunctionGetAttributeNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args[0]);
    const UString& localName = args[1]->toString(exec);


    KJS::JSValue* result = jsString(exec, imp->getAttributeNS(namespaceURI, localName));
    return result;
}

JSValue* jsElementPrototypeFunctionSetAttributeNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    return castedThisObj->setAttributeNS(exec, args);
}

JSValue* jsElementPrototypeFunctionRemoveAttributeNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args[0]);
    const UString& localName = args[1]->toString(exec);

    imp->removeAttributeNS(namespaceURI, localName, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionGetElementsByTagNameNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args[0]);
    const UString& localName = args[1]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getElementsByTagNameNS(namespaceURI, localName)));
    return result;
}

JSValue* jsElementPrototypeFunctionGetAttributeNodeNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args[0]);
    const UString& localName = args[1]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getAttributeNodeNS(namespaceURI, localName)));
    return result;
}

JSValue* jsElementPrototypeFunctionSetAttributeNodeNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    return castedThisObj->setAttributeNodeNS(exec, args);
}

JSValue* jsElementPrototypeFunctionHasAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args[0]->toString(exec);


    KJS::JSValue* result = jsBoolean(imp->hasAttribute(name));
    return result;
}

JSValue* jsElementPrototypeFunctionHasAttributeNS(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args[0]);
    const UString& localName = args[1]->toString(exec);


    KJS::JSValue* result = jsBoolean(imp->hasAttributeNS(namespaceURI, localName));
    return result;
}

JSValue* jsElementPrototypeFunctionFocus(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    imp->focus();
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionBlur(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    imp->blur();
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionScrollIntoView(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    int argsCount = args.size();
    if (argsCount < 1) {
        imp->scrollIntoView();
        return jsUndefined();
    }

    bool alignWithTop = args[0]->toBoolean(exec);

    imp->scrollIntoView(alignWithTop);
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionContains(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    Element* element = toElement(args[0]);


    KJS::JSValue* result = jsBoolean(imp->contains(element));
    return result;
}

JSValue* jsElementPrototypeFunctionScrollIntoViewIfNeeded(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    int argsCount = args.size();
    if (argsCount < 1) {
        imp->scrollIntoViewIfNeeded();
        return jsUndefined();
    }

    bool centerIfNeeded = args[0]->toBoolean(exec);

    imp->scrollIntoViewIfNeeded(centerIfNeeded);
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionScrollByLines(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    int lines = args[0]->toInt32(exec);

    imp->scrollByLines(lines);
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionScrollByPages(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    int pages = args[0]->toInt32(exec);

    imp->scrollByPages(pages);
    return jsUndefined();
}

JSValue* jsElementPrototypeFunctionGetElementsByClassName(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args[0]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getElementsByClassName(name)));
    return result;
}

JSValue* jsElementPrototypeFunctionQuerySelector(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = valueToStringWithUndefinedOrNullCheck(exec, args[0]);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->querySelector(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsElementPrototypeFunctionQuerySelectorAll(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(thisValue);
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = valueToStringWithUndefinedOrNullCheck(exec, args[0]);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->querySelectorAll(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

Element* toElement(KJS::JSValue* val)
{
    return val->isObject(&JSElement::s_info) ? static_cast<JSElement*>(val)->impl() : 0;
}

}

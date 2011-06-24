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

#include "JSHTMLElement.h"

#include <wtf/GetPtr.h>

#include "Element.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "JSElement.h"
#include "JSHTMLCollection.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLElementTableValues[15] =
{
    { "id", (intptr_t)JSHTMLElement::IdAttrNum, DontDelete, 0 },
    { "title", (intptr_t)JSHTMLElement::TitleAttrNum, DontDelete, 0 },
    { "lang", (intptr_t)JSHTMLElement::LangAttrNum, DontDelete, 0 },
    { "dir", (intptr_t)JSHTMLElement::DirAttrNum, DontDelete, 0 },
    { "className", (intptr_t)JSHTMLElement::ClassNameAttrNum, DontDelete, 0 },
    { "tabIndex", (intptr_t)JSHTMLElement::TabIndexAttrNum, DontDelete, 0 },
    { "innerHTML", (intptr_t)JSHTMLElement::InnerHTMLAttrNum, DontDelete, 0 },
    { "innerText", (intptr_t)JSHTMLElement::InnerTextAttrNum, DontDelete, 0 },
    { "outerHTML", (intptr_t)JSHTMLElement::OuterHTMLAttrNum, DontDelete, 0 },
    { "outerText", (intptr_t)JSHTMLElement::OuterTextAttrNum, DontDelete, 0 },
    { "children", (intptr_t)JSHTMLElement::ChildrenAttrNum, DontDelete|ReadOnly, 0 },
    { "contentEditable", (intptr_t)JSHTMLElement::ContentEditableAttrNum, DontDelete, 0 },
    { "isContentEditable", (intptr_t)JSHTMLElement::IsContentEditableAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSHTMLElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLElementTable = { 511, JSHTMLElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLElementConstructorTable = { 0, JSHTMLElementConstructorTableValues, 0 };

class JSHTMLElementConstructor : public DOMObject {
public:
    JSHTMLElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLElementConstructor::s_info = { "HTMLElementConstructor", 0, &JSHTMLElementConstructorTable, 0 };

bool JSHTMLElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLElementConstructor, DOMObject>(exec, &JSHTMLElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLElementPrototypeTableValues[6] =
{
    { "blur", (intptr_t)jsHTMLElementPrototypeFunctionBlur, DontDelete|Function, 0 },
    { "focus", (intptr_t)jsHTMLElementPrototypeFunctionFocus, DontDelete|Function, 0 },
    { "insertAdjacentElement", (intptr_t)jsHTMLElementPrototypeFunctionInsertAdjacentElement, DontDelete|Function, 2 },
    { "insertAdjacentHTML", (intptr_t)jsHTMLElementPrototypeFunctionInsertAdjacentHTML, DontDelete|Function, 2 },
    { "insertAdjacentText", (intptr_t)jsHTMLElementPrototypeFunctionInsertAdjacentText, DontDelete|Function, 2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLElementPrototypeTable = { 7, JSHTMLElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLElementPrototype::s_info = { "HTMLElementPrototype", 0, &JSHTMLElementPrototypeTable, 0 };

JSObject* JSHTMLElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLElementPrototype>(exec, prototypeIdentifier);
}

bool JSHTMLElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLElement::s_info = { "HTMLElement", &JSElement::s_info, &JSHTMLElementTable , 0 };

JSHTMLElement::JSHTMLElement(JSObject* prototype, HTMLElement* impl)
    : JSElement(prototype, impl)
{
}

bool JSHTMLElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLElement, Base>(exec, &JSHTMLElementTable, this, propertyName, slot);
}

JSValue* JSHTMLElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case IdAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->id());
    }
    case TitleAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->title());
    }
    case LangAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->lang());
    }
    case DirAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->dir());
    }
    case ClassNameAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->className());
    }
    case TabIndexAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsNumber(exec, imp->tabIndex());
    }
    case InnerHTMLAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->innerHTML());
    }
    case InnerTextAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->innerText());
    }
    case OuterHTMLAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->outerHTML());
    }
    case OuterTextAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->outerText());
    }
    case ChildrenAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->children()));
    }
    case ContentEditableAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsString(exec, imp->contentEditable());
    }
    case IsContentEditableAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        return jsBoolean(imp->isContentEditable());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLElement, Base>(exec, propertyName, value, &JSHTMLElementTable, this);
}

void JSHTMLElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case IdAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setId(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TitleAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setTitle(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LangAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setLang(valueToStringWithNullCheck(exec, value));
        break;
    }
    case DirAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setDir(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ClassNameAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setClassName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TabIndexAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setTabIndex(value->toInt32(exec));
        break;
    }
    case InnerHTMLAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        ExceptionCode ec = 0;
        imp->setInnerHTML(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    case InnerTextAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        ExceptionCode ec = 0;
        imp->setInnerText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    case OuterHTMLAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        ExceptionCode ec = 0;
        imp->setOuterHTML(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    case OuterTextAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        ExceptionCode ec = 0;
        imp->setOuterText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    case ContentEditableAttrNum: {
        HTMLElement* imp = static_cast<HTMLElement*>(impl());
        imp->setContentEditable(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLElementConstructor>(exec, constructorIdentifier);
}

JSValue* jsHTMLElementPrototypeFunctionBlur(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(thisValue);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());

    imp->blur();
    return jsUndefined();
}

JSValue* jsHTMLElementPrototypeFunctionFocus(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(thisValue);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());

    imp->focus();
    return jsUndefined();
}

JSValue* jsHTMLElementPrototypeFunctionInsertAdjacentElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(thisValue);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& where = args[0]->toString(exec);
    Element* element = toElement(args[1]);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->insertAdjacentElement(where, element, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsHTMLElementPrototypeFunctionInsertAdjacentHTML(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(thisValue);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& where = args[0]->toString(exec);
    const UString& html = args[1]->toString(exec);

    imp->insertAdjacentHTML(where, html, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsHTMLElementPrototypeFunctionInsertAdjacentText(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLElement* castedThisObj = static_cast<JSHTMLElement*>(thisValue);
    HTMLElement* imp = static_cast<HTMLElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& where = args[0]->toString(exec);
    const UString& text = args[1]->toString(exec);

    imp->insertAdjacentText(where, text, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

HTMLElement* toHTMLElement(KJS::JSValue* val)
{
    return val->isObject(&JSHTMLElement::s_info) ? static_cast<JSHTMLElement*>(val)->impl() : 0;
}

}

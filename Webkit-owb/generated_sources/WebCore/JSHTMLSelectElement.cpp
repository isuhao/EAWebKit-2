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

#include "JSHTMLSelectElement.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "ExceptionCode.h"
#include "HTMLFormElement.h"
#include "HTMLOptionsCollection.h"
#include "HTMLSelectElement.h"
#include "JSHTMLElement.h"
#include "JSHTMLFormElement.h"
#include "JSHTMLOptionsCollection.h"
#include "JSNode.h"
#include "KURL.h"
#include "Node.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLSelectElementTableValues[13] =
{
    { "type", (intptr_t)JSHTMLSelectElement::TypeAttrNum, DontDelete|ReadOnly, 0 },
    { "selectedIndex", (intptr_t)JSHTMLSelectElement::SelectedIndexAttrNum, DontDelete, 0 },
    { "value", (intptr_t)JSHTMLSelectElement::ValueAttrNum, DontDelete, 0 },
    { "length", (intptr_t)JSHTMLSelectElement::LengthAttrNum, DontDelete, 0 },
    { "form", (intptr_t)JSHTMLSelectElement::FormAttrNum, DontDelete|ReadOnly, 0 },
    { "options", (intptr_t)JSHTMLSelectElement::OptionsAttrNum, DontDelete|ReadOnly, 0 },
    { "disabled", (intptr_t)JSHTMLSelectElement::DisabledAttrNum, DontDelete, 0 },
    { "autofocus", (intptr_t)JSHTMLSelectElement::AutofocusAttrNum, DontDelete, 0 },
    { "multiple", (intptr_t)JSHTMLSelectElement::MultipleAttrNum, DontDelete, 0 },
    { "name", (intptr_t)JSHTMLSelectElement::NameAttrNum, DontDelete, 0 },
    { "size", (intptr_t)JSHTMLSelectElement::SizeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLSelectElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLSelectElementTable = { 127, JSHTMLSelectElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLSelectElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLSelectElementConstructorTable = { 0, JSHTMLSelectElementConstructorTableValues, 0 };

class JSHTMLSelectElementConstructor : public DOMObject {
public:
    JSHTMLSelectElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLSelectElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLSelectElementConstructor::s_info = { "HTMLSelectElementConstructor", 0, &JSHTMLSelectElementConstructorTable, 0 };

bool JSHTMLSelectElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLSelectElementConstructor, DOMObject>(exec, &JSHTMLSelectElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLSelectElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLSelectElementPrototypeTableValues[5] =
{
    { "add", (intptr_t)jsHTMLSelectElementPrototypeFunctionAdd, DontDelete|Function, 2 },
    { "remove", (intptr_t)jsHTMLSelectElementPrototypeFunctionRemove, DontDelete|Function, 0 },
    { "item", (intptr_t)jsHTMLSelectElementPrototypeFunctionItem, DontDelete|Function, 1 },
    { "namedItem", (intptr_t)jsHTMLSelectElementPrototypeFunctionNamedItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLSelectElementPrototypeTable = { 15, JSHTMLSelectElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLSelectElementPrototype::s_info = { "HTMLSelectElementPrototype", 0, &JSHTMLSelectElementPrototypeTable, 0 };

JSObject* JSHTMLSelectElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLSelectElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLSelectElementPrototype>(exec, prototypeIdentifier);
}

bool JSHTMLSelectElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLSelectElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLSelectElement::s_info = { "HTMLSelectElement", &JSHTMLElement::s_info, &JSHTMLSelectElementTable , 0 };

JSHTMLSelectElement::JSHTMLSelectElement(JSObject* prototype, HTMLSelectElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLSelectElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSHTMLSelectElementTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSHTMLSelectElement>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<HTMLSelectElement*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLSelectElement, Base>(exec, &JSHTMLSelectElementTable, this, propertyName, slot);
}

bool JSHTMLSelectElement::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<HTMLSelectElement*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSHTMLSelectElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TypeAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsString(exec, imp->type());
    }
    case SelectedIndexAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsNumber(exec, imp->selectedIndex());
    }
    case ValueAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsString(exec, imp->value());
    }
    case LengthAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsNumber(exec, imp->length());
    }
    case FormAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->form()));
    }
    case OptionsAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->options()));
    }
    case DisabledAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsBoolean(imp->disabled());
    }
    case AutofocusAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsBoolean(imp->autofocus());
    }
    case MultipleAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsBoolean(imp->multiple());
    }
    case NameAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsString(exec, imp->name());
    }
    case SizeAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        return jsNumber(exec, imp->size());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLSelectElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok) {
        indexSetter(exec, index, value);
        return;
    }
    lookupPut<JSHTMLSelectElement, Base>(exec, propertyName, value, &JSHTMLSelectElementTable, this);
}

void JSHTMLSelectElement::put(ExecState* exec, unsigned propertyName, JSValue* value)
{
    indexSetter(exec, propertyName, value);
    return;
}

void JSHTMLSelectElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case SelectedIndexAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setSelectedIndex(value->toInt32(exec));
        break;
    }
    case ValueAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LengthAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        ExceptionCode ec = 0;
        imp->setLength(value->toInt32(exec), ec);
        setDOMException(exec, ec);
        break;
    }
    case DisabledAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setDisabled(value->toBoolean(exec));
        break;
    }
    case AutofocusAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setAutofocus(value->toBoolean(exec));
        break;
    }
    case MultipleAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setMultiple(value->toBoolean(exec));
        break;
    }
    case NameAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SizeAttrNum: {
        HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(impl());
        imp->setSize(value->toInt32(exec));
        break;
    }
    }
}

void JSHTMLSelectElement::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<HTMLSelectElement*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSHTMLSelectElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLSelectElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLSelectElementConstructor>(exec, constructorIdentifier);
}

JSValue* jsHTMLSelectElementPrototypeFunctionAdd(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLSelectElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLSelectElement* castedThisObj = static_cast<JSHTMLSelectElement*>(thisValue);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    HTMLElement* element = toHTMLElement(args[0]);
    HTMLElement* before = toHTMLElement(args[1]);

    imp->add(element, before, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsHTMLSelectElementPrototypeFunctionRemove(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLSelectElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLSelectElement* castedThisObj = static_cast<JSHTMLSelectElement*>(thisValue);
    return castedThisObj->remove(exec, args);
}

JSValue* jsHTMLSelectElementPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLSelectElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLSelectElement* castedThisObj = static_cast<JSHTMLSelectElement*>(thisValue);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThisObj->impl());
    int index = args[0]->toInt32(exec);
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->item(index)));
    return result;
}

JSValue* jsHTMLSelectElementPrototypeFunctionNamedItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLSelectElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLSelectElement* castedThisObj = static_cast<JSHTMLSelectElement*>(thisValue);
    HTMLSelectElement* imp = static_cast<HTMLSelectElement*>(castedThisObj->impl());
    const UString& name = args[0]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->namedItem(name)));
    return result;
}


JSValue* JSHTMLSelectElement::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSHTMLSelectElement* thisObj = static_cast<JSHTMLSelectElement*>(slot.slotBase());
    return toJS(exec, static_cast<HTMLSelectElement*>(thisObj->impl())->item(slot.index()));
}

}

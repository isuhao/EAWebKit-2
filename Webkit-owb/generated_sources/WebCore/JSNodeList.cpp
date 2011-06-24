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

#include "JSNodeList.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "AtomicString.h"
#include "ExceptionCode.h"
#include "JSNode.h"
#include "Node.h"
#include "NodeList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNodeListTableValues[3] =
{
    { "length", (intptr_t)JSNodeList::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSNodeList::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNodeListTable = { 15, JSNodeListTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSNodeListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSNodeListConstructorTable = { 0, JSNodeListConstructorTableValues, 0 };

class JSNodeListConstructor : public DOMObject {
public:
    JSNodeListConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSNodeListPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSNodeListConstructor::s_info = { "NodeListConstructor", 0, &JSNodeListConstructorTable, 0 };

bool JSNodeListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeListConstructor, DOMObject>(exec, &JSNodeListConstructorTable, this, propertyName, slot);
}

JSValue* JSNodeListConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSNodeListPrototypeTableValues[2] =
{
    { "item", (intptr_t)jsNodeListPrototypeFunctionItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNodeListPrototypeTable = { 0, JSNodeListPrototypeTableValues, 0 };

const ClassInfo JSNodeListPrototype::s_info = { "NodeListPrototype", 0, &JSNodeListPrototypeTable, 0 };

JSObject* JSNodeListPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSNodeList.prototype]]");
    return KJS::cacheGlobalObject<JSNodeListPrototype>(exec, prototypeIdentifier);
}

bool JSNodeListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNodeListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSNodeList::s_info = { "NodeList", 0, &JSNodeListTable , 0 };

JSNodeList::JSNodeList(JSObject* prototype, NodeList* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSNodeList::~JSNodeList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSNodeList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSNodeListTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSNodeList>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<NodeList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<NodeList*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSNodeList, Base>(exec, &JSNodeListTable, this, propertyName, slot);
}

bool JSNodeList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<NodeList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSNodeList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        NodeList* imp = static_cast<NodeList*>(impl());
        return jsNumber(exec, imp->length());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSNodeList::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<NodeList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSNodeList::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[NodeList.constructor]]");
    return KJS::cacheGlobalObject<JSNodeListConstructor>(exec, constructorIdentifier);
}

JSValue* jsNodeListPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNodeList::s_info))
        return throwError(exec, TypeError);
    JSNodeList* castedThisObj = static_cast<JSNodeList*>(thisValue);
    NodeList* imp = static_cast<NodeList*>(castedThisObj->impl());
    int index = args[0]->toInt32(exec);
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->item(index)));
    return result;
}


JSValue* JSNodeList::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSNodeList* thisObj = static_cast<JSNodeList*>(slot.slotBase());
    return toJS(exec, static_cast<NodeList*>(thisObj->impl())->item(slot.index()));
}
KJS::JSValue* toJS(KJS::ExecState* exec, NodeList* obj)
{
    return cacheDOMObject<NodeList, JSNodeList, JSNodeListPrototype>(exec, obj);
}
NodeList* toNodeList(KJS::JSValue* val)
{
    return val->isObject(&JSNodeList::s_info) ? static_cast<JSNodeList*>(val)->impl() : 0;
}

}

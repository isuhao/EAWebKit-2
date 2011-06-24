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

#include "JSHistory.h"

#include <wtf/GetPtr.h>

#include "History.h"
#include "JSHistoryCustom.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHistoryTableValues[2] =
{
    { "length", (intptr_t)JSHistory::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHistoryTable = { 0, JSHistoryTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSHistoryPrototypeTableValues[4] =
{
    { "back", (intptr_t)jsHistoryPrototypeFunctionBack, DontDelete|Function, 0 },
    { "forward", (intptr_t)jsHistoryPrototypeFunctionForward, DontDelete|Function, 0 },
    { "go", (intptr_t)jsHistoryPrototypeFunctionGo, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHistoryPrototypeTable = { 31, JSHistoryPrototypeTableValues, 0 };

const ClassInfo JSHistoryPrototype::s_info = { "HistoryPrototype", 0, &JSHistoryPrototypeTable, 0 };

JSObject* JSHistoryPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHistory.prototype]]");
    return KJS::cacheGlobalObject<JSHistoryPrototype>(exec, prototypeIdentifier);
}

bool JSHistoryPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHistoryPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHistory::s_info = { "History", 0, &JSHistoryTable , 0 };

JSHistory::JSHistory(JSObject* prototype, History* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSHistory::~JSHistory()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSHistory::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (customGetOwnPropertySlot(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHistory, Base>(exec, &JSHistoryTable, this, propertyName, slot);
}

JSValue* JSHistory::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        History* imp = static_cast<History*>(impl());
        return jsNumber(exec, imp->length());
    }
    }
    return 0;
}

void JSHistory::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    if (customPut(exec, propertyName, value))
        return;
    Base::put(exec, propertyName, value);
}

void JSHistory::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    if (customGetPropertyNames(exec, propertyNames))
        return;
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* jsHistoryPrototypeFunctionBack(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHistory::s_info))
        return throwError(exec, TypeError);
    JSHistory* castedThisObj = static_cast<JSHistory*>(thisValue);
    History* imp = static_cast<History*>(castedThisObj->impl());

    imp->back();
    return jsUndefined();
}

JSValue* jsHistoryPrototypeFunctionForward(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHistory::s_info))
        return throwError(exec, TypeError);
    JSHistory* castedThisObj = static_cast<JSHistory*>(thisValue);
    History* imp = static_cast<History*>(castedThisObj->impl());

    imp->forward();
    return jsUndefined();
}

JSValue* jsHistoryPrototypeFunctionGo(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHistory::s_info))
        return throwError(exec, TypeError);
    JSHistory* castedThisObj = static_cast<JSHistory*>(thisValue);
    History* imp = static_cast<History*>(castedThisObj->impl());
    int distance = args[0]->toInt32(exec);

    imp->go(distance);
    return jsUndefined();
}

KJS::JSValue* toJS(KJS::ExecState* exec, History* obj)
{
    return cacheDOMObject<History, JSHistory, JSHistoryPrototype>(exec, obj);
}
History* toHistory(KJS::JSValue* val)
{
    return val->isObject(&JSHistory::s_info) ? static_cast<JSHistory*>(val)->impl() : 0;
}

}

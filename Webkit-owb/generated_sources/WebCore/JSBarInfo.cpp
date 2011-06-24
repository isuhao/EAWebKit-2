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

#include "JSBarInfo.h"

#include <wtf/GetPtr.h>

#include "BarInfo.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSBarInfoTableValues[2] =
{
    { "visible", (intptr_t)JSBarInfo::VisibleAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSBarInfoTable = { 0, JSBarInfoTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSBarInfoPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSBarInfoPrototypeTable = { 0, JSBarInfoPrototypeTableValues, 0 };

const ClassInfo JSBarInfoPrototype::s_info = { "BarInfoPrototype", 0, &JSBarInfoPrototypeTable, 0 };

JSObject* JSBarInfoPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSBarInfo.prototype]]");
    return KJS::cacheGlobalObject<JSBarInfoPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSBarInfo::s_info = { "BarInfo", 0, &JSBarInfoTable , 0 };

JSBarInfo::JSBarInfo(JSObject* prototype, BarInfo* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSBarInfo::~JSBarInfo()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSBarInfo::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBarInfo, Base>(exec, &JSBarInfoTable, this, propertyName, slot);
}

JSValue* JSBarInfo::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case VisibleAttrNum: {
        BarInfo* imp = static_cast<BarInfo*>(impl());
        return jsBoolean(imp->visible());
    }
    }
    return 0;
}

KJS::JSValue* toJS(KJS::ExecState* exec, BarInfo* obj)
{
    return cacheDOMObject<BarInfo, JSBarInfo, JSBarInfoPrototype>(exec, obj);
}
BarInfo* toBarInfo(KJS::JSValue* val)
{
    return val->isObject(&JSBarInfo::s_info) ? static_cast<JSBarInfo*>(val)->impl() : 0;
}

}

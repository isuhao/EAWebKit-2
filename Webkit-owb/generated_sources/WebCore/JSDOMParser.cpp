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

#include "JSDOMParser.h"

#include <wtf/GetPtr.h>

#include "DOMParser.h"
#include "Document.h"
#include "JSDocument.h"
#include "NodeFilter.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMParserTableValues[2] =
{
    { "constructor", (intptr_t)JSDOMParser::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMParserTable = { 0, JSDOMParserTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSDOMParserConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMParserConstructorTable = { 0, JSDOMParserConstructorTableValues, 0 };

class JSDOMParserConstructor : public DOMObject {
public:
    JSDOMParserConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSDOMParserPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
    static JSObject* construct(ExecState* exec, JSObject*, const ArgList&)
    {
        return static_cast<JSObject*>(toJS(exec, DOMParser::create()));
    }
    virtual ConstructType getConstructData(ConstructData& constructData)
    {
        constructData.native.function = construct;
        return ConstructTypeNative;
    }
};

const ClassInfo JSDOMParserConstructor::s_info = { "DOMParserConstructor", 0, &JSDOMParserConstructorTable, 0 };

bool JSDOMParserConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParserConstructor, DOMObject>(exec, &JSDOMParserConstructorTable, this, propertyName, slot);
}

JSValue* JSDOMParserConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSDOMParserPrototypeTableValues[2] =
{
    { "parseFromString", (intptr_t)jsDOMParserPrototypeFunctionParseFromString, DontDelete|Function, 2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMParserPrototypeTable = { 0, JSDOMParserPrototypeTableValues, 0 };

const ClassInfo JSDOMParserPrototype::s_info = { "DOMParserPrototype", 0, &JSDOMParserPrototypeTable, 0 };

JSObject* JSDOMParserPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSDOMParser.prototype]]");
    return KJS::cacheGlobalObject<JSDOMParserPrototype>(exec, prototypeIdentifier);
}

bool JSDOMParserPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMParserPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSDOMParser::s_info = { "DOMParser", 0, &JSDOMParserTable , 0 };

JSDOMParser::JSDOMParser(JSObject* prototype, DOMParser* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSDOMParser::~JSDOMParser()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSDOMParser::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParser, Base>(exec, &JSDOMParserTable, this, propertyName, slot);
}

JSValue* JSDOMParser::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSDOMParser::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[DOMParser.constructor]]");
    return KJS::cacheGlobalObject<JSDOMParserConstructor>(exec, constructorIdentifier);
}

JSValue* jsDOMParserPrototypeFunctionParseFromString(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMParser::s_info))
        return throwError(exec, TypeError);
    JSDOMParser* castedThisObj = static_cast<JSDOMParser*>(thisValue);
    DOMParser* imp = static_cast<DOMParser*>(castedThisObj->impl());
    const UString& str = args[0]->toString(exec);
    const UString& contentType = args[1]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->parseFromString(str, contentType)));
    return result;
}

KJS::JSValue* toJS(KJS::ExecState* exec, DOMParser* obj)
{
    return cacheDOMObject<DOMParser, JSDOMParser, JSDOMParserPrototype>(exec, obj);
}
DOMParser* toDOMParser(KJS::JSValue* val)
{
    return val->isObject(&JSDOMParser::s_info) ? static_cast<JSDOMParser*>(val)->impl() : 0;
}

}

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

#include "JSHTMLUListElement.h"

#include <wtf/GetPtr.h>

#include "HTMLUListElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLUListElementTableValues[4] =
{
    { "compact", (intptr_t)JSHTMLUListElement::CompactAttrNum, DontDelete, 0 },
    { "type", (intptr_t)JSHTMLUListElement::TypeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLUListElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLUListElementTable = { 7, JSHTMLUListElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLUListElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLUListElementConstructorTable = { 0, JSHTMLUListElementConstructorTableValues, 0 };

class JSHTMLUListElementConstructor : public DOMObject {
public:
    JSHTMLUListElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLUListElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLUListElementConstructor::s_info = { "HTMLUListElementConstructor", 0, &JSHTMLUListElementConstructorTable, 0 };

bool JSHTMLUListElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLUListElementConstructor, DOMObject>(exec, &JSHTMLUListElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLUListElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLUListElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLUListElementPrototypeTable = { 0, JSHTMLUListElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLUListElementPrototype::s_info = { "HTMLUListElementPrototype", 0, &JSHTMLUListElementPrototypeTable, 0 };

JSObject* JSHTMLUListElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLUListElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLUListElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLUListElement::s_info = { "HTMLUListElement", &JSHTMLElement::s_info, &JSHTMLUListElementTable , 0 };

JSHTMLUListElement::JSHTMLUListElement(JSObject* prototype, HTMLUListElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLUListElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLUListElement, Base>(exec, &JSHTMLUListElementTable, this, propertyName, slot);
}

JSValue* JSHTMLUListElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CompactAttrNum: {
        HTMLUListElement* imp = static_cast<HTMLUListElement*>(impl());
        return jsBoolean(imp->compact());
    }
    case TypeAttrNum: {
        HTMLUListElement* imp = static_cast<HTMLUListElement*>(impl());
        return jsString(exec, imp->type());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLUListElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLUListElement, Base>(exec, propertyName, value, &JSHTMLUListElementTable, this);
}

void JSHTMLUListElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CompactAttrNum: {
        HTMLUListElement* imp = static_cast<HTMLUListElement*>(impl());
        imp->setCompact(value->toBoolean(exec));
        break;
    }
    case TypeAttrNum: {
        HTMLUListElement* imp = static_cast<HTMLUListElement*>(impl());
        imp->setType(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLUListElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLUListElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLUListElementConstructor>(exec, constructorIdentifier);
}


}

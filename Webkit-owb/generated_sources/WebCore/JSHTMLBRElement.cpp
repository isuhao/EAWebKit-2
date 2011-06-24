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

#include "JSHTMLBRElement.h"

#include <wtf/GetPtr.h>

#include "HTMLBRElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLBRElementTableValues[3] =
{
    { "clear", (intptr_t)JSHTMLBRElement::ClearAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLBRElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBRElementTable = { 3, JSHTMLBRElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLBRElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBRElementConstructorTable = { 0, JSHTMLBRElementConstructorTableValues, 0 };

class JSHTMLBRElementConstructor : public DOMObject {
public:
    JSHTMLBRElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLBRElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLBRElementConstructor::s_info = { "HTMLBRElementConstructor", 0, &JSHTMLBRElementConstructorTable, 0 };

bool JSHTMLBRElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElementConstructor, DOMObject>(exec, &JSHTMLBRElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLBRElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBRElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBRElementPrototypeTable = { 0, JSHTMLBRElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLBRElementPrototype::s_info = { "HTMLBRElementPrototype", 0, &JSHTMLBRElementPrototypeTable, 0 };

JSObject* JSHTMLBRElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLBRElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLBRElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLBRElement::s_info = { "HTMLBRElement", &JSHTMLElement::s_info, &JSHTMLBRElementTable , 0 };

JSHTMLBRElement::JSHTMLBRElement(JSObject* prototype, HTMLBRElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLBRElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, this, propertyName, slot);
}

JSValue* JSHTMLBRElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ClearAttrNum: {
        HTMLBRElement* imp = static_cast<HTMLBRElement*>(impl());
        return jsString(exec, imp->clear());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLBRElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLBRElement, Base>(exec, propertyName, value, &JSHTMLBRElementTable, this);
}

void JSHTMLBRElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ClearAttrNum: {
        HTMLBRElement* imp = static_cast<HTMLBRElement*>(impl());
        imp->setClear(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLBRElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLBRElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLBRElementConstructor>(exec, constructorIdentifier);
}


}

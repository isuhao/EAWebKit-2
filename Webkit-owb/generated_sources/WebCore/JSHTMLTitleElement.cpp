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

#include "JSHTMLTitleElement.h"

#include <wtf/GetPtr.h>

#include "HTMLTitleElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLTitleElementTableValues[3] =
{
    { "text", (intptr_t)JSHTMLTitleElement::TextAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLTitleElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTitleElementTable = { 1, JSHTMLTitleElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLTitleElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTitleElementConstructorTable = { 0, JSHTMLTitleElementConstructorTableValues, 0 };

class JSHTMLTitleElementConstructor : public DOMObject {
public:
    JSHTMLTitleElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTitleElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTitleElementConstructor::s_info = { "HTMLTitleElementConstructor", 0, &JSHTMLTitleElementConstructorTable, 0 };

bool JSHTMLTitleElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTitleElementConstructor, DOMObject>(exec, &JSHTMLTitleElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTitleElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTitleElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTitleElementPrototypeTable = { 0, JSHTMLTitleElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLTitleElementPrototype::s_info = { "HTMLTitleElementPrototype", 0, &JSHTMLTitleElementPrototypeTable, 0 };

JSObject* JSHTMLTitleElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLTitleElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLTitleElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLTitleElement::s_info = { "HTMLTitleElement", &JSHTMLElement::s_info, &JSHTMLTitleElementTable , 0 };

JSHTMLTitleElement::JSHTMLTitleElement(JSObject* prototype, HTMLTitleElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLTitleElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTitleElement, Base>(exec, &JSHTMLTitleElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTitleElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TextAttrNum: {
        HTMLTitleElement* imp = static_cast<HTMLTitleElement*>(impl());
        return jsString(exec, imp->text());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTitleElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLTitleElement, Base>(exec, propertyName, value, &JSHTMLTitleElementTable, this);
}

void JSHTMLTitleElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case TextAttrNum: {
        HTMLTitleElement* imp = static_cast<HTMLTitleElement*>(impl());
        imp->setText(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTitleElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLTitleElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLTitleElementConstructor>(exec, constructorIdentifier);
}


}

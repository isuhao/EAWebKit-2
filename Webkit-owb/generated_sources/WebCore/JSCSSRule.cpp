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

#include "JSCSSRule.h"

#include <wtf/GetPtr.h>

#include "CSSRule.h"
#include "CSSStyleSheet.h"
#include "JSCSSRule.h"
#include "JSCSSStyleSheet.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSRuleTableValues[6] =
{
    { "type", (intptr_t)JSCSSRule::TypeAttrNum, DontDelete|ReadOnly, 0 },
    { "cssText", (intptr_t)JSCSSRule::CssTextAttrNum, DontDelete, 0 },
    { "parentStyleSheet", (intptr_t)JSCSSRule::ParentStyleSheetAttrNum, DontDelete|ReadOnly, 0 },
    { "parentRule", (intptr_t)JSCSSRule::ParentRuleAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSRule::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSRuleTable = { 63, JSCSSRuleTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSRuleConstructorTableValues[9] =
{
    { "UNKNOWN_RULE", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "STYLE_RULE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CHARSET_RULE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "IMPORT_RULE", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "MEDIA_RULE", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "FONT_FACE_RULE", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "PAGE_RULE", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "VARIABLES_RULE", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSRuleConstructorTable = { 31, JSCSSRuleConstructorTableValues, 0 };

class JSCSSRuleConstructor : public DOMObject {
public:
    JSCSSRuleConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSRuleConstructor::s_info = { "CSSRuleConstructor", 0, &JSCSSRuleConstructorTable, 0 };

bool JSCSSRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRuleConstructor, DOMObject>(exec, &JSCSSRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSRuleConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSRulePrototypeTableValues[9] =
{
    { "UNKNOWN_RULE", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "STYLE_RULE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CHARSET_RULE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "IMPORT_RULE", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "MEDIA_RULE", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "FONT_FACE_RULE", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "PAGE_RULE", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "VARIABLES_RULE", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSRulePrototypeTable = { 31, JSCSSRulePrototypeTableValues, 0 };

const ClassInfo JSCSSRulePrototype::s_info = { "CSSRulePrototype", 0, &JSCSSRulePrototypeTable, 0 };

JSObject* JSCSSRulePrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSCSSRule.prototype]]");
    return KJS::cacheGlobalObject<JSCSSRulePrototype>(exec, prototypeIdentifier);
}

bool JSCSSRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRulePrototype, JSObject>(exec, &JSCSSRulePrototypeTable, this, propertyName, slot);
}

JSValue* JSCSSRulePrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSCSSRule::s_info = { "CSSRule", 0, &JSCSSRuleTable , 0 };

JSCSSRule::JSCSSRule(JSObject* prototype, CSSRule* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSCSSRule::~JSCSSRule()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSCSSRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRule, Base>(exec, &JSCSSRuleTable, this, propertyName, slot);
}

JSValue* JSCSSRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TypeAttrNum: {
        CSSRule* imp = static_cast<CSSRule*>(impl());
        return jsNumber(exec, imp->type());
    }
    case CssTextAttrNum: {
        CSSRule* imp = static_cast<CSSRule*>(impl());
        return jsStringOrNull(exec, imp->cssText());
    }
    case ParentStyleSheetAttrNum: {
        CSSRule* imp = static_cast<CSSRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->parentStyleSheet()));
    }
    case ParentRuleAttrNum: {
        CSSRule* imp = static_cast<CSSRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->parentRule()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSRule::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSCSSRule, Base>(exec, propertyName, value, &JSCSSRuleTable, this);
}

void JSCSSRule::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CssTextAttrNum: {
        CSSRule* imp = static_cast<CSSRule*>(impl());
        ExceptionCode ec = 0;
        imp->setCssText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSCSSRule::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[CSSRule.constructor]]");
    return KJS::cacheGlobalObject<JSCSSRuleConstructor>(exec, constructorIdentifier);
}

CSSRule* toCSSRule(KJS::JSValue* val)
{
    return val->isObject(&JSCSSRule::s_info) ? static_cast<JSCSSRule*>(val)->impl() : 0;
}

}

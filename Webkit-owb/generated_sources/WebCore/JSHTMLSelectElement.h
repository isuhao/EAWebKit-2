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

#ifndef JSHTMLSelectElement_h
#define JSHTMLSelectElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLSelectElement;

class JSHTMLSelectElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLSelectElement(KJS::JSObject* prototype, HTMLSelectElement*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    virtual bool getOwnPropertySlot(KJS::ExecState*, unsigned propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    virtual void put(KJS::ExecState*, unsigned propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    virtual void getPropertyNames(KJS::ExecState*, KJS::PropertyNameArray&);
    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        TypeAttrNum, SelectedIndexAttrNum, ValueAttrNum, LengthAttrNum, 
        FormAttrNum, OptionsAttrNum, DisabledAttrNum, AutofocusAttrNum, 
        MultipleAttrNum, NameAttrNum, SizeAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };

    // Custom functions
    KJS::JSValue* remove(KJS::ExecState*, const KJS::ArgList&);
    static KJS::JSValue* indexGetter(KJS::ExecState*, const KJS::Identifier&, const KJS::PropertySlot&);
    void indexSetter(KJS::ExecState*, unsigned index, KJS::JSValue*);
};


class JSHTMLSelectElementPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSHTMLSelectElementPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSHTMLElementPrototype::self(exec)) { }
};

// Functions

KJS::JSValue* jsHTMLSelectElementPrototypeFunctionAdd(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLSelectElementPrototypeFunctionRemove(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLSelectElementPrototypeFunctionItem(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLSelectElementPrototypeFunctionNamedItem(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

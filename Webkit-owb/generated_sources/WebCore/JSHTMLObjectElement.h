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

#ifndef JSHTMLObjectElement_h
#define JSHTMLObjectElement_h

#include "JSHTMLElement.h"
#include <kjs/CallData.h>

namespace WebCore {

class HTMLObjectElement;

class JSHTMLObjectElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLObjectElement(KJS::JSObject* prototype, HTMLObjectElement*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    bool customGetOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    bool customPut(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    virtual KJS::CallType getCallData(KJS::CallData&);

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        FormAttrNum, CodeAttrNum, AlignAttrNum, ArchiveAttrNum, 
        BorderAttrNum, CodeBaseAttrNum, CodeTypeAttrNum, DataAttrNum, 
        DeclareAttrNum, HeightAttrNum, HspaceAttrNum, NameAttrNum, 
        StandbyAttrNum, TypeAttrNum, UseMapAttrNum, VspaceAttrNum, 
        WidthAttrNum, ContentDocumentAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
private:
    static bool canGetItemsForName(KJS::ExecState*, HTMLObjectElement*, const KJS::Identifier&);
    static KJS::JSValue* nameGetter(KJS::ExecState*, const KJS::Identifier&, const KJS::PropertySlot&);
};


class JSHTMLObjectElementPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    JSHTMLObjectElementPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSHTMLElementPrototype::self(exec)) { }
};

} // namespace WebCore

#endif

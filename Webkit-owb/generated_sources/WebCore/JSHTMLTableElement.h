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

#ifndef JSHTMLTableElement_h
#define JSHTMLTableElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLTableElement;

class JSHTMLTableElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLTableElement(KJS::JSObject* prototype, HTMLTableElement*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        CaptionAttrNum, THeadAttrNum, TFootAttrNum, RowsAttrNum, 
        TBodiesAttrNum, AlignAttrNum, BgColorAttrNum, BorderAttrNum, 
        CellPaddingAttrNum, CellSpacingAttrNum, FrameAttrNum, RulesAttrNum, 
        SummaryAttrNum, WidthAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
};


class JSHTMLTableElementPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSHTMLTableElementPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSHTMLElementPrototype::self(exec)) { }
};

// Functions

KJS::JSValue* jsHTMLTableElementPrototypeFunctionCreateTHead(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionDeleteTHead(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionCreateTFoot(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionDeleteTFoot(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionCreateCaption(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionDeleteCaption(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionInsertRow(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLTableElementPrototypeFunctionDeleteRow(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

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

#ifndef JSHTMLOptionsCollection_h
#define JSHTMLOptionsCollection_h

#include "JSHTMLCollection.h"
#include "HTMLOptionsCollection.h"
namespace WebCore {

class HTMLOptionsCollection;

class JSHTMLOptionsCollection : public JSHTMLCollection {
    typedef JSHTMLCollection Base;
public:
    JSHTMLOptionsCollection(KJS::JSObject* prototype, HTMLOptionsCollection*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    virtual void put(KJS::ExecState*, unsigned propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    enum {
        // Attributes
        SelectedIndexAttrNum, LengthAttrNum, 
    };

    // Custom attributes
    KJS::JSValue* length(KJS::ExecState*) const;
    void setLength(KJS::ExecState*, KJS::JSValue*);

    // Custom functions
    KJS::JSValue* add(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* remove(KJS::ExecState*, const KJS::ArgList&);
    HTMLOptionsCollection* impl() const
    {
        return static_cast<HTMLOptionsCollection*>(Base::impl());
    }
    void indexSetter(KJS::ExecState*, unsigned index, KJS::JSValue*);
};

HTMLOptionsCollection* toHTMLOptionsCollection(KJS::JSValue*);

class JSHTMLOptionsCollectionPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSHTMLOptionsCollectionPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSHTMLCollectionPrototype::self(exec)) { }
};

// Functions

KJS::JSValue* jsHTMLOptionsCollectionPrototypeFunctionAdd(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsHTMLOptionsCollectionPrototypeFunctionRemove(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

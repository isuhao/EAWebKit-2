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

#ifndef JSUIEvent_h
#define JSUIEvent_h

#include "JSEvent.h"

namespace WebCore {

class UIEvent;

class JSUIEvent : public JSEvent {
    typedef JSEvent Base;
public:
    JSUIEvent(KJS::JSObject* prototype, UIEvent*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        ViewAttrNum, DetailAttrNum, KeyCodeAttrNum, CharCodeAttrNum, 
        LayerXAttrNum, LayerYAttrNum, PageXAttrNum, PageYAttrNum, 
        WhichAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
};


class JSUIEventPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSUIEventPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSEventPrototype::self(exec)) { }
};

// Functions

KJS::JSValue* jsUIEventPrototypeFunctionInitUIEvent(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

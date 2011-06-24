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

#ifndef JSKeyboardEvent_h
#define JSKeyboardEvent_h

#include "JSUIEvent.h"

namespace WebCore {

class KeyboardEvent;

class JSKeyboardEvent : public JSUIEvent {
    typedef JSUIEvent Base;
public:
    JSKeyboardEvent(KJS::JSObject* prototype, KeyboardEvent*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        KeyIdentifierAttrNum, KeyLocationAttrNum, CtrlKeyAttrNum, ShiftKeyAttrNum, 
        AltKeyAttrNum, MetaKeyAttrNum, AltGraphKeyAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
};


class JSKeyboardEventPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSKeyboardEventPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSUIEventPrototype::self(exec)) { }
};

// Functions

KJS::JSValue* jsKeyboardEventPrototypeFunctionInitKeyboardEvent(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

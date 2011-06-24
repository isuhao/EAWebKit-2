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

#include "JSFileList.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "ExceptionCode.h"
#include "File.h"
#include "FileList.h"
#include "JSFile.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSFileListTableValues[3] =
{
    { "length", (intptr_t)JSFileList::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSFileList::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSFileListTable = { 15, JSFileListTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSFileListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSFileListConstructorTable = { 0, JSFileListConstructorTableValues, 0 };

class JSFileListConstructor : public DOMObject {
public:
    JSFileListConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSFileListPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSFileListConstructor::s_info = { "FileListConstructor", 0, &JSFileListConstructorTable, 0 };

bool JSFileListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileListConstructor, DOMObject>(exec, &JSFileListConstructorTable, this, propertyName, slot);
}

JSValue* JSFileListConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSFileListPrototypeTableValues[2] =
{
    { "item", (intptr_t)jsFileListPrototypeFunctionItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSFileListPrototypeTable = { 0, JSFileListPrototypeTableValues, 0 };

const ClassInfo JSFileListPrototype::s_info = { "FileListPrototype", 0, &JSFileListPrototypeTable, 0 };

JSObject* JSFileListPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSFileList.prototype]]");
    return KJS::cacheGlobalObject<JSFileListPrototype>(exec, prototypeIdentifier);
}

bool JSFileListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSFileListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSFileList::s_info = { "FileList", 0, &JSFileListTable , 0 };

JSFileList::JSFileList(JSObject* prototype, FileList* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSFileList::~JSFileList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSFileList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSFileListTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSFileList>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<FileList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSFileList, Base>(exec, &JSFileListTable, this, propertyName, slot);
}

bool JSFileList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<FileList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSFileList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        FileList* imp = static_cast<FileList*>(impl());
        return jsNumber(exec, imp->length());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSFileList::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<FileList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSFileList::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[FileList.constructor]]");
    return KJS::cacheGlobalObject<JSFileListConstructor>(exec, constructorIdentifier);
}

JSValue* jsFileListPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSFileList::s_info))
        return throwError(exec, TypeError);
    JSFileList* castedThisObj = static_cast<JSFileList*>(thisValue);
    FileList* imp = static_cast<FileList*>(castedThisObj->impl());
    int index = args[0]->toInt32(exec);
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->item(index)));
    return result;
}


JSValue* JSFileList::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSFileList* thisObj = static_cast<JSFileList*>(slot.slotBase());
    return toJS(exec, static_cast<FileList*>(thisObj->impl())->item(slot.index()));
}
KJS::JSValue* toJS(KJS::ExecState* exec, FileList* obj)
{
    return cacheDOMObject<FileList, JSFileList, JSFileListPrototype>(exec, obj);
}
FileList* toFileList(KJS::JSValue* val)
{
    return val->isObject(&JSFileList::s_info) ? static_cast<JSFileList*>(val)->impl() : 0;
}

}

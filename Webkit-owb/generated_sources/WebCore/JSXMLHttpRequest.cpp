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

#include "JSXMLHttpRequest.h"

#include <wtf/GetPtr.h>

#include "Document.h"
#include "JSDocument.h"
#include "KURL.h"
#include "XMLHttpRequest.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSXMLHttpRequestTableValues[12] =
{
    { "onabort", (intptr_t)JSXMLHttpRequest::OnabortAttrNum, DontDelete, 0 },
    { "onerror", (intptr_t)JSXMLHttpRequest::OnerrorAttrNum, DontDelete, 0 },
    { "onload", (intptr_t)JSXMLHttpRequest::OnloadAttrNum, DontDelete, 0 },
    { "onloadstart", (intptr_t)JSXMLHttpRequest::OnloadstartAttrNum, DontDelete, 0 },
    { "onprogress", (intptr_t)JSXMLHttpRequest::OnprogressAttrNum, DontDelete, 0 },
    { "onreadystatechange", (intptr_t)JSXMLHttpRequest::OnreadystatechangeAttrNum, DontDelete, 0 },
    { "readyState", (intptr_t)JSXMLHttpRequest::ReadyStateAttrNum, DontDelete|ReadOnly, 0 },
    { "responseText", (intptr_t)JSXMLHttpRequest::ResponseTextAttrNum, DontDelete|ReadOnly, 0 },
    { "responseXML", (intptr_t)JSXMLHttpRequest::ResponseXMLAttrNum, DontDelete|ReadOnly, 0 },
    { "status", (intptr_t)JSXMLHttpRequest::StatusAttrNum, DontDelete|ReadOnly, 0 },
    { "statusText", (intptr_t)JSXMLHttpRequest::StatusTextAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestTable = { 127, JSXMLHttpRequestTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestPrototypeTableValues[16] =
{
    { "UNSENT", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "OPENED", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "HEADERS_RECEIVED", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "LOADING", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "DONE", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "open", (intptr_t)jsXMLHttpRequestPrototypeFunctionOpen, DontDelete|Function, 5 },
    { "setRequestHeader", (intptr_t)jsXMLHttpRequestPrototypeFunctionSetRequestHeader, DontDelete|Function, 2 },
    { "send", (intptr_t)jsXMLHttpRequestPrototypeFunctionSend, DontDelete|Function, 1 },
    { "abort", (intptr_t)jsXMLHttpRequestPrototypeFunctionAbort, DontDelete|Function, 0 },
    { "getAllResponseHeaders", (intptr_t)jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders, DontDelete|Function, 0 },
    { "getResponseHeader", (intptr_t)jsXMLHttpRequestPrototypeFunctionGetResponseHeader, DontDelete|Function, 1 },
    { "overrideMimeType", (intptr_t)jsXMLHttpRequestPrototypeFunctionOverrideMimeType, DontDelete|Function, 1 },
    { "addEventListener", (intptr_t)jsXMLHttpRequestPrototypeFunctionAddEventListener, DontDelete|Function, 3 },
    { "removeEventListener", (intptr_t)jsXMLHttpRequestPrototypeFunctionRemoveEventListener, DontDelete|Function, 3 },
    { "dispatchEvent", (intptr_t)jsXMLHttpRequestPrototypeFunctionDispatchEvent, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestPrototypeTable = { 1023, JSXMLHttpRequestPrototypeTableValues, 0 };

const ClassInfo JSXMLHttpRequestPrototype::s_info = { "XMLHttpRequestPrototype", 0, &JSXMLHttpRequestPrototypeTable, 0 };

JSObject* JSXMLHttpRequestPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSXMLHttpRequest.prototype]]");
    return KJS::cacheGlobalObject<JSXMLHttpRequestPrototype>(exec, prototypeIdentifier);
}

bool JSXMLHttpRequestPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSXMLHttpRequestPrototype, JSObject>(exec, &JSXMLHttpRequestPrototypeTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequestPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSXMLHttpRequest::s_info = { "XMLHttpRequest", 0, &JSXMLHttpRequestTable , 0 };

JSXMLHttpRequest::JSXMLHttpRequest(JSObject* prototype, XMLHttpRequest* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSXMLHttpRequest::~JSXMLHttpRequest()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSXMLHttpRequest::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequest, Base>(exec, &JSXMLHttpRequestTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequest::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case OnabortAttrNum: {
        return onabort(exec);
    }
    case OnerrorAttrNum: {
        return onerror(exec);
    }
    case OnloadAttrNum: {
        return onload(exec);
    }
    case OnloadstartAttrNum: {
        return onloadstart(exec);
    }
    case OnprogressAttrNum: {
        return onprogress(exec);
    }
    case OnreadystatechangeAttrNum: {
        return onreadystatechange(exec);
    }
    case ReadyStateAttrNum: {
        XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(impl());
        return jsNumber(exec, imp->readyState());
    }
    case ResponseTextAttrNum: {
        XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(impl());
        return jsStringOrNull(exec, imp->responseText());
    }
    case ResponseXMLAttrNum: {
        XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(impl());
        return toJS(exec, WTF::getPtr(imp->responseXML()));
    }
    case StatusAttrNum: {
        ExceptionCode ec = 0;
        XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(impl());
        KJS::JSValue* result = jsNumber(exec, imp->status(ec));
        setDOMException(exec, ec);
        return result;
    }
    case StatusTextAttrNum: {
        ExceptionCode ec = 0;
        XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(impl());
        KJS::JSValue* result = jsString(exec, imp->statusText(ec));
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}

void JSXMLHttpRequest::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSXMLHttpRequest, Base>(exec, propertyName, value, &JSXMLHttpRequestTable, this);
}

void JSXMLHttpRequest::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case OnabortAttrNum: {
        setOnabort(exec, value);
        break;
    }
    case OnerrorAttrNum: {
        setOnerror(exec, value);
        break;
    }
    case OnloadAttrNum: {
        setOnload(exec, value);
        break;
    }
    case OnloadstartAttrNum: {
        setOnloadstart(exec, value);
        break;
    }
    case OnprogressAttrNum: {
        setOnprogress(exec, value);
        break;
    }
    case OnreadystatechangeAttrNum: {
        setOnreadystatechange(exec, value);
        break;
    }
    }
}

JSValue* jsXMLHttpRequestPrototypeFunctionOpen(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->open(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionSetRequestHeader(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->setRequestHeader(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionSend(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->send(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionAbort(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(castedThisObj->impl());

    imp->abort();
    return jsUndefined();
}

JSValue* jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    XMLHttpRequest* imp = static_cast<XMLHttpRequest*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    KJS::JSValue* result = jsStringOrUndefined(exec, imp->getAllResponseHeaders(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsXMLHttpRequestPrototypeFunctionGetResponseHeader(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->getResponseHeader(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionOverrideMimeType(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->overrideMimeType(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionAddEventListener(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->addEventListener(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionRemoveEventListener(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->removeEventListener(exec, args);
}

JSValue* jsXMLHttpRequestPrototypeFunctionDispatchEvent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequest::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequest* castedThisObj = static_cast<JSXMLHttpRequest*>(thisValue);
    return castedThisObj->dispatchEvent(exec, args);
}

KJS::JSValue* toJS(KJS::ExecState* exec, XMLHttpRequest* obj)
{
    return cacheDOMObject<XMLHttpRequest, JSXMLHttpRequest, JSXMLHttpRequestPrototype>(exec, obj);
}
XMLHttpRequest* toXMLHttpRequest(KJS::JSValue* val)
{
    return val->isObject(&JSXMLHttpRequest::s_info) ? static_cast<JSXMLHttpRequest*>(val)->impl() : 0;
}

}

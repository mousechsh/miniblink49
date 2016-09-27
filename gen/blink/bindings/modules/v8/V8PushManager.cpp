// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PushManager.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8PushSubscriptionOptions.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8PushManager::wrapperTypeInfo = { gin::kEmbedderBlink, V8PushManager::domTemplate, V8PushManager::refObject, V8PushManager::derefObject, V8PushManager::trace, 0, 0, V8PushManager::preparePrototypeObject, V8PushManager::installConditionallyEnabledProperties, "PushManager", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PushManager.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PushManager::s_wrapperTypeInfo = V8PushManager::wrapperTypeInfo;

namespace PushManagerV8Internal {

static void subscribeMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    PushManager* impl = V8PushManager::toImpl(info.Holder());
    PushSubscriptionOptions options;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('options') is not an object.");
            return;
        }
        V8PushSubscriptionOptions::toImpl(info.GetIsolate(), info[0], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->subscribe(scriptState, options);
    v8SetReturnValue(info, result.v8Value());
}

static void subscribeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "subscribe", "PushManager", info.Holder(), info.GetIsolate());
    subscribeMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void subscribeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PushManagerV8Internal::subscribeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getSubscriptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PushManager* impl = V8PushManager::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->getSubscription(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void getSubscriptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PushManagerV8Internal::getSubscriptionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void permissionStateMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    PushManager* impl = V8PushManager::toImpl(info.Holder());
    PushSubscriptionOptions options;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('options') is not an object.");
            return;
        }
        V8PushSubscriptionOptions::toImpl(info.GetIsolate(), info[0], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->permissionState(scriptState, options);
    v8SetReturnValue(info, result.v8Value());
}

static void permissionStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "permissionState", "PushManager", info.Holder(), info.GetIsolate());
    permissionStateMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void permissionStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PushManagerV8Internal::permissionStateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace PushManagerV8Internal

static const V8DOMConfiguration::MethodConfiguration V8PushManagerMethods[] = {
    {"subscribe", PushManagerV8Internal::subscribeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getSubscription", PushManagerV8Internal::getSubscriptionMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"permissionState", PushManagerV8Internal::permissionStateMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8PushManagerTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::pushMessagingEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PushManager", v8::Local<v8::FunctionTemplate>(), V8PushManager::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PushManager", v8::Local<v8::FunctionTemplate>(), V8PushManager::internalFieldCount,
            0, 0,
            0, 0,
            V8PushManagerMethods, WTF_ARRAY_LENGTH(V8PushManagerMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8PushManager::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PushManagerTemplate);
}

bool V8PushManager::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PushManager::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PushManager* V8PushManager::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8PushManager::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8PushManager::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
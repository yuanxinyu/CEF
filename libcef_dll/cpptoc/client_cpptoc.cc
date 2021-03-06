// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/display_handler_cpptoc.h"
#include "libcef_dll/cpptoc/drag_handler_cpptoc.h"
#include "libcef_dll/cpptoc/find_handler_cpptoc.h"
#include "libcef_dll/cpptoc/focus_handler_cpptoc.h"
#include "libcef_dll/cpptoc/jsbinding_handler_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_handler_cpptoc.h"
#include "libcef_dll/cpptoc/keyboard_handler_cpptoc.h"
#include "libcef_dll/cpptoc/life_span_handler_cpptoc.h"
#include "libcef_dll/cpptoc/load_handler_cpptoc.h"
#include "libcef_dll/cpptoc/menu_handler_cpptoc.h"
#include "libcef_dll/cpptoc/print_handler_cpptoc.h"
#include "libcef_dll/cpptoc/render_handler_cpptoc.h"
#include "libcef_dll/cpptoc/request_handler_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

cef_life_span_handler_t* CEF_CALLBACK client_get_life_span_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefLifeSpanHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetLifeSpanHandler();
  if(handlerPtr.get())
    return CefLifeSpanHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_load_handler_t* CEF_CALLBACK client_get_load_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefLoadHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetLoadHandler();
  if(handlerPtr.get())
    return CefLoadHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_request_handler_t* CEF_CALLBACK client_get_request_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefRequestHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetRequestHandler();
  if(handlerPtr.get())
    return CefRequestHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_display_handler_t* CEF_CALLBACK client_get_display_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefDisplayHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetDisplayHandler();
  if(handlerPtr.get())
    return CefDisplayHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_focus_handler_t* CEF_CALLBACK client_get_focus_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefFocusHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetFocusHandler();
  if(handlerPtr.get())
    return CefFocusHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_keyboard_handler_t* CEF_CALLBACK client_get_keyboard_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefKeyboardHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetKeyboardHandler();
  if(handlerPtr.get())
    return CefKeyboardHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_menu_handler_t* CEF_CALLBACK client_get_menu_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefMenuHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetMenuHandler();
  if(handlerPtr.get())
    return CefMenuHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_print_handler_t* CEF_CALLBACK client_get_print_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefPrintHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetPrintHandler();
  if(handlerPtr.get())
    return CefPrintHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_find_handler_t* CEF_CALLBACK client_get_find_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefFindHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetFindHandler();
  if(handlerPtr.get())
    return CefFindHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_jsdialog_handler_t* CEF_CALLBACK client_get_jsdialog_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefJSDialogHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetJSDialogHandler();
  if(handlerPtr.get())
    return CefJSDialogHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_jsbinding_handler_t* CEF_CALLBACK client_get_jsbinding_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefJSBindingHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetJSBindingHandler();
  if(handlerPtr.get())
    return CefJSBindingHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_render_handler_t* CEF_CALLBACK client_get_render_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefRenderHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetRenderHandler();
  if(handlerPtr.get())
    return CefRenderHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}

cef_drag_handler_t* CEF_CALLBACK client_get_drag_handler(
    struct _cef_client_t* self)
{
  DCHECK(self);
  if (!self)
    return NULL;

  CefRefPtr<CefDragHandler> handlerPtr =
      CefClientCppToC::Get(self)->GetDragHandler();
  if(handlerPtr.get())
    return CefDragHandlerCppToC::Wrap(handlerPtr);

  return NULL;
}


// CONSTRUCTOR - Do not edit by hand.

CefClientCppToC::CefClientCppToC(CefClient* cls)
    : CefCppToC<CefClientCppToC, CefClient, cef_client_t>(cls)
{
  struct_.struct_.get_life_span_handler = client_get_life_span_handler;
  struct_.struct_.get_load_handler = client_get_load_handler;
  struct_.struct_.get_request_handler = client_get_request_handler;
  struct_.struct_.get_display_handler = client_get_display_handler;
  struct_.struct_.get_focus_handler = client_get_focus_handler;
  struct_.struct_.get_keyboard_handler = client_get_keyboard_handler;
  struct_.struct_.get_menu_handler = client_get_menu_handler;
  struct_.struct_.get_print_handler = client_get_print_handler;
  struct_.struct_.get_find_handler = client_get_find_handler;
  struct_.struct_.get_jsdialog_handler = client_get_jsdialog_handler;
  struct_.struct_.get_jsbinding_handler = client_get_jsbinding_handler;
  struct_.struct_.get_render_handler = client_get_render_handler;
  struct_.struct_.get_drag_handler = client_get_drag_handler;
}

#ifndef NDEBUG
template<> long CefCppToC<CefClientCppToC, CefClient,
    cef_client_t>::DebugObjCt = 0;
#endif


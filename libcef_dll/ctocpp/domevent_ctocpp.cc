// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domevent_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefString CefDOMEventCToCpp::GetType()
{
  CefString str;
  if(CEF_MEMBER_MISSING(struct_, get_type))
    return str;

  cef_string_userfree_t strPtr = struct_->get_type(struct_);
  str.AttachToUserFree(strPtr);
  return str;
}

CefDOMEvent::Category CefDOMEventCToCpp::GetCategory()
{
  if(CEF_MEMBER_MISSING(struct_, get_category))
    return DOM_EVENT_CATEGORY_UNKNOWN;

  return struct_->get_category(struct_);
}

CefDOMEvent::Phase CefDOMEventCToCpp::GetPhase()
{
  if(CEF_MEMBER_MISSING(struct_, get_phase))
    return DOM_EVENT_PHASE_UNKNOWN;

  return struct_->get_phase(struct_);
}

bool CefDOMEventCToCpp::CanBubble()
{
  if(CEF_MEMBER_MISSING(struct_, can_bubble))
    return false;

  return struct_->can_bubble(struct_) ? true : false;
}

bool CefDOMEventCToCpp::CanCancel()
{
  if(CEF_MEMBER_MISSING(struct_, can_cancel))
    return false;

  return struct_->can_cancel(struct_) ? true : false;
}

CefRefPtr<CefDOMDocument> CefDOMEventCToCpp::GetDocument()
{
  if(CEF_MEMBER_MISSING(struct_, get_document))
    return NULL;

  cef_domdocument_t* documentStruct = struct_->get_document(struct_);
  if(documentStruct)
    return CefDOMDocumentCToCpp::Wrap(documentStruct);
  return NULL;
}

CefRefPtr<CefDOMNode> CefDOMEventCToCpp::GetTarget()
{
  if(CEF_MEMBER_MISSING(struct_, get_target))
    return NULL;

  cef_domnode_t* nodeStruct = struct_->get_target(struct_);
  if(nodeStruct)
    return CefDOMNodeCToCpp::Wrap(nodeStruct);
  return NULL;
}

CefRefPtr<CefDOMNode> CefDOMEventCToCpp::GetCurrentTarget()
{
  if(CEF_MEMBER_MISSING(struct_, get_current_target))
    return NULL;

  cef_domnode_t* nodeStruct = struct_->get_current_target(struct_);
  if(nodeStruct)
    return CefDOMNodeCToCpp::Wrap(nodeStruct);
  return NULL;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefDOMEventCToCpp, CefDOMEvent,
    cef_domevent_t>::DebugObjCt = 0;
#endif


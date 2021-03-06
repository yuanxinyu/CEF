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

#include "libcef_dll/cpptoc/write_handler_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

size_t CEF_CALLBACK write_handler_write(struct _cef_write_handler_t* self,
    const void* ptr, size_t size, size_t n)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefWriteHandlerCppToC::Get(self)->Write(ptr, size, n);
}

int CEF_CALLBACK write_handler_seek(struct _cef_write_handler_t* self,
    long offset, int whence)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefWriteHandlerCppToC::Get(self)->Seek(offset, whence);
}

long CEF_CALLBACK write_handler_tell(struct _cef_write_handler_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefWriteHandlerCppToC::Get(self)->Tell();
}

int CEF_CALLBACK write_handler_flush(struct _cef_write_handler_t* self)
{
  DCHECK(self);
  if(!self)
    return 0;

  return CefWriteHandlerCppToC::Get(self)->Flush();
}


// CONSTRUCTOR - Do not edit by hand.

CefWriteHandlerCppToC::CefWriteHandlerCppToC(CefWriteHandler* cls)
    : CefCppToC<CefWriteHandlerCppToC, CefWriteHandler, cef_write_handler_t>(
        cls)
{
  struct_.struct_.write = write_handler_write;
  struct_.struct_.seek = write_handler_seek;
  struct_.struct_.tell = write_handler_tell;
  struct_.struct_.flush = write_handler_flush;
}

#ifndef NDEBUG
template<> long CefCppToC<CefWriteHandlerCppToC, CefWriteHandler,
    cef_write_handler_t>::DebugObjCt = 0;
#endif


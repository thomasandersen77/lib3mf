/*++

Copyright (C) 2015 Microsoft Corporation
Copyright (C) 2015 netfabb GmbH (Original Author)

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Abstract:

NMR_COM_Emulation.h defines Macros for a non-Windows Emulation of COM Interfaces

--*/

#ifndef __NMR_COM_EMULATION
#define __NMR_COM_EMULATION

#define LIB3MFRESULT int
#define LIB3MF_OK 0
#define LIB3MF_FAIL 0x80004005L
#define LIB3MF_POINTER 0x80004003L
#define LIB3MF_INVALIDARG 0x80070057L

#define LIB3MFINTERFACE(iface, baseiface, iid) class iface : public baseiface
#define LIB3MFPUBLIC public:
#define LIB3MFABSTRACT = 0

#ifdef _WIN32
#define LIB3MF_DECLSPEC __declspec(dllexport)
#else
#define LIB3MF_DECLSPEC
#endif

#define LIB3MFMETHOD(methodname) virtual LIB3MFRESULT methodname
#define LIB3MFMETHODIMP LIB3MFRESULT

#define LIB3MFINTERFACE_DECL(x)

template <class BASE>
class CCOMObject : public BASE {
private:
public:
};

class ILib3MFUnknown {
};

#endif // __NMR_COM_EMULATION

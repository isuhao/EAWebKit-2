/*
Copyright (C) 2008-2009 Electronic Arts, Inc.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1.  Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
3.  Neither the name of Electronic Arts, Inc. ("EA") nor the names of
its contributors may be used to endorse or promote products derived
from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ELECTRONIC ARTS AND ITS CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ELECTRONIC ARTS OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef EAWEBKIT_PACKAGE_REDIRECTOR_H
#define EAWEBKIT_PACKAGE_REDIRECTOR_H

#ifdef BUILDING_EAWEBKIT_DLL
	#ifndef EAWEBKIT_PACKAGE_NAMESPACE
		#define EAWEBKIT_PACKAGE_NAMESPACE WebKit	
	#endif
	#ifndef ACCESS_EAWEBKIT_API		
		#define ACCESS_EAWEBKIT_API(func) EA::WebKit::func
	#endif
	#include <EAWebKit/internal/EAWebKitAssert.h>
#else
	#ifndef EAWEBKIT_PACKAGE_NAMESPACE
		#define EAWEBKIT_PACKAGE_NAMESPACE WebKitUtil
	#endif
	
	#ifndef EAW_ASSERT
		#define EAW_ASSERT EA_ASSERT
	#endif
	#ifndef EAW_ASSERT_MSG
		#define EAW_ASSERT_MSG EA_ASSERT_MSG
	#endif
//Comment out following as they are not compatible	
//#ifndef EAW_ASSERT_FORMATTED
//		#define EAW_ASSERT_FORMATTED EA_ASSERT_FORMATTED
//	#endif

	#ifndef ACCESS_EAWEBKIT_API		
		#define ACCESS_EAWEBKIT_API(func) gEAWebkitInstance->func
	#endif
	#include <EAAssert/eaassert.h>
#endif

#endif //EAWEBKIT_PACKAGE_REDIRECTOR_H


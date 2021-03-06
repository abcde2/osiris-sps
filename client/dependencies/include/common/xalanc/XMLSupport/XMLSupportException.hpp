/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the  "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#if !defined(XMLSUPPORTEXCEPTION_HEADER_GUARD_1357924680)
#define XMLSUPPORTEXCEPTION_HEADER_GUARD_1357924680



// Base header file.  Must be first.
#include <xalanc/XMLSupport/XMLSupportDefinitions.hpp>



// Base class header file.
#include <xalanc/PlatformSupport/XSLException.hpp>



XALAN_CPP_NAMESPACE_BEGIN



class XalanDOMString;



class XALAN_XMLSUPPORT_EXPORT XMLSupportException : public XSLException
{
public:

    /**
     * Construct an XML Support exception object
     * 
     * @param theMessage message to print when exception thrown
     */
    XMLSupportException(
            const XalanDOMString&   theMessage,
            MemoryManager&          theManager,
            const Locator*          theLocator);

    XMLSupportException(const XMLSupportException& other);

    virtual
    ~XMLSupportException();

private:
};



XALAN_CPP_NAMESPACE_END



#endif  // XMLSUPPORTEXCEPTION_HEADER_GUARD_1357924680

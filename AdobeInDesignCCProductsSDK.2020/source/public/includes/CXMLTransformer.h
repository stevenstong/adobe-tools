//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/public/includes/CXMLTransformer.h $
//  
//  Owner: Will Lin
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2019/10/11 10:48:01 $
//  
//  $Revision: #2 $
//  
//  $Change: 1061132 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  A default implementation of ISAXContentHandler.  This provides an empty implementation
//  of each method so that clients can only override those that they really care about.
//  
//========================================================================================

#pragma once
#ifndef __CXMLTransformer_h__
#define __CXMLTransformer_h__


#include "CPMUnknown.h"

#include "IXMLTransformer.h"


/**
An empty base class implementation of IXMLTransformer. Clients who wish 
to add a XML import transformer serevice provider should implement new classes 
derived from this class.

@see IXMLTransformer
*/
class PUBLIC_DECL CXMLTransformer : public CPMUnknown<IXMLTransformer>
{
public:
	CXMLTransformer(IPMUnknown *boss);
	virtual ~CXMLTransformer();
	
	virtual ErrorCode TransformStream(const IPMStream *in, IPMStream **out, IPMUnknown *xmlImporter);
	virtual ErrorCode TransformDOM(IIDXMLDOMDocument *dom, IPMUnknown *xmlImporter);
};

#endif	// __CXMLTransformer_h__


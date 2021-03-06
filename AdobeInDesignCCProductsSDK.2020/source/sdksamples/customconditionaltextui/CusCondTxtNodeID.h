//========================================================================================
//  
//  $File: //depot/devtech/15.0/plugin/source/sdksamples/customconditionaltextui/CusCondTxtNodeID.h $
//  
//  Owner: Adobe Developer Technologies
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
//========================================================================================

#ifndef __CusCondTxtNodeID__
#define __CusCondTxtNodeID__

#include "NodeID.h"
#include "IPMStream.h"
#include "CusCondTxtUIID.h"

/** Represents a node in the tree view. It is the list item.
	
	@ingroup customconditionaltext
*/
class CusCondTxtNodeID : public NodeIDClass
{
	public:
		enum { kNodeType = kCusCondTxtUITreeViewWidgetBoss }; 


		/**	Factory method to create 
		new object of this class
			@return   new instance of this class 
		 */
		static	NodeID_rv Create() { return new CusCondTxtNodeID(); }

		/**	Factory method to create new object of this class
			@param path [IN] specifies initial path
			@return  new instance of this class
		 */
		static	NodeID_rv Create(PMString name)  
			{ return new CusCondTxtNodeID(name); }

		/**	Destructor
		 */
		virtual ~CusCondTxtNodeID() {}
		

		/**	@return type of this node
		 */
		virtual	NodeType GetNodeType() const { return kNodeType; } 

		/**	Comparator function
			@param NodeID [IN] specifies the node that we should compare against
			@return  Comparison results
		 */
		virtual int32 Compare(const NodeIDClass* NodeID) const;

		/**	Create a copy of this
			@return  
		 */
		virtual NodeIDClass* Clone() const;

		/**	Read this from the given stream
			@param stream [IN] specified stream
			@return  
		 */
		virtual void Read(IPMStream* stream);

		/**	Write this to the given stream
			@param [OUT] stream 
			@return  
		 */
		virtual void Write(IPMStream* stream) const;

		/**	Accessor for the value associated with this node
			@return const PMString& 
		 */
		const PMString& GetName() const { return fName; }
	
	private:
		// Note we're keeping the destructor private to force use of the factory methods
		
		CusCondTxtNodeID() {}

		CusCondTxtNodeID(PMString name) : fName(name) { }

		PMString	fName;
		
};

#endif // __CusCondTxtNodeID__



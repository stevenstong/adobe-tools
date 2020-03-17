//======================================================================================== 
//   
//  $File: //depot/devtech/nevis/plugin/source/public/includes/ContentDropperTypes.h $ 
//   
//  Owner: Ashish Duggal
//   
//  $Author: pmbuilder $ 
//   
//  $DateTime: 2018/03/06 12:15:34 $ 
//   
//  $Revision: #10 $ 
//   
//  $Change: 1009641 $ 
//
//  ADOBE CONFIDENTIAL
//   
//  Copyright 2010 Adobe Systems Incorporated
//  All Rights Reserved.
//   
// NOTICE:  All information contained herein is, and remains
// the property of Adobe Systems Incorporated and its suppliers,
// if any.  The intellectual and technical concepts contained
// herein are proprietary to Adobe Systems Incorporated and its
// suppliers and are protected by trade secret or copyright law.
// Dissemination of this information or reproduction of this material
// is strictly forbidden unless prior written permission is obtained
// from Adobe Systems Incorporated. 
//   
//======================================================================================== 

#ifndef __ContentDropperTypes__
#define __ContentDropperTypes__

class ContentDropperTypes
{
public:
	enum LinkPolicy
	{
		kNoLink = 0,
		kCreateLinkPageItem,
		kCreateLinkStory,
		kUnknownPolicy,
	};

	//Options honored by drop command through IID_IAFTERDROPDATA interface, 
	//for action to be taken when item is dropped
	enum eAfterDrop
	{
		kRemove = 0,				// un-grab item once it is dropped. 
		kRetainPosition,			// Retain the item in and keep and do not move head
		kRetainAndMove,				// Retain item but move head to next item.
	};
};


#endif //__ContentDropperTypes__
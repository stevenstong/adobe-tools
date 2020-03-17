//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/TextOptionsPanelID.h $
//  
//  Owner: Zak Williamson
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2017/03/10 00:54:55 $
//  
//  $Revision: #12 $
//  
//  $Change: 979292 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __TextOptionsPanelID__
#define __TextOptionsPanelID__

#include "ShuksanID.h"
#include "IDFactory.h"

#define kTextOptionsPanelPrefix		RezLong(0x3100)		/* (12544) Prefix registered in DeveloperPrefix.h */

// <Start IDC>
// PluginID
#define kTextOptionsPanelPluginName 			"Text Preferences"
DECLARE_PMID(kPlugInIDSpace, kTextOptionsPanelPluginID, kTextOptionsPanelPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kTextOptionsPanelWidgetBoss, kTextOptionsPanelPrefix + 1)
DECLARE_PMID(kClassIDSpace, kTextOptionsPrefsMenuComponentBoss, kTextOptionsPanelPrefix + 2)
DECLARE_PMID(kClassIDSpace, kTextEditingPrefsScriptProviderBoss, kTextOptionsPanelPrefix + 3)
DECLARE_PMID(kClassIDSpace, kCompositionPanelWidgetBoss, kTextOptionsPanelPrefix + 4)
DECLARE_PMID(kClassIDSpace, kTextOptionsPanelShorcutsBoss, kTextOptionsPanelPrefix + 5)
DECLARE_PMID(kClassIDSpace, kAdvTextOptionsPanelWidgetBoss, kTextOptionsPanelPrefix + 6)
DECLARE_PMID(kClassIDSpace, kFootnoteSettingsDialogBoss, kTextOptionsPanelPrefix + 7)
DECLARE_PMID(kClassIDSpace, kRestartNumberingWidgetBoss, kTextOptionsPanelPrefix + 8)
DECLARE_PMID(kClassIDSpace, kFootnoteNumberingPanelBoss, kTextOptionsPanelPrefix + 9)
DECLARE_PMID(kClassIDSpace, kFootnoteLayoutPanelBoss, kTextOptionsPanelPrefix + 10)
// gap
DECLARE_PMID(kClassIDSpace, kAutoPageInsertCheckBoxBoss, kTextOptionsPanelPrefix + 12)
DECLARE_PMID(kClassIDSpace, kFontPreviewCheckBoxBoss, kTextOptionsPanelPrefix + 13)

DECLARE_PMID(kClassIDSpace, kFootnoteMetaCharButtonWidgetBoss, kTextOptionsPanelPrefix + 14)
DECLARE_PMID(kClassIDSpace, kFootnotePrefixMetaMenuComponentBoss, kTextOptionsPanelPrefix + 15)
DECLARE_PMID(kClassIDSpace, kFootnoteSuffixMetaMenuComponentBoss, kTextOptionsPanelPrefix + 16)
DECLARE_PMID(kClassIDSpace, kFootnoteSeparatorMetaMenuComponentBoss, kTextOptionsPanelPrefix + 17)

// <Implementation ID>
// Implementation IDs
DECLARE_PMID(kImplementationIDSpace, kTextOptionsPrefsMenuComponentImpl, kTextOptionsPanelPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kTextOptionsPrefsDialogControllerImpl, kTextOptionsPanelPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kTextOptionsPrefsPanelCreatorImpl, kTextOptionsPanelPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kTextEditingPrefsScriptProviderImpl, kTextOptionsPanelPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kCompositionPrefsDialogController, kTextOptionsPanelPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kCompositionPrefsPanelCreator, kTextOptionsPanelPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kTextOptionsShortcutsImpl, kTextOptionsPanelPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kAdvTextOptionsPrefsDialogControllerImpl, kTextOptionsPanelPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kAdvTextOptionsPrefsPanelCreatorImpl, kTextOptionsPanelPrefix + 9)

DECLARE_PMID(kImplementationIDSpace, kFootnoteSettingsDialogCreatorImpl, kTextOptionsPanelPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kFootnoteNumPanelControllerImpl, kTextOptionsPanelPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kFSNumberingPanelCreatorImpl, kTextOptionsPanelPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kFootnoteLayPanelControllerImpl, kTextOptionsPanelPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kFSLayoutPanelCreatorImpl, kTextOptionsPanelPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kFootnoteFormatSettingsObserverImpl, kTextOptionsPanelPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kFootnoteFormatSettingsControllerImpl, kTextOptionsPanelPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kFootnoteLayoutSettingsObserverImpl, kTextOptionsPanelPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kFootnoteLayoutSettingsControllerImpl, kTextOptionsPanelPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kFootnoteSettingsCacheImpl, kTextOptionsPanelPrefix + 19)

DECLARE_PMID(kImplementationIDSpace, kAutoPageInsertObserverImpl, kTextOptionsPanelPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kFontPreviewObserverImpl, kTextOptionsPanelPrefix + 21)

DECLARE_PMID(kImplementationIDSpace, kFootnoteSeparatorMetaMenuComponentImpl, kTextOptionsPanelPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kFootnotePrefixMetaMenuComponentImpl, kTextOptionsPanelPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kFootnoteSuffixMetaMenuComponentImpl, kTextOptionsPanelPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kFootnoteSettingsDialogObserverImpl, kTextOptionsPanelPrefix + 25)

// <Interface ID>
DECLARE_PMID(kInterfaceIDSpace, IID_IFOOTNOTESETTINGSCACHE, kTextOptionsPanelPrefix + 1 )

// <Widget ID>
// Widget IDs
DECLARE_PMID(kWidgetIDSpace, kUseTypographersQuotesWidgetID, kTextOptionsPanelPrefix + 1)
DECLARE_PMID(kWidgetIDSpace, kShowHnJViolationsWidgetID, kTextOptionsPanelPrefix + 2 )
DECLARE_PMID(kWidgetIDSpace, kShowKeepsViolationsWidgetID, kTextOptionsPanelPrefix + 3)
DECLARE_PMID(kWidgetIDSpace, kFSRuleGapColorWidgetID, kTextOptionsPanelPrefix + 4 )
DECLARE_PMID(kWidgetIDSpace, kAdvTextOptionPrefsDialogWidgetID, kTextOptionsPanelPrefix + 5)
DECLARE_PMID(kWidgetIDSpace, kPercentStaticTextWidgetID, kTextOptionsPanelPrefix + 6)
DECLARE_PMID(kWidgetIDSpace, kSuperscriptSizeStaticTextWidgetID, kTextOptionsPanelPrefix + 7)
DECLARE_PMID(kWidgetIDSpace, kSuperscriptSizeEditBoxWidgetID, kTextOptionsPanelPrefix + 8)
DECLARE_PMID(kWidgetIDSpace, kSubscriptSizeStaticTextWidgetID, kTextOptionsPanelPrefix + 9)
DECLARE_PMID(kWidgetIDSpace, kSubscriptSizeEditBoxWidgetID, kTextOptionsPanelPrefix + 10)

DECLARE_PMID(kWidgetIDSpace, kSuperscriptPosEditBoxWidgetID, kTextOptionsPanelPrefix + 11)
DECLARE_PMID(kWidgetIDSpace, kSubscriptPosEditBoxWidgetID, kTextOptionsPanelPrefix + 12)
DECLARE_PMID(kWidgetIDSpace, kSmallCapSizeStaticTextWidgetID, kTextOptionsPanelPrefix + 13)
DECLARE_PMID(kWidgetIDSpace, kSmallCapSizeEditBoxWidgetID, kTextOptionsPanelPrefix + 14)
DECLARE_PMID(kWidgetIDSpace, kWritingDirectionStaticTextWidgetID, kTextOptionsPanelPrefix + 15)
DECLARE_PMID(kWidgetIDSpace, kHorizontalDirectionWidgetID, kTextOptionsPanelPrefix + 16)
DECLARE_PMID(kWidgetIDSpace, kVerticalDirectionWidgetID, kTextOptionsPanelPrefix + 17)
DECLARE_PMID(kWidgetIDSpace, kSizeColumnStaticTextWidgetID, kTextOptionsPanelPrefix + 18)
DECLARE_PMID(kWidgetIDSpace, kPositionColumnStaticTextWidgetID, kTextOptionsPanelPrefix + 19)
DECLARE_PMID(kWidgetIDSpace, kIncrementStaticTextWidgetID, kTextOptionsPanelPrefix + 20)

DECLARE_PMID(kWidgetIDSpace, kIncrementEditTextWidgetID, kTextOptionsPanelPrefix + 21)
DECLARE_PMID(kWidgetIDSpace, kTextOptionPrefsDialogWidgetID, kTextOptionsPanelPrefix + 22)
DECLARE_PMID(kWidgetIDSpace, kCompositionPrefsDialogWidgetId, kTextOptionsPanelPrefix + 23)
DECLARE_PMID(kWidgetIDSpace, kIncrementBLShiftStaticTextWidgetID, kTextOptionsPanelPrefix + 24)
DECLARE_PMID(kWidgetIDSpace, kIncrementBLShiftEditBoxWidgetID, kTextOptionsPanelPrefix + 25)
DECLARE_PMID(kWidgetIDSpace, kIncrementTrackingAStaticTextWidgetID, kTextOptionsPanelPrefix + 26)
DECLARE_PMID(kWidgetIDSpace, kIncrementTrackingEditBoxWidgetID, kTextOptionsPanelPrefix + 27)
DECLARE_PMID(kWidgetIDSpace, kIncrementTrackingBStaticTextWidgetID, kTextOptionsPanelPrefix + 28)
DECLARE_PMID(kWidgetIDSpace, kShowMissingFontsWidgetID, kTextOptionsPanelPrefix + 29)
DECLARE_PMID(kWidgetIDSpace, kMMOpticalSizeWidgetId, kTextOptionsPanelPrefix + 30)

DECLARE_PMID(kWidgetIDSpace, kCharacterSettingsGroupWidgetId, kTextOptionsPanelPrefix + 31)
DECLARE_PMID(kWidgetIDSpace, kCharacterSettingsTextWidgetId, kTextOptionsPanelPrefix + 32)
DECLARE_PMID(kWidgetIDSpace, kTypeOptionsGroupWidgetId, kTextOptionsPanelPrefix + 33)
DECLARE_PMID(kWidgetIDSpace, kTypeOptionsTextWidgetId, kTextOptionsPanelPrefix + 34)
DECLARE_PMID(kWidgetIDSpace, kCompositionGroupWidgetId_Obsolete, kTextOptionsPanelPrefix + 35)
DECLARE_PMID(kWidgetIDSpace, kMultiLineCompTextWidgetId_Obsolete, kTextOptionsPanelPrefix + 36)
DECLARE_PMID(kWidgetIDSpace, kLookAheadTextWidgetId_Obsolete, kTextOptionsPanelPrefix + 37)
DECLARE_PMID(kWidgetIDSpace, kLookAheadEditWidgetId_Obsolete, kTextOptionsPanelPrefix + 38)
DECLARE_PMID(kWidgetIDSpace, kLinesTextWidgetId_Obsolete, kTextOptionsPanelPrefix + 39)
DECLARE_PMID(kWidgetIDSpace, kConsiderTextWidgetId_Obsolete, kTextOptionsPanelPrefix + 40)

DECLARE_PMID(kWidgetIDSpace, kConsiderEditWidgetId_Obsolete, kTextOptionsPanelPrefix + 41)
DECLARE_PMID(kWidgetIDSpace, kAlternativesTextWidgetId_Obsolete, kTextOptionsPanelPrefix + 42)
DECLARE_PMID(kWidgetIDSpace, kCompForcedGroupWidgetId, kTextOptionsPanelPrefix + 43)
DECLARE_PMID(kWidgetIDSpace, kHilightTextWidgetId, kTextOptionsPanelPrefix + 44)
DECLARE_PMID(kWidgetIDSpace, kWritingDirClusterWidgetId, kTextOptionsPanelPrefix + 45)
DECLARE_PMID(kWidgetIDSpace, kShowKinsokuWidgetID, kTextOptionsPanelPrefix + 46)
DECLARE_PMID(kWidgetIDSpace, kShowCustomCharWidthsWidgetID, kTextOptionsPanelPrefix + 47)
DECLARE_PMID(kWidgetIDSpace, kIMEPrefsPanelDialogWidgetID, kTextOptionsPanelPrefix + 48)
DECLARE_PMID(kWidgetIDSpace, kIME_FloatingInputWindowCB, kTextOptionsPanelPrefix + 49)
DECLARE_PMID(kWidgetIDSpace, kIME_FakeInputWindowCB, kTextOptionsPanelPrefix + 50)

DECLARE_PMID(kWidgetIDSpace, kIMEGroupWidgetId, kTextOptionsPanelPrefix + 51)
DECLARE_PMID(kWidgetIDSpace, kIMETextWidgetId, kTextOptionsPanelPrefix + 52)
DECLARE_PMID(kWidgetIDSpace, kParagraphLeadingWidgetId, kTextOptionsPanelPrefix + 53)
DECLARE_PMID(kWidgetIDSpace, kTripleClickCheckBoxWidgetID, kTextOptionsPanelPrefix + 54)
DECLARE_PMID(kWidgetIDSpace, kTextWrapGroupWidgetId, kTextOptionsPanelPrefix + 55)
DECLARE_PMID(kWidgetIDSpace, kTextWrapTextWidgetId, kTextOptionsPanelPrefix + 56)
DECLARE_PMID(kWidgetIDSpace, kJustifyTextWrapWidgetID, kTextOptionsPanelPrefix + 57)
//DECLARE_PMID(kWidgetIDSpace, kScaleAdjustsTextAttrsWidgetId, kTextOptionsPanelPrefix + 58)
DECLARE_PMID(kWidgetIDSpace, kShowSubstitutedGlyphsWidgetID, kTextOptionsPanelPrefix + 59)
DECLARE_PMID(kWidgetIDSpace, kZOrderWidgetID, kTextOptionsPanelPrefix + 60)

DECLARE_PMID(kWidgetIDSpace, kSkipByLeadingWidgetID, kTextOptionsPanelPrefix + 61)
//gap
DECLARE_PMID(kWidgetIDSpace, kTextScalingGroupWidgetId, kTextOptionsPanelPrefix + 65)
DECLARE_PMID(kWidgetIDSpace, kTextScalingTextWidgetId, kTextOptionsPanelPrefix + 66)
DECLARE_PMID(kWidgetIDSpace, kRomanTextScalingWidgetID, kTextOptionsPanelPrefix + 67)
DECLARE_PMID(kWidgetIDSpace, kDragDropTextGroupWidgetId, kTextOptionsPanelPrefix + 68)
DECLARE_PMID(kWidgetIDSpace, kDragDropTextTextWidgetId, kTextOptionsPanelPrefix + 69)
DECLARE_PMID(kWidgetIDSpace, kDragDropTextInLayoutCheckBoxWidgetID, kTextOptionsPanelPrefix + 70)

DECLARE_PMID(kWidgetIDSpace, kDragDropTextInStoryCheckBoxWidgetID, kTextOptionsPanelPrefix + 71)
DECLARE_PMID(kWidgetIDSpace, kFootnoteSettingsDialogWidgetID, kTextOptionsPanelPrefix + 72)
DECLARE_PMID(kWidgetIDSpace, kFootnoteNumberingPanelWidgetID, kTextOptionsPanelPrefix + 73)
DECLARE_PMID(kWidgetIDSpace, kFSRuleOnGroupWidgetID, kTextOptionsPanelPrefix + 74)
DECLARE_PMID(kWidgetIDSpace, kFSNumberingGroupWidgetID, kTextOptionsPanelPrefix + 75)
DECLARE_PMID(kWidgetIDSpace, kFSNumberingGroupLabelWidgetID, kTextOptionsPanelPrefix + 76)
DECLARE_PMID(kWidgetIDSpace, kFSNumberingStyleDropDownWidgetID, kTextOptionsPanelPrefix + 77)
DECLARE_PMID(kWidgetIDSpace, kFSStartAtEditBoxWidgetID, kTextOptionsPanelPrefix + 78)
DECLARE_PMID(kWidgetIDSpace, kFSRestartCheckBoxWidgetID, kTextOptionsPanelPrefix + 79)

DECLARE_PMID(kWidgetIDSpace, kFSRestartDropDownWidgetID, kTextOptionsPanelPrefix + 80)
DECLARE_PMID(kWidgetIDSpace, kFSRuleOnGroupLabelWidgetID, kTextOptionsPanelPrefix + 81)
DECLARE_PMID(kWidgetIDSpace, kFSFormattingGroupWidgetID, kTextOptionsPanelPrefix + 82)
DECLARE_PMID(kWidgetIDSpace, kFSFormattingGroupLabelWidgetID, kTextOptionsPanelPrefix + 83)
DECLARE_PMID(kWidgetIDSpace, kFSFootnoteReferenceGroupWidgetID, kTextOptionsPanelPrefix + 84)
DECLARE_PMID(kWidgetIDSpace, kFSFootnoteReferenceGroupLabelWidgetID, kTextOptionsPanelPrefix + 85)
DECLARE_PMID(kWidgetIDSpace, kFNFirstBaselineGroupWidgetId, kTextOptionsPanelPrefix + 86)		// see #129,214-6 below too
DECLARE_PMID(kWidgetIDSpace, kFSSuperscriptDropDownWidgetID, kTextOptionsPanelPrefix + 87)
DECLARE_PMID(kWidgetIDSpace, kFSCharStyleDropDownWidgetID, kTextOptionsPanelPrefix + 88)
DECLARE_PMID(kWidgetIDSpace, kFSSpaceBetweenWidgetID, kTextOptionsPanelPrefix + 89)

DECLARE_PMID(kWidgetIDSpace, kFSFootnoteFormattingGroupWidgetID, kTextOptionsPanelPrefix + 90)
DECLARE_PMID(kWidgetIDSpace, kFSFootnoteFormattingGroupLabelWidgetID, kTextOptionsPanelPrefix + 91)
DECLARE_PMID(kWidgetIDSpace, kFSParaStyleDropDownWidgetID, kTextOptionsPanelPrefix + 92)
DECLARE_PMID(kWidgetIDSpace, kFSSeparatorEditBoxWidgetID, kTextOptionsPanelPrefix + 93)
//DECLARE_PMID(kWidgetIDSpace, kOpticalDCSizingWidgetID, kTextOptionsPanelPrefix + 94)
DECLARE_PMID(kWidgetIDSpace, kFSSpacingOptionsGroupLabelWidgetID, kTextOptionsPanelPrefix + 95)
DECLARE_PMID(kWidgetIDSpace, kFSLayoutPanelWidgetID, kTextOptionsPanelPrefix + 96)

DECLARE_PMID(kWidgetIDSpace, kTypeToolConvertsFramesCheckBoxWidgetID, kTextOptionsPanelPrefix + 97)
DECLARE_PMID(kWidgetIDSpace, kFSRuleWeightEditBoxWidgetID, kTextOptionsPanelPrefix + 98)
DECLARE_PMID(kWidgetIDSpace, kFSRuleColorWidgetID, kTextOptionsPanelPrefix + 99)
DECLARE_PMID(kWidgetIDSpace, kFSRuleColorOverprintWidgetID, kTextOptionsPanelPrefix + 100)
DECLARE_PMID(kWidgetIDSpace, kFSRuleGapOverprintWidgetID, kTextOptionsPanelPrefix + 101)
DECLARE_PMID(kWidgetIDSpace, kFSRuleLeftIndentWidgetID, kTextOptionsPanelPrefix + 102)
DECLARE_PMID(kWidgetIDSpace, kFSRuleOffsetWidgetID, kTextOptionsPanelPrefix + 103)

DECLARE_PMID(kWidgetIDSpace, kFSRuleTypeDropDownWidgetID, kTextOptionsPanelPrefix + 104)
// available:	DECLARE_PMID(kWidgetIDSpace, xxx, kTextOptionsPanelPrefix + 105)
DECLARE_PMID(kWidgetIDSpace, kFSRuleTintEditBoxWidgetID, kTextOptionsPanelPrefix + 106)
DECLARE_PMID(kWidgetIDSpace, kFSRuleGapTintEditBoxWidgetID, kTextOptionsPanelPrefix + 107)
DECLARE_PMID(kWidgetIDSpace, kFSRuleWidthWidgetID, kTextOptionsPanelPrefix + 108)
DECLARE_PMID(kWidgetIDSpace, kFSRuleAboveGroupWidgetID, kTextOptionsPanelPrefix + 109)
DECLARE_PMID(kWidgetIDSpace, kFSSpacingOptionsGroupWidgetID, kTextOptionsPanelPrefix + 110)
DECLARE_PMID(kWidgetIDSpace, kFSPrefixSuffixCheckboxWidgetID, kTextOptionsPanelPrefix + 111)
DECLARE_PMID(kWidgetIDSpace, kFSPrefixSuffixDropDownWidgetID, kTextOptionsPanelPrefix + 112)
DECLARE_PMID(kWidgetIDSpace, kFSPrefixEditBoxWidgetID, kTextOptionsPanelPrefix + 113)
DECLARE_PMID(kWidgetIDSpace, kFSSuffixEditBoxWidgetID, kTextOptionsPanelPrefix + 114)
DECLARE_PMID(kWidgetIDSpace, kFSSpacerWidgetID, kTextOptionsPanelPrefix + 115)
DECLARE_PMID(kWidgetIDSpace, kFSEOSPlacementCheckboxWidgetID, kTextOptionsPanelPrefix + 116)
DECLARE_PMID(kWidgetIDSpace, kFSPlacementOptionsGroupWidgetID, kTextOptionsPanelPrefix + 117)
DECLARE_PMID(kWidgetIDSpace, kFSPlacementOptionsGroupLabelWidgetID, kTextOptionsPanelPrefix + 118)

DECLARE_PMID(kWidgetIDSpace, kFSWhichRuleDropDownWidgetID, kTextOptionsPanelPrefix + 119)
DECLARE_PMID(kWidgetIDSpace, kFSNoSplittingCheckboxWidgetID, kTextOptionsPanelPrefix + 120)

DECLARE_PMID(kWidgetIDSpace, kFSRuleIsOnCheckBoxWidgetID, kTextOptionsPanelPrefix + 121)
DECLARE_PMID(kWidgetIDSpace, kFootnotePrefixGroupWidgetId, kTextOptionsPanelPrefix + 122)
DECLARE_PMID(kWidgetIDSpace, kFootnotePrefixButtonWidgetID, kTextOptionsPanelPrefix + 123)
//DECLARE_PMID(kWidgetIDSpace, kFootnoteSuffixGroupWidgetId, kTextOptionsPanelPrefix + 124)
DECLARE_PMID(kWidgetIDSpace, kFootnoteSuffixButtonWidgetID, kTextOptionsPanelPrefix + 125)
DECLARE_PMID(kWidgetIDSpace, kFootnoteSeparatorGroupWidgetId, kTextOptionsPanelPrefix + 126)
DECLARE_PMID(kWidgetIDSpace, kFootnoteSeparatorButtonWidgetID, kTextOptionsPanelPrefix + 127)
DECLARE_PMID(kWidgetIDSpace, kFSRuleOnGroupPanelLabelWidgetID, kTextOptionsPanelPrefix + 128)

DECLARE_PMID(kWidgetIDSpace, kFNFirstBaselineTitleTextWidgetID, kTextOptionsPanelPrefix + 129)		// see #86,214-6 too

DECLARE_PMID(kWidgetIDSpace, kSmartCutAndPasteCheckBoxWidgetID, kTextOptionsPanelPrefix + 130)
DECLARE_PMID(kWidgetIDSpace, kFontPreviewSizeCheckBoxWidgetID, kTextOptionsPanelPrefix + 131)
DECLARE_PMID(kWidgetIDSpace, kFontPreviewSizeLabelWidgetID, kTextOptionsPanelPrefix + 132)
DECLARE_PMID(kWidgetIDSpace, kFontPreviewSampleTextLabelWidgetID, kTextOptionsPanelPrefix + 133)
DECLARE_PMID(kWidgetIDSpace, kFontPreviewSizeDDWidgetID, kTextOptionsPanelPrefix + 134)
DECLARE_PMID(kWidgetIDSpace, kFontPreviewSampleTextWidgetID, kTextOptionsPanelPrefix + 135)

DECLARE_PMID(kWidgetIDSpace, kUseCIDMojikumiWidgetID, kTextOptionsPanelPrefix + 136)
DECLARE_PMID(kWidgetIDSpace, kHalfWidthQuotesWidgetID, kTextOptionsPanelPrefix + 137)
DECLARE_PMID(kWidgetIDSpace, kStraddlingEnableCheckBoxWidgetID, kTextOptionsPanelPrefix + 138)
// gap
DECLARE_PMID(kWidgetIDSpace, kRecentFontsLengthTextWidgetID, kTextOptionsPanelPrefix + 140)
DECLARE_PMID(kWidgetIDSpace, kRecentFontsLengthWidgetID, kTextOptionsPanelPrefix + 141)
DECLARE_PMID(kWidgetIDSpace, kRecentFontsSortWidgetID, kTextOptionsPanelPrefix + 142)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText1WidgetID, kTextOptionsPanelPrefix + 143)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText2WidgetID, kTextOptionsPanelPrefix + 144)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText3WidgetID, kTextOptionsPanelPrefix + 145)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText4WidgetID, kTextOptionsPanelPrefix + 146)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText5WidgetID, kTextOptionsPanelPrefix + 147)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText8WidgetID, kTextOptionsPanelPrefix + 150)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText9WidgetID, kTextOptionsPanelPrefix + 151)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText10WidgetID, kTextOptionsPanelPrefix + 152)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText11WidgetID, kTextOptionsPanelPrefix + 153)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText12WidgetID, kTextOptionsPanelPrefix + 154)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText13WidgetID, kTextOptionsPanelPrefix + 155)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText14WidgetID, kTextOptionsPanelPrefix + 156)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText15WidgetID, kTextOptionsPanelPrefix + 157)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText16WidgetID, kTextOptionsPanelPrefix + 158)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText17WidgetID, kTextOptionsPanelPrefix + 159)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText18WidgetID, kTextOptionsPanelPrefix + 160)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText19WidgetID, kTextOptionsPanelPrefix + 161)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText20WidgetID, kTextOptionsPanelPrefix + 162)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText21WidgetID, kTextOptionsPanelPrefix + 163)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText22WidgetID, kTextOptionsPanelPrefix + 164)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText23WidgetID, kTextOptionsPanelPrefix + 165)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText24WidgetID, kTextOptionsPanelPrefix + 166)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText25WidgetID, kTextOptionsPanelPrefix + 167)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText26WidgetID, kTextOptionsPanelPrefix + 168)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText27WidgetID, kTextOptionsPanelPrefix + 169)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText28WidgetID, kTextOptionsPanelPrefix + 170)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText29WidgetID, kTextOptionsPanelPrefix + 171)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText30WidgetID, kTextOptionsPanelPrefix + 172)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText31WidgetID, kTextOptionsPanelPrefix + 173)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText32WidgetID, kTextOptionsPanelPrefix + 174)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText33WidgetID, kTextOptionsPanelPrefix + 175)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText34WidgetID, kTextOptionsPanelPrefix + 176)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText35WidgetID, kTextOptionsPanelPrefix + 177)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText36WidgetID, kTextOptionsPanelPrefix + 178)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText37WidgetID, kTextOptionsPanelPrefix + 179)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText38WidgetID, kTextOptionsPanelPrefix + 180)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText39WidgetID, kTextOptionsPanelPrefix + 181)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText40WidgetID, kTextOptionsPanelPrefix + 182)
DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText41WidgetID, kTextOptionsPanelPrefix + 183)

DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel1WidgetID, kTextOptionsPanelPrefix + 184)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel2WidgetID, kTextOptionsPanelPrefix + 185)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel3WidgetID, kTextOptionsPanelPrefix + 186)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel4WidgetID, kTextOptionsPanelPrefix + 187)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel5WidgetID, kTextOptionsPanelPrefix + 188)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel6WidgetID, kTextOptionsPanelPrefix + 189)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel7WidgetID, kTextOptionsPanelPrefix + 190)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel8WidgetID, kTextOptionsPanelPrefix + 191)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel9WidgetID, kTextOptionsPanelPrefix + 192)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel10WidgetID, kTextOptionsPanelPrefix + 193)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel11WidgetID, kTextOptionsPanelPrefix + 194)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel12WidgetID, kTextOptionsPanelPrefix + 195)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel13WidgetID, kTextOptionsPanelPrefix + 196)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel14WidgetID, kTextOptionsPanelPrefix + 197)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel15WidgetID, kTextOptionsPanelPrefix + 198)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel16WidgetID, kTextOptionsPanelPrefix + 299)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel17WidgetID, kTextOptionsPanelPrefix + 200)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel18WidgetID, kTextOptionsPanelPrefix + 201)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel19WidgetID, kTextOptionsPanelPrefix + 202)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel20WidgetID, kTextOptionsPanelPrefix + 203)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel21WidgetID, kTextOptionsPanelPrefix + 204)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel22WidgetID, kTextOptionsPanelPrefix + 205)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel23WidgetID, kTextOptionsPanelPrefix + 206)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel24WidgetID, kTextOptionsPanelPrefix + 207)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel25WidgetID, kTextOptionsPanelPrefix + 208)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel26WidgetID, kTextOptionsPanelPrefix + 209)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel27WidgetID, kTextOptionsPanelPrefix + 210)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel28WidgetID, kTextOptionsPanelPrefix + 211)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel29WidgetID, kTextOptionsPanelPrefix + 212)

// More footnote settings (these go with #86,129 above too)
DECLARE_PMID(kWidgetIDSpace, kFNFirstLineOffsetDropdownWidgetID, kTextOptionsPanelPrefix + 214)
DECLARE_PMID(kWidgetIDSpace, kFNMinFirstLineOffsetWidgetId, kTextOptionsPanelPrefix + 215)
DECLARE_PMID(kWidgetIDSpace, kFNMinFirstLineOffsetNudgeWidgetID, kTextOptionsPanelPrefix + 216)

DECLARE_PMID(kWidgetIDSpace, kFootnoteStaticText42WidgetID, kTextOptionsPanelPrefix + 217)

DECLARE_PMID(kWidgetIDSpace, kFontLockingGroupWidgetId, kTextOptionsPanelPrefix + 218)
DECLARE_PMID(kWidgetIDSpace, kFontLockingTextWidgetId, kTextOptionsPanelPrefix + 219)
DECLARE_PMID(kWidgetIDSpace, kFontInputLockingCB, kTextOptionsPanelPrefix + 220)
DECLARE_PMID(kWidgetIDSpace, kFontChangeLockingCB, kTextOptionsPanelPrefix + 221)
DECLARE_PMID(kWidgetIDSpace, kAutoPageInsertCheckBoxWidgetID, kTextOptionsPanelPrefix + 222)
DECLARE_PMID(kWidgetIDSpace, kAutoPageInsertDDWidgetID, kTextOptionsPanelPrefix + 223)
DECLARE_PMID(kWidgetIDSpace, kAutoFlowGroupWidgetId, kTextOptionsPanelPrefix + 224)
DECLARE_PMID(kWidgetIDSpace, kAutoFlowGroupTextWidgetId, kTextOptionsPanelPrefix + 225)
DECLARE_PMID(kWidgetIDSpace, kRequireMasterCheckBoxWidgetID, kTextOptionsPanelPrefix + 226)
DECLARE_PMID(kWidgetIDSpace, kPreserveFacingCheckBoxWidgetID, kTextOptionsPanelPrefix + 227)
DECLARE_PMID(kWidgetIDSpace, kAutoDeletePagesCheckBoxWidgetID, kTextOptionsPanelPrefix + 228)

DECLARE_PMID(kWidgetIDSpace, kUseNativeDigitsCB, kTextOptionsPanelPrefix + 229)
DECLARE_PMID(kWidgetIDSpace, kFootnoteGenericPanel31WidgetID, kTextOptionsPanelPrefix + 230)
DECLARE_PMID(kWidgetIDSpace, kComposerTextWidgetId, kTextOptionsPanelPrefix + 231)
DECLARE_PMID(kWidgetIDSpace, kTextComposerDDWidgetId, kTextOptionsPanelPrefix + 232)

DECLARE_PMID(kWidgetIDSpace, kTypeContextualsControlsId, kTextOptionsPanelPrefix + 233)
DECLARE_PMID(kWidgetIDSpace, kShowForAlternatesWidgetID, kTextOptionsPanelPrefix + 234)
DECLARE_PMID(kWidgetIDSpace, kShowForFractionsWidgetID, kTextOptionsPanelPrefix + 235)
DECLARE_PMID(kWidgetIDSpace, kColumnLayoutOptionsWidgetID, kTextOptionsPanelPrefix + 236)
DECLARE_PMID(kWidgetIDSpace, kColumnLayoutOptionsTitleTextWidgetID, kTextOptionsPanelPrefix + 237)

// <Action ID>
DECLARE_PMID(kActionIDSpace, kTextOptionsPrefsActionID, kTextOptionsPanelPrefix + 1)
DECLARE_PMID(kActionIDSpace, kCompositionPrefsActionID, kTextOptionsPanelPrefix + 2)
DECLARE_PMID(kActionIDSpace, kUseTypographersQuotesActionID, kTextOptionsPanelPrefix + 3)
DECLARE_PMID(kActionIDSpace, kAdvTextOptionsPrefsActionID, kTextOptionsPanelPrefix + 4)
DECLARE_PMID(kActionIDSpace, kToggleDragDropTextActionID, kTextOptionsPanelPrefix + 5)
DECLARE_PMID(kActionIDSpace, kFootnoteSettingsActionID, kTextOptionsPanelPrefix + 6)
DECLARE_PMID(kActionIDSpace, kCompositionPrefsSepActionID, kTextOptionsPanelPrefix + 7)
DECLARE_PMID(kActionIDSpace, kFootnoteSepActionID, kTextOptionsPanelPrefix + 8)
DECLARE_PMID(kActionIDSpace, kFootnoteTabActionID, kTextOptionsPanelPrefix + 9)
DECLARE_PMID(kActionIDSpace, kFootnoteMSpaceActionID, kTextOptionsPanelPrefix + 10)

DECLARE_PMID(kActionIDSpace, kFootnoteNSpaceActionID, kTextOptionsPanelPrefix + 11)
DECLARE_PMID(kActionIDSpace, kFootnoteLeftBracketActionID, kTextOptionsPanelPrefix + 12)
DECLARE_PMID(kActionIDSpace, kFootnoteLeftParenActionID, kTextOptionsPanelPrefix + 13)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixHairSpaceActionID, kTextOptionsPanelPrefix + 14)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixThinSpaceActionID, kTextOptionsPanelPrefix + 15)
DECLARE_PMID(kActionIDSpace, kFootnoteRightParenActionID, kTextOptionsPanelPrefix + 16)
DECLARE_PMID(kActionIDSpace, kFootnoteRightBracketActionID, kTextOptionsPanelPrefix + 17)
DECLARE_PMID(kActionIDSpace, kFootnoteQtrSpaceActionID, kTextOptionsPanelPrefix + 18)
DECLARE_PMID(kActionIDSpace, kToggleSmartCutAndPasteActionID, kTextOptionsPanelPrefix + 19)
DECLARE_PMID(kActionIDSpace, kFootnoteIdeoSpaceActionID, kTextOptionsPanelPrefix + 20)

DECLARE_PMID(kActionIDSpace, kFootnoteJOpenParenActionID, kTextOptionsPanelPrefix + 21)
DECLARE_PMID(kActionIDSpace, kFootnoteJOpenSquareBracketActionID, kTextOptionsPanelPrefix + 22)
DECLARE_PMID(kActionIDSpace, kFootnoteJOpenSquareQuoteActionID, kTextOptionsPanelPrefix + 23)
DECLARE_PMID(kActionIDSpace, kFootnoteJOpenThickBracketActionID, kTextOptionsPanelPrefix + 24)
DECLARE_PMID(kActionIDSpace, kFootnoteJKomeMarkActionID, kTextOptionsPanelPrefix + 25)
DECLARE_PMID(kActionIDSpace, kFootnoteJAsteriskActionID, kTextOptionsPanelPrefix + 26)
DECLARE_PMID(kActionIDSpace, kFootnoteJCircleActionID, kTextOptionsPanelPrefix + 27)
DECLARE_PMID(kActionIDSpace, kFootnoteJChuuActionID, kTextOptionsPanelPrefix + 28)
DECLARE_PMID(kActionIDSpace, kFootnoteJTradChuuActionID, kTextOptionsPanelPrefix + 29)
DECLARE_PMID(kActionIDSpace, kFootnoteJCloseParenActionID, kTextOptionsPanelPrefix + 30)
DECLARE_PMID(kActionIDSpace, kFootnoteJCloseSquareBracketActionID, kTextOptionsPanelPrefix + 31)
DECLARE_PMID(kActionIDSpace, kFootnoteJCloseSquareQuoteActionID, kTextOptionsPanelPrefix + 32)
DECLARE_PMID(kActionIDSpace, kFootnoteJCloseThickBracketActionID, kTextOptionsPanelPrefix + 33)
DECLARE_PMID(kActionIDSpace, kFootnoteNonBreakSpaceActionID, kTextOptionsPanelPrefix + 34)
DECLARE_PMID(kActionIDSpace, kFootnoteNonBreakFixedSpaceActionID, kTextOptionsPanelPrefix + 35)
DECLARE_PMID(kActionIDSpace, kFootnoteSixthSpaceActionID, kTextOptionsPanelPrefix + 36)
DECLARE_PMID(kActionIDSpace, kFootnoteThirdSpaceActionID, kTextOptionsPanelPrefix + 37)
DECLARE_PMID(kActionIDSpace, kFootnoteFigureSpaceActionID, kTextOptionsPanelPrefix + 38)
DECLARE_PMID(kActionIDSpace, kFootnotePunctuationSpaceActionID, kTextOptionsPanelPrefix + 39)
DECLARE_PMID(kActionIDSpace, kFootnoteFlushSpaceActionID, kTextOptionsPanelPrefix + 40)
DECLARE_PMID(kActionIDSpace, kFootnotePopupSep3ActionID, kTextOptionsPanelPrefix + 41)
DECLARE_PMID(kActionIDSpace, kFootnotePopupSep4ActionID, kTextOptionsPanelPrefix + 42)
DECLARE_PMID(kActionIDSpace, kFootnoteHairSpaceActionID, kTextOptionsPanelPrefix + 43)
DECLARE_PMID(kActionIDSpace, kFootnoteThinSpaceActionID, kTextOptionsPanelPrefix + 44)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixIdeoSpaceActionID, kTextOptionsPanelPrefix + 45)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixMSpaceActionID, kTextOptionsPanelPrefix + 46)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixNSpaceActionID, kTextOptionsPanelPrefix + 47)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixNonBreakSpaceActionID, kTextOptionsPanelPrefix + 48)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixNonBreakFixedSpaceActionID, kTextOptionsPanelPrefix + 49)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixSixthSpaceActionID, kTextOptionsPanelPrefix + 50)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixQtrSpaceActionID, kTextOptionsPanelPrefix + 51)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixThirdSpaceActionID, kTextOptionsPanelPrefix + 52)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixFigureSpaceActionID, kTextOptionsPanelPrefix + 53)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixPunctuationSpaceActionID, kTextOptionsPanelPrefix + 54)
DECLARE_PMID(kActionIDSpace, kFootnotePrefixFlushSpaceActionID, kTextOptionsPanelPrefix + 55)
DECLARE_PMID(kActionIDSpace, kFootnotePopupSep2ActionID, kTextOptionsPanelPrefix + 56)

// <Service ID>
DECLARE_PMID(kServiceIDSpace, kFootnoteSettingsDialogService, kTextOptionsPanelPrefix + 1)


//
//Script Element IDs
//

//Suites

//Objects
DECLARE_PMID(kScriptInfoIDSpace, kTextEditingPreferenceObjectScriptElement,			kTextOptionsPanelPrefix + 10)

//Events

//Properties
DECLARE_PMID(kScriptInfoIDSpace, kTextEditingPrefsPropertyScriptElement,		kTextOptionsPanelPrefix + 100)
DECLARE_PMID(kScriptInfoIDSpace, kDragDropTextInLayoutPropertyScriptElement,	kTextOptionsPanelPrefix + 101)
DECLARE_PMID(kScriptInfoIDSpace, kDragDropTextInStoryPropertyScriptElement,		kTextOptionsPanelPrefix + 102)
DECLARE_PMID(kScriptInfoIDSpace, kTextClickBehaviorPropertyScriptElement,		kTextOptionsPanelPrefix + 103)
DECLARE_PMID(kScriptInfoIDSpace, kSmartCutAndPastePropertyScriptElement,		kTextOptionsPanelPrefix + 104)
DECLARE_PMID(kScriptInfoIDSpace, kTextClickConversionBehaviorPropertyScriptElement,	kTextOptionsPanelPrefix + 105)

//Enums

//GUIDS
// {F5236EA2-4FD3-4ccc-9600-73260A141D32}
#define kTextEditingPref_CLSID { 0xf5236ea2, 0x4fd3, 0x4ccc, { 0x96, 0x0, 0x73, 0x26, 0xa, 0x14, 0x1d, 0x32 } }

#endif // __TextOptionsPanelID__

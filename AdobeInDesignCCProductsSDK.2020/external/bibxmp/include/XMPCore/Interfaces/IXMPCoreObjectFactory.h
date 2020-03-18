#ifndef IXMPCoreObjectFactory_h__
#define IXMPCoreObjectFactory_h__ 1

// =================================================================================================
// Copyright 2014 Adobe Systems Incorporated
// All Rights Reserved.
//
// NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance with the terms
// of the Adobe license agreement accompanying it.
// =================================================================================================

#if AdobePrivate
// =================================================================================================
// Change history
// ==============
//
// Writers:
//  ADC Amandeep Chawla
//
// mm/dd/yy who Description of changes, most recent on top.
//
// 02-02-15 ADC 5.6-c036 Porting C++ Based APIs of XMPCore to gcc 4.8.x on Linux Platform.
// 07-10-14 ADC 5.6-c017 Fixing issues related to Mac build.
// 07-10-14 ADC 5.6-c015 Refactoring, partial documentation and bug fixes of XMPCommon and XMPCore C++ APIs.
// 02-27-14 HK  5.6-c006 Implementation of Remove API + Adding support for creating empty DOM nodes.
// 02-24-14 HK  5.6-c004 Added new internal XMP DOM interfaces + fixed memory leaks + implemented qualifiers for new XMP DOM.
// 02-24-14 ADC 5.6-c001 XMPCommon Framework and XMPCore new APIs ported to Mac Environment.
// 02-12-14 HK  5.5-c028 Done refactoring of XMP DOM interfaces and implementations.
// 02-09-14 ADC 5.5-c026 Re-factoring of XMPCommon Framework
// 02-05-14 ADC 5.5-c024 Added a new API to the XMPCore to return pointer to interface
//						 IXMPDOMFactory
//
// =================================================================================================
#endif // AdobePrivate

#include "XMPCore/XMPCoreFwdDeclarations.h"
#include "XMPCommon/Interfaces/BaseInterfaces/ITSingleton.h"
#include "XMPCommon/Interfaces/IError.h"

namespace NS_XMPCORE {

	using namespace NS_XMPCOMMON;
	using NS_XMPCOMMON::UInt32;

	//!
	//! \brief Version1 of a interface that represents a factory to create various artifacts of XMP DOM like array,
	//! structure, path etc.
	//!
	//! Provides all the functions to create instances of various artifacts of XMP DOM and return them as shared pointers
	//! to the clients. This is the interface through which clients of the library actually get access to all other interfaces.
	//! It is a singleton object.
	//! \attention Supports multi threading.
	//!
	class XMP_PUBLIC IXMPCoreObjectFactory_v1
		: public virtual ITSingleton< IXMPCoreObjectFactory_v1 >
	{
	public:

		//!
		//! Creates an error object which encapsulates the error generated by client during call back operations.
		//! \param errDomain	[in]		a value of #eErrorDomain indicating the error domain.
		//! \param errCode		[in]		a value of #eErrorCode indicating the error code.
		//! \param errSeverity	[in]		a value of #eErrorSeverity indicating the severity of the error.
		//! \param message		[in]		pointer to a constant null terminated char buffer containing message. NULL pointer
		//! will be treated as empty message string.
		//! \param fileName		[in]		pointer to a constant null terminated char buffer containing fileName in which error
		//! originated.
		//! \param lineNumber	[in]		a value of #NS_XMPCOMMON::UInt32 type respresenting the lineNumber at which error
		//! originated.
		//! \param paramsCount	[in]		an object of type #NS_XMPCOMMON::SizeT indicating the number of parameters to be
		//! associated with the error object.
		//! \param parameters	[in]		pointer to the first location of an array of constant null terminated char buffers,
		//! where in each location stores a parameter string.
		//! \return a pointer to a const object of #NS_XMPCOMMON::IError_base.
		//! \attention the returned pointer is allocated on heap by the module so client is responsible for its release. They
		//! should call ReleaseSharedOwnership once they no longer need this object.
		//! 
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED pcIError_base CreateClientInitiatedError( IError_base::eErrorDomain errDomain,
			IError_base::eErrorCode errCode, IError_base::eErrorSeverity errSeverity, const char * message, const char * fileName,
			UInt32 lineNumber, SizeT paramsCount = 0, const char ** parameters = NULL ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an empty name space - prefix map and returns it to the client as a shared pointer.
		//! \param multithreadingSupport	[in]	a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether
		//! the new object created should be thread safe or not.
		//! \return a shared pointer to ane empty #NS_XMPCORE::IXMPNameSpacePrefixMap object.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPNameSpacePrefixMap CreateEmptyNameSpacePrefixMap( eMultiThreadingSupport multiThreadingSupport ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Provides the default mapping of prefix string and nameSpace strings used by XMPCore.
		//! \return a shared pointer to const #NS_XMPCORE::IXMPNameSpacePrefixMap object containing all the mappings used
		//! as default by the XMPCore.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spcIXMPNameSpacePrefixMap GetDefaultNameSpacePrefixMap() MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates a normal property path segment.These are essentially all properties (simple, struct and arrays).
		//! \param[in]		nameSpace	pointer to a null terminated constant char buffer containing name space URI of the property.
		//! \param[in]		name		pointer to a null terminated constant char buffer containing local name of the property.
		//! \return a shared pointer to const #NS_XMPCOMMON::IXMPPathSegment.
		//! \attention throws #NS_XMPCOMMON::spcIError in pointers to const char buffers are NULL or their content is empty.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spcIXMPPathSegment CreatePropertyPathSegment( const char * nameSpace, const char * name ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an array index path segment that denotes a specific element of an array.
		//! Such segments do not have an own name and inherits the namespace from the Array property itself.
		//! \param[in]		nameSpace	pointer to a null terminated constant char buffer containing name space URI of the property.
		//! \param[in]		index		an object of type #NS_XMPCOMMON::SizeT containting the index of the array element.
		//! \return a shared pointer to const #NS_XMPCOMMON::IXMPPathSegment.
		//! \attention throws #NS_XMPCOMMON::spcIError in pointers to const char buffers are NULL or their content is empty.
		//!
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spcIXMPPathSegment CreateArrayIndexPathSegment( const char * nameSpace, SizeT index ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates a Qualifier path segment, which behaves like a normal property
		//! \param[in]		nameSpace	pointer to a null terminated constant char buffer containing name space URI of the property.
		//! \param[in]		name		pointer to a null terminated constant char buffer containing local name of the property.
		//! \return a shared pointer to const #NS_XMPCOMMON::IXMPPathSegment.
		//! \attention throws #NS_XMPCOMMON::spcIError in pointers to const char buffers are NULL or their content is empty.
		//!//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spcIXMPPathSegment CreateQualifierPathSegment( const char * nameSpace, const char * name ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates a path segment that selects a specific qualifier by its value.
		//! For example a specific language in a alternative array of languages.
		//! \param[in]		nameSpace	pointer to a null terminated constant char buffer containing name space URI of the property.
		//! \param[in]		name		pointer to a null terminated constant char buffer containing local name of the property.
		//! \param[in]		value		pointer to a null terminated constant char buffer containing value of the language (xml:lang)
		//! qualifier of the property.
		//! \return a shared pointer to const #NS_XMPCOMMON::IXMPPathSegment.
		//! \attention throws #NS_XMPCOMMON::spcIError in pointers to const char buffers are NULL or their content is empty.
		//!//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spcIXMPPathSegment CreateQualifierSelectorPathSegment( const char * nameSpace, const char * name, const char * value ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates a path from a string containing serialized form of the path.
		//! \param[in]		serializedPath			pointer to a const NULL terminated char buffer containing serialized form of the path.
		//! The serialized form can be in long form or short form.
		//! \param[in]		map						a shared pointer to a const #NS_XMPCORE::IXMPNameSpacePrefixMap object which will contain the
		//! mapping for nameSpaces to prefixes. Passing an invalid shared pointer means the serialized path is in long form.
		//! \param[in]		multithreadingSupport	a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether the new object
		//! created should be thread safe or not. By default new object created will inherit its setting from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPPath object.
		//! \note In case the serializedPath is NULL or the contents are empty then it will result in an empty path.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPPath CreatePathByParsing( const char * serializedPath = NULL, const spcIXMPNameSpacePrefixMap & map = spcIXMPNameSpacePrefixMap(),
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates a simple property node which is not part of any metadata document.
		//! \param[in]		nameSpace	pointer to a const NULL terminated char buffer containing namespace of the simple property.
		//! \param[in]		name		pointer to a const NULL terminated char buffer containing name of the simple property.
		//! \param[in]		value		pointer to a const NULL terminated char buffer containing value of the simple property.
		//! \param[in]		multithreadingSupport	a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether the new object
		//! created should be thread safe or not. By default new object created will inherit its setting from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPSimpleNode object.
		//! \attention In case the nameSpace or name are NULL pointers or their contents are empty than an error is thrown.
		//! \note In case the value is a null pointer or its contents are empty than the value is set to empty string.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPSimpleNode CreateSimpleNode( const char * nameSpace, const char * name,
			const char * value = NULL, eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an un-ordered array node which is not part of any metadata document.
		//! \param[in] nameSpace pointer to a const NULL terminated char buffer containing namespace of the array node.
		//! \param[in] name pointer to a const NULL terminated char buffer containing name of the array node.
		//! \param[in] multithreadingSupport a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether
		//! the new object created should be thread safe or not. By default new object created will inherit its setting
		//! from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPArrayNode object.
		//! \attention error is thrown in the following cases:
		//!		-# nameSpace is NULL or its contents are empty.
		//!		-# name is NULL or its contents are empty.
		//!		-# invalid value is provided for arrayNodeForm.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPArrayNode CreateUnorderedArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an ordered array node which is not part of any metadata document.
		//! \param[in] nameSpace pointer to a const NULL terminated char buffer containing namespace of the array node.
		//! \param[in] name pointer to a const NULL terminated char buffer containing name of the array node.
		//! \param[in] multithreadingSupport a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether
		//! the new object created should be thread safe or not. By default new object created will inherit its setting
		//! from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPArrayNode object.
		//! \attention error is thrown in the following cases:
		//!		-# nameSpace is NULL or its contents are empty.
		//!		-# name is NULL or its contents are empty.
		//!		-# invalid value is provided for arrayNodeForm.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPArrayNode CreateOrderedArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an alternative array node which is not part of any metadata document.
		//! \param[in] nameSpace pointer to a const NULL terminated char buffer containing namespace of the array node.
		//! \param[in] name pointer to a const NULL terminated char buffer containing name of the array node.
		//! \param[in] multithreadingSupport a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether
		//! the new object created should be thread safe or not. By default new object created will inherit its setting
		//! from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPArrayNode object.
		//! \attention error is thrown in the following cases:
		//!		-# nameSpace is NULL or its contents are empty.
		//!		-# name is NULL or its contents are empty.
		//!		-# invalid value is provided for arrayNodeForm.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPArrayNode CreateAlternativeArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates a structure node which is not part of any metadata document.
		//! \param[in] nameSpace pointer to a const NULL terminated char buffer containing namespace of the structure node.
		//! \param[in] name pointer to a const NULL terminated char buffer containing name of the structure node.
		//! \param[in] multithreadingSupport a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether
		//! the new object created should be thread safe or not. By default new object created will inherit its setting
		//! from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPStructureNode object.
		//! \attention error is thrown in the following cases:
		//!		-# nameSpace is NULL or its contents are empty.
		//!		-# name is NULL or its contents are empty.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPStructureNode CreateStructureNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an object of qualifiers which is not part of any metadata document.
		//! \param[in]		multithreadingSupport	a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether the new object
		//! created should be thread safe or not. By default new object created will inherit its setting from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPQualifiers object.
		//! \note In case the value is a null pointer or its contents are empty than the value is set to empty string.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPQualifiers CreateQualifiers( 
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization )  MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		//!
		//! Creates an empty metadata object.
		//! \param[in] multithreadingSupport a value of type #NS_XMPCOMMON::eMultiThreadingSupport controlling whether
		//! the new object created should be thread safe or not. By default new object created will inherit its setting
		//! from the #NS_XMPCOMMON::IConfigurationManager.
		//! \return a shared pointer to a #NS_XMPCORE::IXMPMetadata object.
		//!
		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPMetadata CreateMetadata(
			eMultiThreadingSupport multiThreadingSupport = kMultiThreadingConfiguredAtInitialization ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

		XMP_PRIVATE VIRTUAL_IF_SOURCE_COMPILED spIXMPDOMImplementationRegistry GetDOMImplementationRegistry() MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED;

	#if !SOURCE_COMPILED
	//! \cond XMP_INTERNAL_DOCUMENTATION
	protected:
		virtual pcIError_base CreateClientInitiatedError( UInt32 errDomain, UInt32 errCode, UInt32 errSeverity, const char * message,
			const char * fileName, UInt32 lineNumber, SizeT paramsCount, const char ** parameters, pcIError_base & error ) __NOTHROW__ = 0;

		virtual pIXMPNameSpacePrefixMap_base CreateEmptyNameSpacePrefixMap( UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pcIXMPNameSpacePrefixMap_base GetDefaultNameSpacePrefixMap( pcIError_base & error ) __NOTHROW__ = 0;

		virtual pcIXMPPathSegment_base CreatePropertyPathSegment( const char * nameSpace, const char * name, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pcIXMPPathSegment_base CreateArrayIndexPathSegment( const char * nameSpace, SizeT index, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pcIXMPPathSegment_base CreateQualifierPathSegment( const char * nameSpace, const char * name, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pcIXMPPathSegment_base CreateQualifierSelectorPathSegment( const char * nameSpace, const char * name,
			const char * value, pcIError_base & error ) __NOTHROW__ = 0;

		virtual pIXMPPath_base CreatePathByParsing( const char * serailizedPath, pcIXMPNameSpacePrefixMap_base map,
			UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;

		virtual pIXMPSimpleNode_base CreateSimpleNode( const char * nameSpace, const char * name,
			const char * value, UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pIXMPArrayNode_base CreateArrayNode( const char * nameSpace, const char * name, UInt32 arrayNodeForm,
			UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pIXMPStructureNode_base CreateStructureNode( const char * nameSpace, const char * name,
			UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pIXMPQualifiers_base CreateQualifiers( UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;
		virtual pIXMPMetadata_base CreateMetadata( UInt32 multiThreadingSupport, pcIError_base & error ) __NOTHROW__ = 0;

		virtual pIXMPDOMImplementationRegistry_base GetDOMImplementationRegistry( pcIError_base & error ) __NOTHROW__ = 0;
	//! \endcond
	#endif  // !SOURCE_COMPILED

	protected:
		//!
		//! Virtual Destructor
		//!
		virtual ~IXMPCoreObjectFactory_v1() = 0;

		REQ_FRIEND_CLASS_DECLARATION();
	};

	inline IXMPCoreObjectFactory_v1::~IXMPCoreObjectFactory_v1() { }
}

#ifndef DEPENDS_ON_XMPCORE
	#define DEPENDS_ON_XMPCORE 1
#endif

#if DEPENDS_ON_XMPCORE
	extern "C" NS_XMPCORE::IXMPCoreObjectFactory_base * XMP_PUBLIC WXMPMeta_GetXMPDOMFactoryInstance_1();
#endif


namespace NS_XMPCORE {
#if DEPENDS_ON_XMPCORE
	inline pIXMPCoreObjectFactory_base XMPCoreObjectFactoryBaseInstance( bool reset = false ) {
		static pIXMPCoreObjectFactory_base sDOMFactoryInstanceBasePtr = NULL;
		if ( reset ) {
			sDOMFactoryInstanceBasePtr = NULL;
		} else if ( sDOMFactoryInstanceBasePtr == NULL ) {
			sDOMFactoryInstanceBasePtr = WXMPMeta_GetXMPDOMFactoryInstance_1();
		}
		return sDOMFactoryInstanceBasePtr;
	}
#else // !DEPENDS_ON_XMPCORE
	inline pIXMPCoreObjectFactory_base XMPCoreObjectFactoryBaseInstance( bool changeInstanceValue = false, pIXMPCoreObjectFactory instanceValue = NULL ) {
		static pIXMPCoreObjectFactory sDOMFactoryInstanceBasePtr = NULL;
		if ( changeInstanceValue )
			sDOMFactoryInstanceBasePtr = instanceValue;
		return sDOMFactoryInstanceBasePtr;
	}
#endif // DEPENDS_ON_XMPCORE
	
}

namespace NS_XMPCOMMON {
	using namespace NS_XMPCORE;
	
	template< >
	inline pIXMPCoreObjectFactory_base ITSingleton< IXMPCoreObjectFactory_base >::GetInstance() {
		return XMPCoreObjectFactoryBaseInstance();
	}
	
	template< >
	inline void ITSingleton< IXMPCoreObjectFactory_base >::DestroyInstance() {
		XMPCoreObjectFactoryBaseInstance( true );
	}
	
	template< >
	inline void ITSingleton< IXMPCoreObjectFactory_base >::CreateInstance() {
		GetInstance();
	}
	
}

#if !SOURCE_COMPILED && !BUILDING_XMPCORE_LIB
	#include "XMPCommon/Utilities/TWrapperFunctions.h"
	#include "XMPCore/Interfaces/IXMPNameSpacePrefixMap.h"
	#include "XMPCore/Interfaces/IXMPPathSegment.h"
	#include "XMPCore/Interfaces/IXMPPath.h"
	#include "XMPCore/Interfaces/IXMPSimpleNode.h"
	#include "XMPCore/Interfaces/IXMPArrayNode.h"
	#include "XMPCore/Interfaces/IXMPStructureNode.h"
	#include "XMPCore/Interfaces/IXMPQualifiers.h"
	#include "XMPCore/Interfaces/IXMPMetadata.h"
	#include "XMPCore/Interfaces/IXMPDOMImplementationRegistry.h"

	namespace NS_XMPCORE {

		inline pcIError_base IXMPCoreObjectFactory_v1::CreateClientInitiatedError( IError_base::eErrorDomain errDomain,
			IError_base::eErrorCode errCode, IError_base::eErrorSeverity errSeverity, const char * message, const char * fileName,
			UInt32 lineNumber, SizeT paramsCount, const char ** parameters )
		{
			pcIError_base error( NULL );
			pcIError_base returnValue = this->CreateClientInitiatedError( static_cast< UInt32 >( errDomain ), static_cast< UInt32 >( errCode ),
				static_cast< UInt32 >( errSeverity ), message, fileName, lineNumber, paramsCount, parameters, error );
			if ( error ) {
				return error;
			} else {
				return returnValue;
			}
		}

		inline spIXMPNameSpacePrefixMap IXMPCoreObjectFactory_v1::CreateEmptyNameSpacePrefixMap(
			eMultiThreadingSupport multiThreadingSupport )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPNameSpacePrefixMap_base, IXMPNameSpacePrefixMap, UInt32 >(
				this, &IXMPCoreObjectFactory_v1::CreateEmptyNameSpacePrefixMap, multiThreadingSupport );
		}

		inline spcIXMPNameSpacePrefixMap IXMPCoreObjectFactory_v1::GetDefaultNameSpacePrefixMap() {
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pcIXMPNameSpacePrefixMap_base, const IXMPNameSpacePrefixMap >(
				this, &IXMPCoreObjectFactory_v1::GetDefaultNameSpacePrefixMap );
		}

		inline spcIXMPPathSegment IXMPCoreObjectFactory_v1::CreatePropertyPathSegment( const char * nameSpace,
			const char * name )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pcIXMPPathSegment_base, const IXMPPathSegment, const char *, const char * >(
				this, &IXMPCoreObjectFactory_v1::CreatePropertyPathSegment, nameSpace, name );
		}

		inline spcIXMPPathSegment IXMPCoreObjectFactory_v1::CreateArrayIndexPathSegment( const char * nameSpace,
			SizeT index )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pcIXMPPathSegment_base, const IXMPPathSegment, const char *, SizeT >(
				this, &IXMPCoreObjectFactory_v1::CreateArrayIndexPathSegment, nameSpace, index );
		}

		inline spcIXMPPathSegment IXMPCoreObjectFactory_v1::CreateQualifierPathSegment( const char * nameSpace,
			const char * name )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pcIXMPPathSegment_base, const IXMPPathSegment, const char *, const char * >(
				this, &IXMPCoreObjectFactory_v1::CreateQualifierPathSegment, nameSpace, name );
		}

		inline spcIXMPPathSegment IXMPCoreObjectFactory_v1::CreateQualifierSelectorPathSegment( const char * nameSpace,
			const char * name, const char * value )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pcIXMPPathSegment_base, const IXMPPathSegment, const char *, const char *, const char * >(
				this, &IXMPCoreObjectFactory_v1::CreateQualifierSelectorPathSegment, nameSpace, name, value );
		}

		inline spIXMPPath IXMPCoreObjectFactory_v1::CreatePathByParsing( const char * serializedPath /*= NULL*/,
			const spcIXMPNameSpacePrefixMap & map /*= spcIXMPNameSpacePrefixMap()*/,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPPath_base, IXMPPath, const char *, pcIXMPNameSpacePrefixMap_base, UInt32 >(
				this, &IXMPCoreObjectFactory_v1::CreatePathByParsing, serializedPath, map.get(), static_cast< UInt32 >( multiThreadingSupport ) );
		}

		inline spIXMPSimpleNode IXMPCoreObjectFactory_v1::CreateSimpleNode( const char * nameSpace, const char * name,
			const char * value /*= NULL*/, eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ ) MARK_PURE_VIRTUAL_IF_SOURCE_COMPILED
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPSimpleNode_base,
				IXMPSimpleNode, const char *, const char *, const char *, UInt32 >(
					this, &IXMPCoreObjectFactory_v1::CreateSimpleNode, nameSpace, name, value,
					static_cast< UInt32 >( multiThreadingSupport )
				);
		}

		inline spIXMPArrayNode IXMPCoreObjectFactory_v1::CreateUnorderedArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPArrayNode_base,
				IXMPArrayNode, const char *, const char *, UInt32, UInt32 >(
					this, &IXMPCoreObjectFactory_v1::CreateArrayNode, nameSpace, name,
					static_cast< UInt32 >( IXMPArrayNode_base::kXMPArrayNodeFormUnordered ), static_cast< UInt32 >( multiThreadingSupport )
				);
		}

		inline spIXMPArrayNode IXMPCoreObjectFactory_v1::CreateOrderedArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPArrayNode_base,
				IXMPArrayNode, const char *, const char *, UInt32, UInt32 >(
				this, &IXMPCoreObjectFactory_v1::CreateArrayNode, nameSpace, name,
				static_cast< UInt32 >( IXMPArrayNode_base::kXMPArrayNodeFormOrdered ), static_cast< UInt32 >( multiThreadingSupport )
				);
		}

		inline spIXMPArrayNode IXMPCoreObjectFactory_v1::CreateAlternativeArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPArrayNode_base,
				IXMPArrayNode, const char *, const char *, UInt32, UInt32 >(
				this, &IXMPCoreObjectFactory_v1::CreateArrayNode, nameSpace, name,
				static_cast< UInt32 >( IXMPArrayNode_base::kXMPArrayNodeFormAlternative ), static_cast< UInt32 >( multiThreadingSupport )
				);
		}

		inline spIXMPStructureNode IXMPCoreObjectFactory_v1::CreateStructureNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPStructureNode_base,
				IXMPStructureNode, const char *, const char *, UInt32 >(
					this, &IXMPCoreObjectFactory_v1::CreateStructureNode, nameSpace, name,
					static_cast< UInt32 >( multiThreadingSupport )
				);
		}

		inline spIXMPQualifiers IXMPCoreObjectFactory_v1::CreateQualifiers( eMultiThreadingSupport mulithreadingSupport ) {
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPQualifiers_base,
				IXMPQualifiers, UInt32 >(
					this, &IXMPCoreObjectFactory_v1::CreateQualifiers, static_cast< UInt32 > ( mulithreadingSupport ) );
		}

		inline spIXMPMetadata IXMPCoreObjectFactory_v1::CreateMetadata( eMultiThreadingSupport mulithreadingSupport ) {
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPMetadata_base,
				IXMPMetadata, UInt32 >(
					this, &IXMPCoreObjectFactory_v1::CreateMetadata, static_cast< UInt32 > ( mulithreadingSupport ) );
		}

		inline spIXMPDOMImplementationRegistry IXMPCoreObjectFactory_v1::GetDOMImplementationRegistry() {
			return NS_XMPCOMMON::CallSafeFunctionReturningPointer< IXMPCoreObjectFactory_v1, pIXMPDOMImplementationRegistry_base, IXMPDOMImplementationRegistry >(
				this, &IXMPCoreObjectFactory_v1::GetDOMImplementationRegistry );
		}

		// static factory functions of all the public interfaces

		inline spcIXMPNameSpacePrefixMap IXMPNameSpacePrefixMap_v1::GetDefaultNameSpacePrefixMap() {
			return IXMPCoreObjectFactory_v1::GetInstance()->GetDefaultNameSpacePrefixMap();
		}

		inline spIXMPNameSpacePrefixMap IXMPNameSpacePrefixMap_v1::CreateEmptyNameSpacePrefixMap( eMultiThreadingSupport multiThreadingSupport ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateEmptyNameSpacePrefixMap( multiThreadingSupport );
		}

		inline spcIXMPPathSegment IXMPPathSegment_v1::CreatePropertyPathSegment( const char * nameSpace, const char * name ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreatePropertyPathSegment( nameSpace, name );
		}

		inline spcIXMPPathSegment IXMPPathSegment_v1::CreateArrayIndexPathSegment( const char * nameSpace, SizeT index ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateArrayIndexPathSegment( nameSpace, index );
		}

		inline spcIXMPPathSegment IXMPPathSegment_v1::CreateQualifierPathSegment( const char * nameSpace, const char * name ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateQualifierPathSegment( nameSpace, name );
		}

		inline spcIXMPPathSegment IXMPPathSegment_v1::CreateQualifierSelectorPathSegment( const char * nameSpace, const char * name, const char * value ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateQualifierSelectorPathSegment( nameSpace, name, value );
		}

		inline spIXMPPath IXMPPath_v1::CreatePathByParsing( const char * serializedPath, const spcIXMPNameSpacePrefixMap & map /* = spcIXMPNameSpacePrefixMap() */,
			eMultiThreadingSupport multiThreadingSupport /* = kMultiThreadingConfiguredAtInitialization */ ) {
				return IXMPCoreObjectFactory_v1::GetInstance()->CreatePathByParsing( serializedPath, map, multiThreadingSupport );
		}

		inline spIXMPPath IXMPPath_v1::CreateEmptyPath( eMultiThreadingSupport multiThreadingSupport ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreatePathByParsing( NULL, spcIXMPNameSpacePrefixMap(), multiThreadingSupport );
		}

		inline spIXMPSimpleNode IXMPSimpleNode_v1::CreateSimpleNode( const char * nameSpace, const char * name,
			const char * value /*= NULL*/, eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateSimpleNode( nameSpace, name, value, multiThreadingSupport );
		}

		inline spIXMPArrayNode IXMPArrayNode_v1::CreateUnorderedArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateUnorderedArrayNode( nameSpace, name, multiThreadingSupport );
		}

		inline spIXMPArrayNode IXMPArrayNode_v1::CreateOrderedArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateOrderedArrayNode( nameSpace, name, multiThreadingSupport );
		}

		inline spIXMPArrayNode IXMPArrayNode_v1::CreateAlternativeArrayNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateAlternativeArrayNode( nameSpace, name, multiThreadingSupport );
		}

		inline spIXMPStructureNode IXMPStructureNode_v1::CreateStructureNode( const char * nameSpace, const char * name,
			eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ )
		{
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateStructureNode( nameSpace, name, multiThreadingSupport );
		}

		inline spIXMPQualifiers IXMPQualifiers_v1::CreateQualifiers( eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateQualifiers( multiThreadingSupport );
		}

		inline spIXMPMetadata IXMPMetadata_v1::CreateMetadata( eMultiThreadingSupport multiThreadingSupport /*= kMultiThreadingConfiguredAtInitialization */ ) {
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateMetadata( multiThreadingSupport );
		}

		inline spIXMPDOMImplementationRegistry IXMPDOMImplementationRegistry_v1::GetDOMImplementationRegistry() {
			return IXMPCoreObjectFactory_v1::GetInstance()->GetDOMImplementationRegistry();
		}
	}

	namespace NS_XMPCOMMON {
		using namespace NS_XMPCORE;

		inline pcIError_base IError_v1::CreateClientInitiatedError( eErrorDomain errDomain, eErrorCode errorCode, eErrorSeverity errorSeverity,
			const char * message, const char * fileName, UInt32 lineNumber, SizeT parametersCount /* = 0 */, const char ** parameters /* = NULL */ )
		{
			return IXMPCoreObjectFactory_v1::GetInstance()->CreateClientInitiatedError( errDomain, errorCode, errorSeverity, message, fileName, lineNumber,
				parametersCount, parameters );
		}
	}

#endif  // !SOURCE_COMPILED && !BUILDING_XMPCORE_LIB

#endif // IXMPCoreObjectFactory_h__
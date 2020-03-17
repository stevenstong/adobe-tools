//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/utils/IDHTTPRequest.h $
//  
//  Owner: Mainak Biswas
//  
//  $Author: pmbuilder $
//  
//  $DateTime: 2018/03/06 12:15:34 $
//  
//  $Revision: #11 $
//  
//  $Change: 1009641 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2015 Adobe Systems Incorporated. All Rights Reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and are protected by all applicable intellectual property
//  laws, including trade secret and copyright laws.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//  
//  Description:
//  This class provides a wrapper over traditional uxtech::network:HTTPRequest implementation. The benefit of using this class is that any additional setup, like setting up 
//  request to communicate over authenticated proxy is automatically taken care of.

//  Currently This class only takes care of proxy related setup. Internally proxy credentials are shared between Adobe applications and this class uses the same internal 
//  mechanism to setup proxy credentials without exposing the credentials to users of this implementation.
//  
//  Currently this class provides very limited functionality. All network related API (like setting headers, reading response received etc) will be incrementally exposed via this 
//  implementation. 
//
//  TODO: Expose more networking API from this class to make it more usable.
//  
//========================================================================================

#pragma once
#ifndef __IDHTTPREQUEST_H__
#define __IDHTTPREQUEST_H__

#include <uxtech/common/functional.hpp>
#include <uxtech/network/async_http.hpp>
#include <uxtech/thread/queue.hpp>

class PUBLIC_DECL IDHTTPRequest
{
public:
	typedef UXTECH_FUNCTION<void(IDHTTPRequest& request, uxtech::network::HttpResult result)>	AsyncIDHttpRequestNotifier;

	IDHTTPRequest();
	virtual ~IDHTTPRequest();

	virtual void SetUrl(const std::string &url) { mUrl = url; }
	virtual void SetMethod(const std::string &method) { mMethod = method; }

	virtual std::string GetUrl() { return mUrl; };
	virtual std::string GetMethod() { return mMethod; };

	/**
	Execute the HTTP request in an asynchronous manner once it has been set up. This function returns immediately. Care must be taken so that 
	IDHTTPREquest is not destroyed by the time the http request actually completes.
	@param notifier A reference to the callback function that will be called on request completion.
	@param threadqueue A reference to the queue object in which this asynchronous task will be scheduled.
	*/
	virtual void ExecuteAsync(const AsyncIDHttpRequestNotifier& notifier, const uxtech::thread::QueuePtr& threadqueue);

	/**
	Execute the HTTP request in an asynchronous manner once it has been set up. Returns the corresponding response code, i.e. 200 OK or 404 NOT FOUND etc.
	For asynchronous implementation use ExecuteAsync.
	*/
	virtual uxtech::network::HttpResult ExecuteSync();

	// Should be called during application shutdown explicitly to clean up any statically allocated IDIMSConnection object references.
	static void CleanupOnShutdown();

private:
	std::string mUrl;
	std::string mMethod;
	uxtech::network::HttpRequestPtr mRequest;
	AsyncIDHttpRequestNotifier mNotifier;

	void AsyncUxtechHTTPResponseHandler(const uxtech::network::AsyncHttpRequestPtr& task, uxtech::network::HttpResult httpResult, const uxtech::network::HttpRequestPtr& request);
};

#endif
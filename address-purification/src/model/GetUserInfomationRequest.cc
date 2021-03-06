/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/address-purification/model/GetUserInfomationRequest.h>

using AlibabaCloud::Address_purification::Model::GetUserInfomationRequest;

GetUserInfomationRequest::GetUserInfomationRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetUserInfomation")
{
	setMethod(HttpRequest::Method::Post);
}

GetUserInfomationRequest::~GetUserInfomationRequest()
{}

std::string GetUserInfomationRequest::getProductCode()const
{
	return productCode_;
}

void GetUserInfomationRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string GetUserInfomationRequest::getParameters()const
{
	return parameters_;
}

void GetUserInfomationRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setBodyParameter("Parameters", parameters);
}


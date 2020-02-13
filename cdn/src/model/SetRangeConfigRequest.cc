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

#include <alibabacloud/cdn/model/SetRangeConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetRangeConfigRequest;

SetRangeConfigRequest::SetRangeConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetRangeConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetRangeConfigRequest::~SetRangeConfigRequest()
{}

std::string SetRangeConfigRequest::getEnable()const
{
	return enable_;
}

void SetRangeConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetRangeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRangeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetRangeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRangeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long SetRangeConfigRequest::getConfigId()const
{
	return configId_;
}

void SetRangeConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}


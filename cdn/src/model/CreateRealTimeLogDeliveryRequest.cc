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

#include <alibabacloud/cdn/model/CreateRealTimeLogDeliveryRequest.h>

using AlibabaCloud::Cdn::Model::CreateRealTimeLogDeliveryRequest;

CreateRealTimeLogDeliveryRequest::CreateRealTimeLogDeliveryRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "CreateRealTimeLogDelivery")
{
	setMethod(HttpRequest::Method::Get);
}

CreateRealTimeLogDeliveryRequest::~CreateRealTimeLogDeliveryRequest()
{}

std::string CreateRealTimeLogDeliveryRequest::getProject()const
{
	return project_;
}

void CreateRealTimeLogDeliveryRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

long CreateRealTimeLogDeliveryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRealTimeLogDeliveryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRealTimeLogDeliveryRequest::getDomain()const
{
	return domain_;
}

void CreateRealTimeLogDeliveryRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateRealTimeLogDeliveryRequest::getRegion()const
{
	return region_;
}

void CreateRealTimeLogDeliveryRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string CreateRealTimeLogDeliveryRequest::getLogstore()const
{
	return logstore_;
}

void CreateRealTimeLogDeliveryRequest::setLogstore(const std::string& logstore)
{
	logstore_ = logstore;
	setParameter("Logstore", logstore);
}


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

#include <alibabacloud/green/model/SearchRequest.h>

using AlibabaCloud::Green::Model::SearchRequest;

SearchRequest::SearchRequest() :
	RoaServiceRequest("green", "2017-08-25")
{}

SearchRequest::~SearchRequest()
{}

std::string SearchRequest::getRegionId()const
{
	return regionId_;
}

void SearchRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SearchRequest::getClientInfo()const
{
	return clientInfo_;
}

void SearchRequest::setClientInfo(const std::string& clientInfo)
{
	clientInfo_ = clientInfo;
	setParameter("ClientInfo", clientInfo);
}


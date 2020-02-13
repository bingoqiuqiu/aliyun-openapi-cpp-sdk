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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeQpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeQpsDataRequest;

DescribeDomainRealTimeQpsDataRequest::DescribeDomainRealTimeQpsDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainRealTimeQpsData")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeDomainRealTimeQpsDataRequest::~DescribeDomainRealTimeQpsDataRequest()
{}

std::string DescribeDomainRealTimeQpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainRealTimeQpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainRealTimeQpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainRealTimeQpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainRealTimeQpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeQpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeQpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeQpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeQpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeQpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainRealTimeQpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeQpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}


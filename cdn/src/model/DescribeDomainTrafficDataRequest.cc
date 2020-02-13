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

#include <alibabacloud/cdn/model/DescribeDomainTrafficDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTrafficDataRequest;

DescribeDomainTrafficDataRequest::DescribeDomainTrafficDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainTrafficData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainTrafficDataRequest::~DescribeDomainTrafficDataRequest()
{}

std::string DescribeDomainTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}


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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataByLayerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainQpsDataByLayerRequest;

DescribeDomainQpsDataByLayerRequest::DescribeDomainQpsDataByLayerRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainQpsDataByLayer")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainQpsDataByLayerRequest::~DescribeDomainQpsDataByLayerRequest()
{}

std::string DescribeDomainQpsDataByLayerRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainQpsDataByLayerRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainQpsDataByLayerRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainQpsDataByLayerRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainQpsDataByLayerRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainQpsDataByLayerRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainQpsDataByLayerRequest::getLayer()const
{
	return layer_;
}

void DescribeDomainQpsDataByLayerRequest::setLayer(const std::string& layer)
{
	layer_ = layer;
	setParameter("Layer", layer);
}

std::string DescribeDomainQpsDataByLayerRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainQpsDataByLayerRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainQpsDataByLayerRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainQpsDataByLayerRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainQpsDataByLayerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainQpsDataByLayerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainQpsDataByLayerRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainQpsDataByLayerRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}


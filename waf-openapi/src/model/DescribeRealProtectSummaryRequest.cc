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

#include <alibabacloud/waf-openapi/model/DescribeRealProtectSummaryRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeRealProtectSummaryRequest;

DescribeRealProtectSummaryRequest::DescribeRealProtectSummaryRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeRealProtectSummary")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRealProtectSummaryRequest::~DescribeRealProtectSummaryRequest()
{}

std::string DescribeRealProtectSummaryRequest::getStartTimestamp()const
{
	return startTimestamp_;
}

void DescribeRealProtectSummaryRequest::setStartTimestamp(const std::string& startTimestamp)
{
	startTimestamp_ = startTimestamp;
	setParameter("StartTimestamp", startTimestamp);
}

std::string DescribeRealProtectSummaryRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeRealProtectSummaryRequest::setEndTimestamp(const std::string& endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setParameter("EndTimestamp", endTimestamp);
}

std::string DescribeRealProtectSummaryRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRealProtectSummaryRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeRealProtectSummaryRequest::getLang()const
{
	return lang_;
}

void DescribeRealProtectSummaryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeRealProtectSummaryRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeRealProtectSummaryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeRealProtectSummaryRequest::getDomain()const
{
	return domain_;
}

void DescribeRealProtectSummaryRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeRealProtectSummaryRequest::getStep()const
{
	return step_;
}

void DescribeRealProtectSummaryRequest::setStep(const std::string& step)
{
	step_ = step;
	setParameter("Step", step);
}

std::string DescribeRealProtectSummaryRequest::getRegion()const
{
	return region_;
}

void DescribeRealProtectSummaryRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}


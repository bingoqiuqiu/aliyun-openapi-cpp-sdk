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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainPvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainPvDataResult::DescribeDcdnDomainPvDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainPvDataResult::DescribeDcdnDomainPvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainPvDataResult::~DescribeDcdnDomainPvDataResult()
{}

void DescribeDcdnDomainPvDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPvDataInterval = value["PvDataInterval"]["UsageData"];
	for (auto value : allPvDataInterval)
	{
		UsageData pvDataIntervalObject;
		if(!value["TimeStamp"].isNull())
			pvDataIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			pvDataIntervalObject.value = value["Value"].asString();
		pvDataInterval_.push_back(pvDataIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDcdnDomainPvDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainPvDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainPvDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDcdnDomainPvDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDcdnDomainPvDataResult::UsageData> DescribeDcdnDomainPvDataResult::getPvDataInterval()const
{
	return pvDataInterval_;
}

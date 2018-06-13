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

#include <alibabacloud/live/model/DescribeCasterRtcInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterRtcInfoResult::DescribeCasterRtcInfoResult() :
	ServiceResult()
{}

DescribeCasterRtcInfoResult::DescribeCasterRtcInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterRtcInfoResult::~DescribeCasterRtcInfoResult()
{}

void DescribeCasterRtcInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["CasterId"].isNull())
		casterId_ = value["CasterId"].asString();
	if(!value["AuthToken"].isNull())
		authToken_ = value["AuthToken"].asString();

}

std::string DescribeCasterRtcInfoResult::getAuthToken()const
{
	return authToken_;
}

std::string DescribeCasterRtcInfoResult::getCasterId()const
{
	return casterId_;
}


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

#include <alibabacloud/foas/model/StartJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

StartJobResult::StartJobResult() :
	ServiceResult()
{}

StartJobResult::StartJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartJobResult::~StartJobResult()
{}

void StartJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["instanceId"].isNull())
		instanceId_ = std::stol(value["instanceId"].asString());

}

long StartJobResult::getInstanceId()const
{
	return instanceId_;
}


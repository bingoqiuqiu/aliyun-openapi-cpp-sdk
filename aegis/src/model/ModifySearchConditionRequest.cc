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

#include <alibabacloud/aegis/model/ModifySearchConditionRequest.h>

using AlibabaCloud::Aegis::Model::ModifySearchConditionRequest;

ModifySearchConditionRequest::ModifySearchConditionRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifySearchCondition")
{}

ModifySearchConditionRequest::~ModifySearchConditionRequest()
{}

std::string ModifySearchConditionRequest::getFilterConditions()const
{
	return filterConditions_;
}

void ModifySearchConditionRequest::setFilterConditions(const std::string& filterConditions)
{
	filterConditions_ = filterConditions;
	setCoreParameter("FilterConditions", filterConditions);
}

std::string ModifySearchConditionRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifySearchConditionRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifySearchConditionRequest::getName()const
{
	return name_;
}

void ModifySearchConditionRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}


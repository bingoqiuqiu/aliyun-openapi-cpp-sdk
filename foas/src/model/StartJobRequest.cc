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

#include <alibabacloud/foas/model/StartJobRequest.h>

using AlibabaCloud::Foas::Model::StartJobRequest;

StartJobRequest::StartJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{}

StartJobRequest::~StartJobRequest()
{}

std::string StartJobRequest::getProjectName()const
{
	return projectName_;
}

void StartJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string StartJobRequest::getRegionId()const
{
	return regionId_;
}

void StartJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StartJobRequest::getParameterJson()const
{
	return parameterJson_;
}

void StartJobRequest::setParameterJson(const std::string& parameterJson)
{
	parameterJson_ = parameterJson;
	setCoreParameter("ParameterJson", parameterJson);
}

std::string StartJobRequest::getJobName()const
{
	return jobName_;
}

void StartJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setCoreParameter("JobName", jobName);
}


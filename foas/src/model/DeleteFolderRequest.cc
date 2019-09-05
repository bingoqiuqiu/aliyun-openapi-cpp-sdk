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

#include <alibabacloud/foas/model/DeleteFolderRequest.h>

using AlibabaCloud::Foas::Model::DeleteFolderRequest;

DeleteFolderRequest::DeleteFolderRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{}

DeleteFolderRequest::~DeleteFolderRequest()
{}

std::string DeleteFolderRequest::getPath()const
{
	return path_;
}

void DeleteFolderRequest::setPath(const std::string& path)
{
	path_ = path;
	setCoreParameter("Path", path);
}

std::string DeleteFolderRequest::getProjectName()const
{
	return projectName_;
}

void DeleteFolderRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string DeleteFolderRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFolderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}


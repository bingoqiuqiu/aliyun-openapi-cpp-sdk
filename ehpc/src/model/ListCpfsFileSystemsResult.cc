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

#include <alibabacloud/ehpc/model/ListCpfsFileSystemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListCpfsFileSystemsResult::ListCpfsFileSystemsResult() :
	ServiceResult()
{}

ListCpfsFileSystemsResult::ListCpfsFileSystemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCpfsFileSystemsResult::~ListCpfsFileSystemsResult()
{}

void ListCpfsFileSystemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemListNode = value["FileSystemList"]["FileSystems"];
	for (auto valueFileSystemListFileSystems : allFileSystemListNode)
	{
		FileSystems fileSystemListObject;
		if(!valueFileSystemListFileSystems["RegionId"].isNull())
			fileSystemListObject.regionId = valueFileSystemListFileSystems["RegionId"].asString();
		if(!valueFileSystemListFileSystems["ZoneId"].isNull())
			fileSystemListObject.zoneId = valueFileSystemListFileSystems["ZoneId"].asString();
		if(!valueFileSystemListFileSystems["FileSystemId"].isNull())
			fileSystemListObject.fileSystemId = valueFileSystemListFileSystems["FileSystemId"].asString();
		if(!valueFileSystemListFileSystems["CreateTime"].isNull())
			fileSystemListObject.createTime = valueFileSystemListFileSystems["CreateTime"].asString();
		if(!valueFileSystemListFileSystems["Destription"].isNull())
			fileSystemListObject.destription = valueFileSystemListFileSystems["Destription"].asString();
		if(!valueFileSystemListFileSystems["ProtocolType"].isNull())
			fileSystemListObject.protocolType = valueFileSystemListFileSystems["ProtocolType"].asString();
		if(!valueFileSystemListFileSystems["Capacity"].isNull())
			fileSystemListObject.capacity = valueFileSystemListFileSystems["Capacity"].asString();
		auto allMountTargetListNode = allFileSystemListNode["MountTargetList"]["MountTargets"];
		for (auto allFileSystemListNodeMountTargetListMountTargets : allMountTargetListNode)
		{
			FileSystems::MountTargets mountTargetListObject;
			if(!allFileSystemListNodeMountTargetListMountTargets["MountTargetDomain"].isNull())
				mountTargetListObject.mountTargetDomain = allFileSystemListNodeMountTargetListMountTargets["MountTargetDomain"].asString();
			if(!allFileSystemListNodeMountTargetListMountTargets["Status"].isNull())
				mountTargetListObject.status = allFileSystemListNodeMountTargetListMountTargets["Status"].asString();
			if(!allFileSystemListNodeMountTargetListMountTargets["NetworkType"].isNull())
				mountTargetListObject.networkType = allFileSystemListNodeMountTargetListMountTargets["NetworkType"].asString();
			if(!allFileSystemListNodeMountTargetListMountTargets["VswId"].isNull())
				mountTargetListObject.vswId = allFileSystemListNodeMountTargetListMountTargets["VswId"].asString();
			if(!allFileSystemListNodeMountTargetListMountTargets["VpcId"].isNull())
				mountTargetListObject.vpcId = allFileSystemListNodeMountTargetListMountTargets["VpcId"].asString();
			fileSystemListObject.mountTargetList.push_back(mountTargetListObject);
		}
		fileSystemList_.push_back(fileSystemListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListCpfsFileSystemsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCpfsFileSystemsResult::getPageSize()const
{
	return pageSize_;
}

int ListCpfsFileSystemsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCpfsFileSystemsResult::FileSystems> ListCpfsFileSystemsResult::getFileSystemList()const
{
	return fileSystemList_;
}


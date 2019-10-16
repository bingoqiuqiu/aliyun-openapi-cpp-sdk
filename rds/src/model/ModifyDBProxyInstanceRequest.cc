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

#include <alibabacloud/rds/model/ModifyDBProxyInstanceRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyInstanceRequest;

ModifyDBProxyInstanceRequest::ModifyDBProxyInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxyInstance")
{}

ModifyDBProxyInstanceRequest::~ModifyDBProxyInstanceRequest()
{}

long ModifyDBProxyInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBProxyInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBProxyInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBProxyInstanceRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyDBProxyInstanceRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string ModifyDBProxyInstanceRequest::getEffectiveSpecificTime()const
{
	return effectiveSpecificTime_;
}

void ModifyDBProxyInstanceRequest::setEffectiveSpecificTime(const std::string& effectiveSpecificTime)
{
	effectiveSpecificTime_ = effectiveSpecificTime;
	setCoreParameter("EffectiveSpecificTime", effectiveSpecificTime);
}

std::string ModifyDBProxyInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBProxyInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDBProxyInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBProxyInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBProxyInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBProxyInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyDBProxyInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBProxyInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBProxyInstanceRequest::getDBProxyInstanceNum()const
{
	return dBProxyInstanceNum_;
}

void ModifyDBProxyInstanceRequest::setDBProxyInstanceNum(const std::string& dBProxyInstanceNum)
{
	dBProxyInstanceNum_ = dBProxyInstanceNum;
	setCoreParameter("DBProxyInstanceNum", dBProxyInstanceNum);
}

std::string ModifyDBProxyInstanceRequest::getDBProxyInstanceType()const
{
	return dBProxyInstanceType_;
}

void ModifyDBProxyInstanceRequest::setDBProxyInstanceType(const std::string& dBProxyInstanceType)
{
	dBProxyInstanceType_ = dBProxyInstanceType;
	setCoreParameter("DBProxyInstanceType", dBProxyInstanceType);
}


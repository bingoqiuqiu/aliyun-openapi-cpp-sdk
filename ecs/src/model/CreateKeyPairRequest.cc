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

#include <alibabacloud/ecs/model/CreateKeyPairRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateKeyPairRequest::CreateKeyPairRequest() :
	EcsRequest("CreateKeyPair")
{}

CreateKeyPairRequest::~CreateKeyPairRequest()
{}

long CreateKeyPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateKeyPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateKeyPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateKeyPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateKeyPairRequest::getRegionId()const
{
	return regionId_;
}

void CreateKeyPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateKeyPairRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateKeyPairRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

long CreateKeyPairRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateKeyPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

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

#include <alibabacloud/polardb/model/DescribeDBClusterMigrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterMigrationResult::DescribeDBClusterMigrationResult() :
	ServiceResult()
{}

DescribeDBClusterMigrationResult::DescribeDBClusterMigrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterMigrationResult::~DescribeDBClusterMigrationResult()
{}

void DescribeDBClusterMigrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["SourceRDSDBInstanceId"].isNull())
		sourceRDSDBInstanceId_ = value["SourceRDSDBInstanceId"].asString();
	if(!value["MigrationStatus"].isNull())
		migrationStatus_ = value["MigrationStatus"].asString();
	if(!value["Topologies"].isNull())
		topologies_ = value["Topologies"].asString();
	if(!value["DelayedSeconds"].isNull())
		delayedSeconds_ = std::stoi(value["DelayedSeconds"].asString());
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["RdsReadWriteMode"].isNull())
		rdsReadWriteMode_ = value["RdsReadWriteMode"].asString();
	if(!value["DBClusterReadWriteMode"].isNull())
		dBClusterReadWriteMode_ = value["DBClusterReadWriteMode"].asString();
	if(!value["Comment"].isNull())
		comment_ = value["Comment"].asString();

}

std::string DescribeDBClusterMigrationResult::getComment()const
{
	return comment_;
}

std::string DescribeDBClusterMigrationResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeDBClusterMigrationResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterMigrationResult::getTopologies()const
{
	return topologies_;
}

std::string DescribeDBClusterMigrationResult::getRdsReadWriteMode()const
{
	return rdsReadWriteMode_;
}

std::string DescribeDBClusterMigrationResult::getSourceRDSDBInstanceId()const
{
	return sourceRDSDBInstanceId_;
}

int DescribeDBClusterMigrationResult::getDelayedSeconds()const
{
	return delayedSeconds_;
}

std::string DescribeDBClusterMigrationResult::getDBClusterReadWriteMode()const
{
	return dBClusterReadWriteMode_;
}

std::string DescribeDBClusterMigrationResult::getMigrationStatus()const
{
	return migrationStatus_;
}


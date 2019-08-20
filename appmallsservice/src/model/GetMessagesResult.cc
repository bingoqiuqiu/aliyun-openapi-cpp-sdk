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

#include <alibabacloud/appmallsservice/model/GetMessagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

GetMessagesResult::GetMessagesResult() :
	ServiceResult()
{}

GetMessagesResult::GetMessagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMessagesResult::~GetMessagesResult()
{}

void GetMessagesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBizMessages = value["BizMessages"]["BizMessagesItem"];
	for (auto value : allBizMessages)
	{
		BizMessagesItem bizMessagesObject;
		if(!value["PubTime"].isNull())
			bizMessagesObject.pubTime = value["PubTime"].asString();
		if(!value["Topic"].isNull())
			bizMessagesObject.topic = value["Topic"].asString();
		if(!value["DataId"].isNull())
			bizMessagesObject.dataId = std::stol(value["DataId"].asString());
		if(!value["ContentMapJson"].isNull())
			bizMessagesObject.contentMapJson = value["ContentMapJson"].asString();
		bizMessages_.push_back(bizMessagesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["SubCode"].isNull())
		subCode_ = value["SubCode"].asString();
	if(!value["SubMsg"].isNull())
		subMsg_ = value["SubMsg"].asString();
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();

}

std::string GetMessagesResult::getMsg()const
{
	return msg_;
}

std::string GetMessagesResult::getSubMsg()const
{
	return subMsg_;
}

std::string GetMessagesResult::getLogsId()const
{
	return logsId_;
}

std::string GetMessagesResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMessagesResult::getSubCode()const
{
	return subCode_;
}

std::vector<GetMessagesResult::BizMessagesItem> GetMessagesResult::getBizMessages()const
{
	return bizMessages_;
}


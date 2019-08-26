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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetSchedulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetSchedulesResult::TaobaoFilmGetSchedulesResult() :
	ServiceResult()
{}

TaobaoFilmGetSchedulesResult::TaobaoFilmGetSchedulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetSchedulesResult::~TaobaoFilmGetSchedulesResult()
{}

void TaobaoFilmGetSchedulesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSchedules = value["Schedules"]["SchedulesItem"];
	for (auto value : allSchedules)
	{
		SchedulesItem schedulesObject;
		if(!value["CinemaId"].isNull())
			schedulesObject.cinemaId = std::stol(value["CinemaId"].asString());
		if(!value["CloseTime"].isNull())
			schedulesObject.closeTime = value["CloseTime"].asString();
		if(!value["HallName"].isNull())
			schedulesObject.hallName = value["HallName"].asString();
		if(!value["Id"].isNull())
			schedulesObject.id = std::stol(value["Id"].asString());
		if(!value["IsExpired"].isNull())
			schedulesObject.isExpired = value["IsExpired"].asString() == "true";
		if(!value["MaxCanBuy"].isNull())
			schedulesObject.maxCanBuy = std::stol(value["MaxCanBuy"].asString());
		if(!value["Price"].isNull())
			schedulesObject.price = std::stol(value["Price"].asString());
		if(!value["ScheduleArea"].isNull())
			schedulesObject.scheduleArea = value["ScheduleArea"].asString();
		if(!value["SectionId"].isNull())
			schedulesObject.sectionId = value["SectionId"].asString();
		if(!value["ServiceFee"].isNull())
			schedulesObject.serviceFee = std::stol(value["ServiceFee"].asString());
		if(!value["ShowDate"].isNull())
			schedulesObject.showDate = value["ShowDate"].asString();
		if(!value["ShowId"].isNull())
			schedulesObject.showId = std::stol(value["ShowId"].asString());
		if(!value["ShowTime"].isNull())
			schedulesObject.showTime = value["ShowTime"].asString();
		if(!value["ShowVersion"].isNull())
			schedulesObject.showVersion = value["ShowVersion"].asString();
		if(!value["HallId"].isNull())
			schedulesObject.hallId = value["HallId"].asString();
		schedules_.push_back(schedulesObject);
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

std::string TaobaoFilmGetSchedulesResult::getMsg()const
{
	return msg_;
}

std::vector<TaobaoFilmGetSchedulesResult::SchedulesItem> TaobaoFilmGetSchedulesResult::getSchedules()const
{
	return schedules_;
}

std::string TaobaoFilmGetSchedulesResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmGetSchedulesResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmGetSchedulesResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmGetSchedulesResult::getSubCode()const
{
	return subCode_;
}

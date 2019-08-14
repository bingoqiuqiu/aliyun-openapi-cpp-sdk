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

#include <alibabacloud/iot/model/ListProductByTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListProductByTagsResult::ListProductByTagsResult() :
	ServiceResult()
{}

ListProductByTagsResult::ListProductByTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductByTagsResult::~ListProductByTagsResult()
{}

void ListProductByTagsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allProductInfos = value["ProductInfos"]["ProductInfo"];
	for (auto value : allProductInfos)
	{
		ProductInfo productInfosObject;
		if(!value["ProductName"].isNull())
			productInfosObject.productName = value["ProductName"].asString();
		if(!value["ProductKey"].isNull())
			productInfosObject.productKey = value["ProductKey"].asString();
		if(!value["CreateTime"].isNull())
			productInfosObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Description"].isNull())
			productInfosObject.description = value["Description"].asString();
		if(!value["NodeType"].isNull())
			productInfosObject.nodeType = std::stoi(value["NodeType"].asString());
		productInfos_.push_back(productInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListProductByTagsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListProductByTagsResult::ProductInfo> ListProductByTagsResult::getProductInfos()const
{
	return productInfos_;
}

std::string ListProductByTagsResult::getCode()const
{
	return code_;
}

bool ListProductByTagsResult::getSuccess()const
{
	return success_;
}

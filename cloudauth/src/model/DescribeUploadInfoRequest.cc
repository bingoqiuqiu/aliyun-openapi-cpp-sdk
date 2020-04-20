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

#include <alibabacloud/cloudauth/model/DescribeUploadInfoRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeUploadInfoRequest;

DescribeUploadInfoRequest::DescribeUploadInfoRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "DescribeUploadInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUploadInfoRequest::~DescribeUploadInfoRequest()
{}

std::string DescribeUploadInfoRequest::getBiz()const
{
	return biz_;
}

void DescribeUploadInfoRequest::setBiz(const std::string& biz)
{
	biz_ = biz;
	setParameter("Biz", biz);
}

std::string DescribeUploadInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUploadInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}


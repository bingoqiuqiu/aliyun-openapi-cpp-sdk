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

#include <alibabacloud/foas/model/GetClusterMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetClusterMetricsResult::GetClusterMetricsResult() :
	ServiceResult()
{}

GetClusterMetricsResult::GetClusterMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterMetricsResult::~GetClusterMetricsResult()
{}

void GetClusterMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetrics = value["Metrics"]["Metric"];
	for (auto value : allMetrics)
	{
		Metric metricsObject;
		if(!value["MetricName"].isNull())
			metricsObject.metricName = value["MetricName"].asString();
		if(!value["Dps"].isNull())
			metricsObject.dps = value["Dps"].asString();
		if(!value["Summary"].isNull())
			metricsObject.summary = std::stof(value["Summary"].asString());
		if(!value["Tags"].isNull())
			metricsObject.tags = value["Tags"].asString();
		metrics_.push_back(metricsObject);
	}

}

std::vector<GetClusterMetricsResult::Metric> GetClusterMetricsResult::getMetrics()const
{
	return metrics_;
}


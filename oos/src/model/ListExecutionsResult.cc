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

#include <alibabacloud/oos/model/ListExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListExecutionsResult::ListExecutionsResult() :
	ServiceResult()
{}

ListExecutionsResult::ListExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionsResult::~ListExecutionsResult()
{}

void ListExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionsNode = value["Executions"]["Execution"];
	for (auto valueExecutionsExecution : allExecutionsNode)
	{
		Execution executionsObject;
		if(!valueExecutionsExecution["ExecutionId"].isNull())
			executionsObject.executionId = valueExecutionsExecution["ExecutionId"].asString();
		if(!valueExecutionsExecution["TemplateName"].isNull())
			executionsObject.templateName = valueExecutionsExecution["TemplateName"].asString();
		if(!valueExecutionsExecution["TemplateId"].isNull())
			executionsObject.templateId = valueExecutionsExecution["TemplateId"].asString();
		if(!valueExecutionsExecution["TemplateVersion"].isNull())
			executionsObject.templateVersion = valueExecutionsExecution["TemplateVersion"].asString();
		if(!valueExecutionsExecution["Mode"].isNull())
			executionsObject.mode = valueExecutionsExecution["Mode"].asString();
		if(!valueExecutionsExecution["ExecutedBy"].isNull())
			executionsObject.executedBy = valueExecutionsExecution["ExecutedBy"].asString();
		if(!valueExecutionsExecution["StartDate"].isNull())
			executionsObject.startDate = valueExecutionsExecution["StartDate"].asString();
		if(!valueExecutionsExecution["EndDate"].isNull())
			executionsObject.endDate = valueExecutionsExecution["EndDate"].asString();
		if(!valueExecutionsExecution["CreateDate"].isNull())
			executionsObject.createDate = valueExecutionsExecution["CreateDate"].asString();
		if(!valueExecutionsExecution["UpdateDate"].isNull())
			executionsObject.updateDate = valueExecutionsExecution["UpdateDate"].asString();
		if(!valueExecutionsExecution["Status"].isNull())
			executionsObject.status = valueExecutionsExecution["Status"].asString();
		if(!valueExecutionsExecution["StatusMessage"].isNull())
			executionsObject.statusMessage = valueExecutionsExecution["StatusMessage"].asString();
		if(!valueExecutionsExecution["StatusReason"].isNull())
			executionsObject.statusReason = valueExecutionsExecution["StatusReason"].asString();
		if(!valueExecutionsExecution["WaitingStatus"].isNull())
			executionsObject.waitingStatus = valueExecutionsExecution["WaitingStatus"].asString();
		if(!valueExecutionsExecution["ParentExecutionId"].isNull())
			executionsObject.parentExecutionId = valueExecutionsExecution["ParentExecutionId"].asString();
		if(!valueExecutionsExecution["Parameters"].isNull())
			executionsObject.parameters = valueExecutionsExecution["Parameters"].asString();
		if(!valueExecutionsExecution["Outputs"].isNull())
			executionsObject.outputs = valueExecutionsExecution["Outputs"].asString();
		if(!valueExecutionsExecution["SafetyCheck"].isNull())
			executionsObject.safetyCheck = valueExecutionsExecution["SafetyCheck"].asString();
		if(!valueExecutionsExecution["IsParent"].isNull())
			executionsObject.isParent = valueExecutionsExecution["IsParent"].asString() == "true";
		if(!valueExecutionsExecution["RamRole"].isNull())
			executionsObject.ramRole = valueExecutionsExecution["RamRole"].asString();
		if(!valueExecutionsExecution["Counters"].isNull())
			executionsObject.counters = valueExecutionsExecution["Counters"].asString();
		if(!valueExecutionsExecution["Category"].isNull())
			executionsObject.category = valueExecutionsExecution["Category"].asString();
		if(!valueExecutionsExecution["Tags"].isNull())
			executionsObject.tags = valueExecutionsExecution["Tags"].asString();
		if(!valueExecutionsExecution["Description"].isNull())
			executionsObject.description = valueExecutionsExecution["Description"].asString();
		auto allCurrentTasksNode = allExecutionsNode["CurrentTasks"]["CurrentTask"];
		for (auto allExecutionsNodeCurrentTasksCurrentTask : allCurrentTasksNode)
		{
			Execution::CurrentTask currentTasksObject;
			if(!allExecutionsNodeCurrentTasksCurrentTask["TaskExecutionId"].isNull())
				currentTasksObject.taskExecutionId = allExecutionsNodeCurrentTasksCurrentTask["TaskExecutionId"].asString();
			if(!allExecutionsNodeCurrentTasksCurrentTask["TaskName"].isNull())
				currentTasksObject.taskName = allExecutionsNodeCurrentTasksCurrentTask["TaskName"].asString();
			if(!allExecutionsNodeCurrentTasksCurrentTask["TaskAction"].isNull())
				currentTasksObject.taskAction = allExecutionsNodeCurrentTasksCurrentTask["TaskAction"].asString();
			executionsObject.currentTasks.push_back(currentTasksObject);
		}
		executions_.push_back(executionsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListExecutionsResult::Execution> ListExecutionsResult::getExecutions()const
{
	return executions_;
}

std::string ListExecutionsResult::getNextToken()const
{
	return nextToken_;
}

int ListExecutionsResult::getMaxResults()const
{
	return maxResults_;
}


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

#ifndef ALIBABACLOUD_FOAS_MODEL_BATCHGETINSTANCERUNSUMMARYRESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_BATCHGETINSTANCERUNSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT BatchGetInstanceRunSummaryResult : public ServiceResult
			{
			public:
				struct RunSummary
				{
					std::string actualState;
					long lastErrorTime;
					std::string engineJobHandler;
					std::string lastErrorMessage;
					std::string expectState;
					std::string jobName;
					long id;
					long inputDelay;
				};


				BatchGetInstanceRunSummaryResult();
				explicit BatchGetInstanceRunSummaryResult(const std::string &payload);
				~BatchGetInstanceRunSummaryResult();
				std::vector<RunSummary> getRunSummarys()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RunSummary> runSummarys_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_BATCHGETINSTANCERUNSUMMARYRESULT_H_
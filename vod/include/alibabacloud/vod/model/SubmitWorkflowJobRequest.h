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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITWORKFLOWJOBREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITWORKFLOWJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT SubmitWorkflowJobRequest : public RpcServiceRequest
			{

			public:
				SubmitWorkflowJobRequest();
				~SubmitWorkflowJobRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getWorkflowId()const;
				void setWorkflowId(const std::string& workflowId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMediaId()const;
				void setMediaId(const std::string& mediaId);
				std::string getFileUrl()const;
				void setFileUrl(const std::string& fileUrl);

            private:
				long resourceOwnerId_;
				std::string workflowId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string mediaId_;
				std::string fileUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITWORKFLOWJOBREQUEST_H_
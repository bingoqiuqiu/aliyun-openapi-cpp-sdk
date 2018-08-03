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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeImageRequest : public RpcServiceRequest
			{

			public:
				DescribeImageRequest();
				~DescribeImageRequest();

				std::string getContainerType()const;
				void setContainerType(const std::string& containerType);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getRepository()const;
				void setRepository(const std::string& repository);
				std::string getImageTag()const;
				void setImageTag(const std::string& imageTag);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string containerType_;
				std::string clusterId_;
				std::string repository_;
				std::string imageTag_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEREQUEST_H_
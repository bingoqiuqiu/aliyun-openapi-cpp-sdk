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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_SINGLECALLBYVOICEREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_SINGLECALLBYVOICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT SingleCallByVoiceRequest : public RpcServiceRequest
			{

			public:
				SingleCallByVoiceRequest();
				~SingleCallByVoiceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getSpeed()const;
				void setSpeed(int speed);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				std::string getVoiceCode()const;
				void setVoiceCode(const std::string& voiceCode);
				std::string getCalledShowNumber()const;
				void setCalledShowNumber(const std::string& calledShowNumber);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getPlayTimes()const;
				void setPlayTimes(int playTimes);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getVolume()const;
				void setVolume(int volume);
				std::string getOutId()const;
				void setOutId(const std::string& outId);

            private:
				long resourceOwnerId_;
				int speed_;
				std::string accessKeyId_;
				std::string calledNumber_;
				std::string voiceCode_;
				std::string calledShowNumber_;
				std::string resourceOwnerAccount_;
				int playTimes_;
				long ownerId_;
				int volume_;
				std::string outId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_SINGLECALLBYVOICEREQUEST_H_
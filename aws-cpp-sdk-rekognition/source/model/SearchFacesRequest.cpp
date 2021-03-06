﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/rekognition/model/SearchFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchFacesRequest::SearchFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_maxFaces(0),
    m_maxFacesHasBeenSet(false),
    m_faceMatchThreshold(0.0),
    m_faceMatchThresholdHasBeenSet(false)
{
}

Aws::String SearchFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_faceIdHasBeenSet)
  {
   payload.WithString("FaceId", m_faceId);

  }

  if(m_maxFacesHasBeenSet)
  {
   payload.WithInteger("MaxFaces", m_maxFaces);

  }

  if(m_faceMatchThresholdHasBeenSet)
  {
   payload.WithDouble("FaceMatchThreshold", m_faceMatchThreshold);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SearchFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.SearchFaces"));
  return headers;

}





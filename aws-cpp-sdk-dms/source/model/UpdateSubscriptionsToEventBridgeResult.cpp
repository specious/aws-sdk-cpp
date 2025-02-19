﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/UpdateSubscriptionsToEventBridgeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSubscriptionsToEventBridgeResult::UpdateSubscriptionsToEventBridgeResult()
{
}

UpdateSubscriptionsToEventBridgeResult::UpdateSubscriptionsToEventBridgeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSubscriptionsToEventBridgeResult& UpdateSubscriptionsToEventBridgeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetString("Result");

  }



  return *this;
}

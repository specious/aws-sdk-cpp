﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class AWS_PRIVATENETWORKS_API GetOrderRequest : public PrivateNetworksRequest
  {
  public:
    GetOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrder"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline const Aws::String& GetOrderArn() const{ return m_orderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline void SetOrderArn(const Aws::String& value) { m_orderArnHasBeenSet = true; m_orderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline void SetOrderArn(Aws::String&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline void SetOrderArn(const char* value) { m_orderArnHasBeenSet = true; m_orderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline GetOrderRequest& WithOrderArn(const Aws::String& value) { SetOrderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline GetOrderRequest& WithOrderArn(Aws::String&& value) { SetOrderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline GetOrderRequest& WithOrderArn(const char* value) { SetOrderArn(value); return *this;}

  private:

    Aws::String m_orderArn;
    bool m_orderArnHasBeenSet;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

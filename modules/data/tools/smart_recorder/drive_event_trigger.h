/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include "modules/data/tools/smart_recorder/proto/smart_recorder_triggers.pb.h"
#include "modules/data/tools/smart_recorder/trigger_base.h"

namespace apollo {
namespace data {

/**
 * @class DriveEventTrigger
 * @brief DriveEvent trigger that records drive events
 */
class DriveEventTrigger : public TriggerBase {
 public:
  DriveEventTrigger();

  void Pull(const cyber::record::RecordMessage& msg) override;
  bool ShouldRestore(const cyber::record::RecordMessage& msg) const override {
    return false;
  };

  virtual ~DriveEventTrigger() = default;
};

}  // namespace data
}  // namespace apollo

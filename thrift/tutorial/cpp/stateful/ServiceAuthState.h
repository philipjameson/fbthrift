/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#pragma once

#include <mutex>

#include <thrift/tutorial/cpp/stateful/gen-cpp2/AuthenticatedService.h>

namespace apache { namespace thrift { namespace tutorial { namespace stateful {

class AuthHandler;

class ServiceAuthState {
 public:
  ServiceAuthState();

  ServiceAuthState(const ServiceAuthState&) = delete;
  const ServiceAuthState& operator=(const ServiceAuthState&) = delete;

  /**
   * Called when a new session is opened.
   *
   * Returns a new session ID.
   */
  int64_t sessionOpened(AuthHandler* handler);

  /**
   * Called when a session is closed.
   */
  void sessionClosed(AuthHandler* handler);

  /**
   * Call a function for each registered AuthHandler.
   */
  void forEachSession(std::function<void(AuthHandler*)> fn);

 protected:
  std::mutex mutex_;
  int64_t nextId_;
  std::set<AuthHandler*> sessions_;
};

}}}}

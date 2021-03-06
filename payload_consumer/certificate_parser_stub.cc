//
// Copyright (C) 2019 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "update_engine/payload_consumer/certificate_parser_stub.h"

namespace chromeos_update_engine {
bool CertificateParserStub::ReadPublicKeysFromCertificates(
    const std::string& path,
    std::vector<std::unique_ptr<EVP_PKEY, decltype(&EVP_PKEY_free)>>*
        out_public_keys) {
  return true;
}

std::unique_ptr<CertificateParserInterface> CreateCertificateParser() {
  return std::make_unique<CertificateParserStub>();
}

}  // namespace chromeos_update_engine

/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 - 2021 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>

#ifndef SRC_VARIABLES_MULTIPART_FILE_LIMIT_EXCEEDED_H_
#define SRC_VARIABLES_MULTIPART_FILE_LIMIT_EXCEEDED_H_

#include "src/variables/variable.h"

namespace modsecurity {

class Transaction;
namespace variables {


DEFINE_VARIABLE(MultipartFileLimitExceeded, MULTIPART_FILE_LIMIT_EXCEEDED,
    m_variableMultipartFileLimitExceeded)


}  // namespace variables
}  // namespace modsecurity

#endif  // SRC_VARIABLES_MULTIPART_FILE_LIMIT_EXCEEDED_H_

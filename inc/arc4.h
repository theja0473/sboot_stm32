/* This file is the part of the STM32 secure bootloader
 *
 * Copyright ©2016 Dmitry Filimonchuk <dmitrystu[at]gmail[dot]com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *   http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ARC4_H_
#define _ARC4_H_
#if defined(__cplusplus)
    extern "C" {
#endif

#define CRYPTO_BLKSIZE 1
#define CRYPTO_NAME    "ARCFOUR"

void arc4_init(const uint8_t *key);
void arc4_crypt(uint32_t *out, const uint32_t *in, int32_t bytes);

#if defined(__cplusplus)
    }
#endif
#endif //_ARC4_H_

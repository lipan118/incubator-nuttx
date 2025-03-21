/****************************************************************************
 * arch/risc-v/src/esp32c3-legacy/esp32c3_resetcause.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Public Types
 ****************************************************************************/

enum esp32c3_resetcause_e
{
  ESP32C3_RESETCAUSE_SYS_CHIPPOR    = 0x01,
  ESP32C3_RESETCAUSE_SYS_BOR        = 0x0f,
  ESP32C3_RESETCAUSE_SYS_RWDTSR     = 0x10,
  ESP32C3_RESETCAUSE_SYS_SWD        = 0x12,
  ESP32C3_RESETCAUSE_SYS_CLKGLITCH  = 0x13,
  ESP32C3_RESETCAUSE_CORE_SOFT      = 0x03,
  ESP32C3_RESETCAUSE_CORE_DPSP      = 0x05,
  ESP32C3_RESETCAUSE_CORE_MWDT0     = 0x07,
  ESP32C3_RESETCAUSE_CORE_MWDT1     = 0x08,
  ESP32C3_RESETCAUSE_CORE_RWDT      = 0x09,
  ESP32C3_RESETCAUSE_CORE_EFUSE     = 0x14,
  ESP32C3_RESETCAUSE_CORE_USBUART   = 0x15,
  ESP32C3_RESETCAUSE_CORE_USBJTAG   = 0x16,
  ESP32C3_RESETCAUSE_CORE_PWRGLITCH = 0x17,
  ESP32C3_RESETCAUSE_CPU_MWDT0      = 0x0b,
  ESP32C3_RESETCAUSE_CPU_SOFT       = 0x0c,
  ESP32C3_RESETCAUSE_CPU_RWDT       = 0x0d,
  ESP32C3_RESETCAUSE_CPU_MWDT1      = 0x11
};

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name: esp32c3_resetcause
 *
 * Description:
 *   Get the cause of the last reset.
 *
 ****************************************************************************/

enum esp32c3_resetcause_e esp32c3_resetcause(void);


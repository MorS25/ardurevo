/* -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * Storage.h --- AP_HAL_VRBRAIN storage driver.
 *
 * Copyright (C) 2012, Galois, Inc.
 * All Rights Reserved.
 *
 * This software is released under the "BSD3" license.  Read the file
 * "LICENSE" for more information.
 *
 * Written by James Bielman <jamesjb@galois.com>, 20 December 2012
 */

#ifndef __AP_HAL_VRBRAIN_STORAGE_H__
#define __AP_HAL_VRBRAIN_STORAGE_H__

#include <AP_HAL_VRBRAIN.h>

class VRBRAIN::VRBRAINStorage : public AP_HAL::Storage
{
public:
  VRBRAINStorage();
  void init(void *);
  uint8_t  read_byte(uint16_t loc);
  uint16_t read_word(uint16_t loc);
  uint32_t read_dword(uint16_t loc);
  void     read_block(void *dst, uint16_t src, size_t n);

  void write_byte(uint16_t loc, uint8_t value);
  void write_word(uint16_t loc, uint16_t value);
  void write_dword(uint16_t loc, uint32_t value);
  void write_block(uint16_t dst, void* src, size_t n);
};

#endif // __AP_HAL_VRBRAIN_STORAGE_H__

/*
  Rugged Audio Shield Firmware for ATxmega

  Copyright (c) 2012 Rugged Circuits LLC.  All rights reserved.
  http://ruggedcircuits.com

  This file is part of the Rugged Circuits Rugged Audio Shield firmware distribution.

  This is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation; either version 3 of the License, or (at your option) any later
  version.

  This software is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  A copy of the GNU General Public License can be viewed at
  <http://www.gnu.org/licenses>
*/
#ifndef _I2C_H_
#define _I2C_H_

extern void I2C_init(void);
extern void I2C_maxgain_enable(uint8_t enable);
extern void I2C_bassmax_enable(uint8_t enable);
extern void I2C_shutdown_enable(uint8_t enable);
extern void I2C_set_direct(uint8_t val);
extern void I2C_set_volume(uint8_t gain);

#endif // _I2C_H_
// vim: expandtab ts=2 sw=2 ai cindent

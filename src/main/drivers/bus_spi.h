/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif 

#define SPI_0_5625MHZ_CLOCK_DIVIDER 128
#define SPI_18MHZ_CLOCK_DIVIDER     2
#define SPI_9MHZ_CLOCK_DIVIDER      4

bool spiInit(SPI_TypeDef *instance);
void spiSetDivisor(SPI_TypeDef *instance, uint16_t divisor);
uint8_t spiTransferByte(SPI_TypeDef *instance, uint8_t in);

bool spiTransfer(SPI_TypeDef *instance, uint8_t *out, const uint8_t *in, int len);

uint16_t spiGetErrorCounter(SPI_TypeDef *instance);
void spiResetErrorCounter(SPI_TypeDef *instance);

#ifdef __cplusplus
}
#endif 

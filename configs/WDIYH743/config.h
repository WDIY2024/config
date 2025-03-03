/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743
 
#define BOARD_NAME        WDIYH743
#define MANUFACTURER_ID   WDIY
 
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G
#define USE_BARO
#define USE_BARO_BMP280
#define USE_MAX7456
  
#define BEEPER_PIN           PA10
#define MOTOR1_PIN           PA0
#define MOTOR2_PIN           PA1
#define MOTOR3_PIN           PA2
#define MOTOR4_PIN           PA3
#define MOTOR5_PIN           PB4
#define MOTOR6_PIN           PB5
#define MOTOR7_PIN           PB0
#define MOTOR8_PIN           PB1
#define SERVO1_PIN           PE11
#define SERVO2_PIN           PE14
 
#define RX_PPM_PIN           PC6
#define LED_STRIP_PIN        PB8
 
#define UART1_TX_PIN         PA9
#define UART2_TX_PIN         PD5
#define UART3_TX_PIN         PD8
#define UART4_TX_PIN         PD1
#define UART6_TX_PIN         PC6
#define UART7_TX_PIN         PE8
#define UART8_TX_PIN         PE1
#define UART1_RX_PIN         PB15
#define UART2_RX_PIN         PD6
#define UART3_RX_PIN         PD9
#define UART4_RX_PIN         PD0
#define UART6_RX_PIN         PC7
#define UART7_RX_PIN         PE7
#define UART8_RX_PIN         PE0
 
#define I2C1_SCL_PIN         PB6
#define I2C2_SCL_PIN         PB10
#define I2C3_SCL_PIN         PA8
#define I2C4_SCL_PIN         PD12
#define I2C1_SDA_PIN         PB7
#define I2C2_SDA_PIN         PB11
#define I2C3_SDA_PIN         PC9
#define I2C4_SDA_PIN         PD13
 
#define LED0_PIN             PE12
#define LED1_PIN             PE13
  
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
 
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PC2
#define SPI2_SDO_PIN         PC3
 
#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PC11
#define SPI3_SDO_PIN         PB2
 
#define SPI4_SCK_PIN         PE2
#define SPI4_SDI_PIN         PE5
#define SPI4_SDO_PIN         PE6
 
#define ADC_VBAT_PIN         PC0
#define ADC_RSSI_PIN         PC4
#define ADC_CURR_PIN         PC1
 
#define FLASH_CS_PIN         PA15
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PE9
#define GYRO_2_EXTI_PIN      PE3
#define GYRO_1_CS_PIN        PA4
#define GYRO_2_CS_PIN        PE4
  
#define TIMER_PIN_MAPPING \
   TIMER_PIN_MAP( 1, PA1,  2,  0) \
   TIMER_PIN_MAP( 2, PA2,  2,  1) \
   TIMER_PIN_MAP( 3, PA3,  2,  2) \
   TIMER_PIN_MAP( 4, PB4,  1,  3) \
   TIMER_PIN_MAP( 5, PB5 , 1,  4) \
   TIMER_PIN_MAP( 6, PB0,  2,  5) \
   TIMER_PIN_MAP( 7, PB1,  2,  6) \
   TIMER_PIN_MAP( 8, PB8,  2,  7) \
   TIMER_PIN_MAP( 9, PC6,  3,  8) \
   TIMER_PIN_MAP(10, PE11, 1, -1) \
   TIMER_PIN_MAP(11, PE14, 1, -1)
   
#define ADC1_DMA_OPT        9
#define ADC2_DMA_OPT        10
#define ADC3_DMA_OPT        11
  
#define BARO_I2C_INSTANCE I2CDEV_2
  
#define DEFAULT_DSHOT_BITBANG DSHOT_BITBANG_ON
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE_DEFAULT 110
#define DEFAULT_CURRENT_METER_SCALE 350
#define BEEPER_INVERTED
#define MAX7456_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI3
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG
#define GYRO_2_SPI_INSTANCE SPI4
#define GYRO_2_ALIGN CW90_DEG
 
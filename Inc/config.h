/*
 * config.h
 *
 * Tuned for:
 * - Lishui LSW-1728-1F
 * - Q100 250-350W geared rear hub
 * - 48V 13s3p 9Ah battery
 * - S866 UART No.2 display
 * - 700c wheel
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "stdint.h"

//----------------------------------------------------------------------
// Display type definitions
#define DISPLAY_TYPE_DEBUG (1<<0)
#define DISPLAY_TYPE_KUNTENG (1<<1)
#define DISPLAY_TYPE_BAFANG_LCD (1<<2)
#define DISPLAY_TYPE_BAFANG_850_860 (1<<3)
#define DISPLAY_TYPE_KINGMETER_618U (1<<4)
#define DISPLAY_TYPE_KINGMETER_901U (1<<5)
#define DISPLAY_TYPE_EBiCS (1<<6)
#define DISPLAY_TYPE_NO2 (1<<7)

#define DISPLAY_TYPE_BAFANG \
    (DISPLAY_TYPE_BAFANG_LCD | DISPLAY_TYPE_BAFANG_850_860)
#define DISPLAY_TYPE_KINGMETER \
    (DISPLAY_TYPE_KINGMETER_618U | DISPLAY_TYPE_KINGMETER_901U)

#define EXTERNAL 1
#define INTERNAL 0

//----------------------------------------------------------------------
// Advanced settings
#define TRIGGER_OFFSET_ADC 50
#define TRIGGER_DEFAULT 2020
#define _T 2028
#define CAL_BAT_V 256
#define CAL_V 25
#define CAL_I 38LL<<8
#define INDUCTANCE 6LL
#define RESISTANCE 40LL
#define FLUX_LINKAGE 1200LL
#define GAMMA 9LL

#define SIXSTEPTHRESHOLD 20000
#define SPEED_PLL 0
#define P_FACTOR_PLL 10
#define I_FACTOR_PLL 10

//----------------------------------------------------------------------
// Battery bar settings
#define BATTERY_LEVEL_1 410000
#define BATTERY_LEVEL_2 440000
#define BATTERY_LEVEL_3 470000
#define BATTERY_LEVEL_4 500000
#define BATTERY_LEVEL_5 546000

//----------------------------------------------------------------------
// PI-control settings
#define P_FACTOR_I_Q 50
#define I_FACTOR_I_Q 2
#define P_FACTOR_I_D 50
#define I_FACTOR_I_D 2
#define P_FACTOR_SPEED 1
#define I_FACTOR_SPEED 10

//----------------------------------------------------------------------
// PAS settings
#define FRAC_HIGH 25
#define FRAC_LOW 10
#define PAS_TIMEOUT 3000
#define RAMP_END 800
#define PAS_IMP_PER_TURN 32

//----------------------------------------------------------------------
// Throttle settings
#define THROTTLE_OFFSET 1250
#define THROTTLE_MAX 2850
#define THROTTLE_OVERRIDE

//----------------------------------------------------------------------
// Speed settings
#define WHEEL_CIRCUMFERENCE 2200
#define GEAR_RATIO 4
#define SPEEDLIMIT 35
#define PULSES_PER_REVOLUTION 1
#define SPEEDSOURCE INTERNAL
#define SPEEDFILTER 1
#define SPDSHFT 0

//----------------------------------------------------------------------
// Power settings
#define PH_CURRENT_MAX 4000
#define BATTERYCURRENT_MAX 1800
#define REVERSE 1
#define PUSHASSIST_CURRENT 300
#define VOLTAGE_MIN 1600

//----------------------------------------------------------------------
// Torque sensor settings
#define TS_COEF 2000

//----------------------------------------------------------------------
// Display settings
#define DISPLAY_TYPE DISPLAY_TYPE_NO2

//----------------------------------------------------------------------
// Regen settings
#define REGEN_CURRENT 0
#define REGEN_CURRENT_MAX 0

//----------------------------------------------------------------------
// Final
#define AUTODETECT 0

#endif /* CONFIG_H_ */

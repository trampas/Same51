/*
 * board.h
 *
 *  Created on: Jun 2, 2019
 *      Author: Trampas
 *
 *

 */

#ifndef SOURCE_BOARD_H_
#define SOURCE_BOARD_H_


#include "sam.h"
#include "stdint.h"

#define TO_MHZ(x)  ((x) * 1000000L) // use uppercase L to avoid confusion
#define TO_KHZ(x)  ((x) * 1000L) // use uppercase L to avoid confusion
#define TO_MSEC(x) ((x) / 1000L )   // with the digit 1

/** Frequency of the board main oscillator */
#define VARIANT_MAINOSC		(32768ul)
#define VARIANT_MCK			 (120000000ul)


//this is the frequency of the GCLKs, they are set in the startup before main is called.
static const uint32_t GCLK_freq[]= {TO_MHZ(120), TO_MHZ(12), TO_MHZ(100), 32768, TO_MHZ(48), TO_MHZ(9),0,TO_MHZ(1)};

// Constants for Clock generators
#define GENERIC_CLOCK_GENERATOR_MAIN      (0u)
#define GENERIC_CLOCK_GENERATOR_12M       (1u)
#define GENERIC_CLOCK_GENERATOR_12M_SYNC   GCLK_SYNCBUSY_GENCTRL1

#define GENERIC_CLOCK_GENERATOR_OSCULP32K (2u) /* Initialized at reset for WDT */

#define GENERIC_CLOCK_GENERATOR_1M		  (8u)
#define GENERIC_CLOCK_GENERATOR_1M_SYNC	  GCLK_SYNCBUSY_GENCTRL8

#define GENERIC_CLOCK_GENERATOR_48M		  (4u)
#define GENERIC_CLOCK_GENERATOR_48M_SYNC	GCLK_SYNCBUSY_GENCTRL4

#define GENERIC_CLOCK_GENERATOR_100M	  (5u)
#define GENERIC_CLOCK_GENERATOR_100M_SYNC	GCLK_SYNCBUSY_GENCTRL5
#define GENERIC_CLOCK_GENERATOR_XOSC32K   (6u)
#define GENERIC_CLOCK_GENERATOR_XOSC32K_SYNC   GCLK_SYNCBUSY_GENCTRL6

#define GENERIC_CLOCK_GENERATOR_9M       (7u)
#define GENERIC_CLOCK_GENERATOR_9M_SYNC   GCLK_SYNCBUSY_GENCTRL7


//USE DPLL0 for 120MHZ
#define MAIN_CLOCK_SOURCE				  GCLK_GENCTRL_SRC_DPLL0




#endif /* SOURCE_BOARD_H_ */

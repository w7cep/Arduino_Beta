/*  Pokemon Sword & Shield: Soft-Reset for Swords of Justice
 * 
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 * 
 *      Please refer to the user manual for instructions and documentation.
 * 
 */

#include "Common/NintendoSwitch/NintendoSwitch_ControllerDefs.h"
#include "Programs/ShinyHuntUnattended-SwordsOfJustice.h"


//  This needs to be carefully calibrated.
//    - If it's too short, it may stop on a non-shiny.
//    - If it's too long, it may run from a shiny.
//
//  There is less than a 0.5 second window which this must land in.
//
//  The default value here is calibrated for the "average system". If it doesn't
//  work, then you must calibrate it yourself.
//
const uint16_t EXIT_CAMP_TO_RUN_DELAY   =   1890;

//  Set this to true if you are running in airplane mode.
const bool AIRPLANE_MODE                =   false;


//  Time Rollback
//
//  Periodically roll back the time to keep the weather the same.
//
//  If set to zero, this feature is disabled.
//  Otherwise, it roll the hour back by this amount every this many hours.
//  This feature requres time-sync be disabled.
const uint8_t TIME_ROLLBACK_HOURS   =   1;


//  These timings are less important.
const uint16_t ENTER_CAMP_DELAY         =   8 * TICKS_PER_SECOND;


/*  Pokemon Sword & Shield: Soft-Reset for Regigigas
 * 
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 * 
 *      Please refer to the user manual for instructions and documentation.
 * 
 */

#include "Common/NintendoSwitch/NintendoSwitch_ControllerDefs.h"
#include "Programs/ShinyHuntUnattended-Regigigas.h"


//  This needs to be carefully calibrated.
//    - If it's too short, it may stop on a non-shiny.
//    - If it's too long, it may run from a shiny.
//
//  There is less than a 0.5 second window which this must land in.
//
//  The default value here is calibrated for the "average system". If it doesn't
//  work, then you must calibrate it yourself.
//
const uint16_t START_TO_ATTACK_DELAY    =   3720;


//  Rollover Prevention
//
//  Prevent a den from rolling over by periodically touching the date.
//
//  If set to zero, this feature is disabled.
//  Otherwise, the program will touch the date at roughly this interval to
//  prevent a den from rolling over. This feature requres time-sync be disabled.
const uint32_t TOUCH_DATE_INTERVAL  =   (uint32_t)4 * 3600 * TICKS_PER_SECOND;  //  4 hours



//  Time to return to the overworld after selecting a move.
const uint16_t END_BATTLE_DELAY         =   22 * TICKS_PER_SECOND;

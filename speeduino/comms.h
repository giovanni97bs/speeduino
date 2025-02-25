/** \file comms.h
 * @brief File for handling all serial requests 
 * @author Josh Stewart
 * 
 * This file contains all the functions associated with serial comms.
 * This includes sending of live data, sending/receiving current page data, sending CRC values of pages, receiving sensor calibration data etc
 * 
 */

#ifndef NEW_COMMS_H
#define NEW_COMMS_H

/**
 * @brief The serial receive pump. Should be called whenever the serial port
 * has data available to read.
 */
void serialReceive(void);

/** @brief The serial transmit pump. Should be called when ::serialStatusFlag indicates a transmit
 * operation is in progress */
void serialTransmit(void);

#endif // COMMS_H

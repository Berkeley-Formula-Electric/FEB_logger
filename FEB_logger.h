/*
 * FEB_logger.h
 *
 *  Created on: Jul 5, 2022
 *      Author: TK
 */

#ifndef FEB_CAN_FEB_LOGGER_H_
#define FEB_CAN_FEB_LOGGER_H_

#include <string.h>
#include <stdio.h>

#include "stm32f4xx_hal.h"


/**
 * @brief Initialize the logger unit.
 * 
 * @param huart the serial handler provided by ST HAL, normally this is "&huart2"
 */
void FEB_log_init(UART_HandleTypeDef *huart);

/**
 * @brief Log a message to debug serial output. This function will append a CRLF newline at the end of the message.
 * 
 * @param module the name of the module that is generating the log
 * @param level level of the log message, can be DEBUG, INFO, WARNING, ERROR, or CRITICAL
 * @param msg the text of the message
 */
void FEB_log(char *module, char *level, char *msg);

#endif /* FEB_CAN_FEB_LOGGER_H_ */

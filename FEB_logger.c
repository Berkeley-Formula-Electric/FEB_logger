/*
 * FEB_logger.c
 *
 *  Created on: Jul 5, 2022
 *      Author: TK
 */
#include "FEB_logger.h"

UART_HandleTypeDef *_huart;

void FEB_log_init(UART_HandleTypeDef *huart) {
  _huart = huart;
}

void FEB_log(char *module, char *level, char *msg) {
  char str[256];
  sprintf(str, "<%s> [%s] %s\r\n", module, level, msg);
  HAL_UART_Transmit(huart, (uint8_t *)str, strlen(str), 100);
}

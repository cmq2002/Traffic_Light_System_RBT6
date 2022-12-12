/*
 * uart_reading.h
 *
 *  Created on: Dec 11, 2022
 *      Author: acer
 */

#ifndef INC_UART_READING_H_
#define INC_UART_READING_H_

#include "main.h"
#include "global.h"
#include <stdio.h>
#include <stdlib.h>

#define INIT 0

#define READING 1

#define STOP 2

//#define RECEIVE_R 3
//
//#define RECEIVE_S 4
//
//#define RECEIVE_T 5
//
//#define RECEIVE_O 6
//
//#define RECEIVE_K 7

#define RST 8

#define OK 9

#define MAX_CMD_SIZE 3

#define MAX_BUFFER_SIZE 30

extern uint8_t buffer_byte;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

void cmd_parser_fsm();

void uart_comms_fsm();

#endif /* INC_UART_READING_H_ */

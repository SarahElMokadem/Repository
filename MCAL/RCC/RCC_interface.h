/*
 * RCC_interface.h
 *
 *  Created on: Feb 2, 2021
 *      Author: Sarah
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_


void RCC_voidInit(void);
void RCC_voidEnablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID);
void RCC_voidDisablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID);

#define      RCC_AHB           0
#define      RCC_APB1          1
#define      RCC_APB2          2

#endif /* RCC_INTERFACE_H_ */

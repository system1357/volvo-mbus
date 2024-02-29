#ifndef __CONFIG_H
#define __CONFIG_H

// pin config
#define CONFIG_PIN_MBUS_RADIO_IN GPIO_NUM_18
#define CONFIG_PIN_MBUS_RADIO_OUT GPIO_NUM_19
#define CONFIG_PIN_MBUS_CHANGER_IN GPIO_NUM_14
#define CONFIG_PIN_MBUS_CHANGER_OUT GPIO_NUM_15 //replace with other, PWM on boot which resets the CDC during boot.
//#define CONFIG_PIN_MBUS_CHANGER_OUT GPIO_NUM_19

#define CONFIG_GPIO_INPUT_CDC_OUT GPIO_NUM_13
#define CONFIG_GPIO_INPUT_BT_OUT GPIO_NUM_16
#define CONFIG_GPIO_INPUT_INTCD_OUT GPIO_NUM_17
#define CONFIG_GPIO_INPUT_AUX_OUT GPIO_NUM_5

#define CONFIG_GPIO_INTCD_STATUS_IN GPIO_NUM_34
#define CONFIG_GPIO_INTCD_STATUS_OUT GPIO_NUM_4

#define CONFIG_GPIO_BT_INPUT_AUDIO GPIO_NUM_35
#define CONFIG_GPIO_BT_INPUT_CALL GPIO_NUM_36


// OUTPUTS
// 13 AUDIO RELAY CDC
// 16 AUDIO RELAY BT
// 17 AUDIO RELAY INTCD
// 21 AUDIO RELAY AUX
// 19 MBUS CHANGER OUT
// 5  
// 22 MBUS RADIO OUT
// 4  INTCD STATUS OUT
// 26  BT NEXT/PICKUP
// 25 BT PREV/HANGUP
// 27 BT PLAY/PAUSE

// INPUTS
// 23 MBUS RADIO IN
// 18 MBUS CHANGER IN
// 34 INTCD
// 35 BTAUDIO
// 36 BTCALL


#endif

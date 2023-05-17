#ifndef _DTS_MI8937_CONFIG_H
#define _DTS_MI8937_CONFIG_H

#define CONFIG_INPUT_QTI_HAPTICS

#define MI8937_V2
#ifdef MI8937_V2
#define CONFIG_MSM_BCL_PERIPHERAL_CTL_LEGACY

#define CONFIG_PARSE_ANDROIDBOOT_MODE

#define CONFIG_SND_SOC_AW87319_MI8937
#define CONFIG_SND_SOC_AW87329_MI8937

#define CONFIG_FINGERPRINT_FPC1020_UGG
#define CONFIG_FINGERPRINT_GF3208_UGG
#define CONFIG_FINGERPRINT_FPC1020_SANTONI
#define CONFIG_FINGERPRINT_GOODIX_GF3208_SANTONI

#define CONFIG_LEDS_GPIO_IR_MI8937
#define CONFIG_IR_PWM_MI8937
#define CONFIG_SPI_SPIDEV_IR_MI8937

#define CONFIG_LEDS_AW2013_MI8937

#define CONFIG_MSM_USB_POWER_SUPPLY_MI8937
#define CONFIG_CHARGER_BQ2560X_MI8937
#define CONFIG_FUEL_GAUGE_BQ27426_MI8937
#define CONFIG_BATTERY_CW2015_ROLEX
#define CONFIG_GAUGE_CW2017_TIARE
#define CONFIG_QPNP_FG_MI8937
#define CONFIG_QPNP_SMBCHARGER_MI8937
#define CONFIG_SMB358_CHARGER_ROLEX

#define CONFIG_REGULATOR_TPS65132_MI8937
#define CONFIG_TOUCHSCREEN_ATMEL308U_MI8937
#define CONFIG_TOUCHSCREEN_FTS_MI8937
#define CONFIG_TOUCHSCREEN_GT9XX_MI8937
#define CONFIG_TOUCHSCREEN_IST30XX_MI8937

#define CONFIG_LEDS_VIBRATOR_GPIO_MI8937
#endif

#endif

#ifndef _DTS_MI8937_INCLUDE_AW2013_H
#define _DTS_MI8937_INCLUDE_AW2013_H

#include <dt-bindings/leds/common.h>

#define AW2013_LED(led_color, led_id, color_id) \
	aw2013@led_id { \
		reg = <led_id>; \
		led-max-microamp = <5000>;  \
		function = LED_FUNCTION_INDICATOR;  \
		color = <color_id>;  \
		label = #led_color;  \
	};

#endif

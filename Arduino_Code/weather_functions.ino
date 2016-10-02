
void overcast(void)
{
  blink_light(1);
  // light LEDs cooler and/or dimmer

  // light water drip?
  
}

void partly_cloudy(void)
{
  blink_light(2);
  // Somewhat bright clouds, some sun animation but cooler color temp
}

void mostly_cloudy(void)
{
  blink_light(3);
  // darker, cool color balance. Slow cool fading
}

void clear_weather(void)
{
  blink_light(4);
  // Warm, sunny color temperature
}

void chance_of_rain(void)
{
  blink_light(5);
}

void thunderstorm(void)
{
  blink_light(6);
  // Rain and flashing bright lights every few seconds
}

void chance_of_a_thunderstorm(void)
{
  blink_light(7);
  
}

void light_rain(void)
{
  blink_light(8);
  // pwm'd rain?
}

void light_drizzle(void)
{
  blink_light(9);
  // pwm'd rain, lower than light rain
}

void unknown_condition(void)
{
  blink_light(20);
  // ??? maybe fade through colors
}

void weather_demo(void)
{
  // cycle lights night-day fairly slowly (rotation of light source)

  // have a rain event for ~15 seconds?

  // lightning during the rainstorm

  // if switch switched back, go back
  if (digitalRead(mode_pin))
    return;
}

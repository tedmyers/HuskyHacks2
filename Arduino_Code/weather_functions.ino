
void overcast(void)
{
  // light LEDs cooler and/or dimmer

  // light water drip?
  
}

void partly_cloudy(void)
{
  blink_light(1);
  // Somewhat bright clouds, some sun animation but cooler color temp
}

void mostly_cloudy(void)
{
  blink_light(2);
  // darker, cool color balance. Slow cool fading
}

void clear_weather(void)
{
  blink_light(3);
  // Warm, sunny color temperature
}

void chance_of_rain(void)
{
  blink_light(4);
}

void thunderstorm(void)
{
  blink_light(5);
  // Rain and flashing bright lights every few seconds
}

void chance_of_a_thunderstorm(void)
{
  blink_light(6);
  
}

void light_rain(void)
{
  blink_light(7);
  // pwm'd rain?
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

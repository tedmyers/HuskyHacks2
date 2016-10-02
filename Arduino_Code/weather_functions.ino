
void overcast(void)
{
  // light LEDs cooler and/or dimmer

  // light water drip?
  
}

void partly_cloudy(void);
{
  // Somewhat bright clouds, some sun animation but cooler color temp
}

void mostly_cloudy(void);
{
  // darker, cool color balance. Slow cool fading
}

void clear_weather(void);
{
  // Warm, sunny color temperature
}

void chance_of_rain(void);
{
  
}

void thunderstorm(void);
{
  // Rain and flashing bright lights every few seconds
}

void chance_of_a_thunderstorm(void);
{
  
}

void unknown_condition(void);
{
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
void unknown_condition(void)
{
  // do something generic, maybe flash an indicator light
}

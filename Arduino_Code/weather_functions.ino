
void overcast(void)
{
  blink_light(1);
  // light LEDs cooler and/or dimmer
strip.setPixelColor(all, [205, 175, 137]);
  // light water drip?
  
}

void partly_cloudy(void)
{
  blink_light(2);
  // Somewhat bright clouds, some sun animation but cooler color temp
  strip.setPixelColor(all, [231, 235, 86]);
  for (x=0; x<=all; x++){
    strip.setPixelColor(x, [0, 255, 239]);
    delay(5000);
    strip.setPixelColor(x, [231, 235, 86]);
  }
}

void mostly_cloudy(void)
{
  blink_light(3);
  // darker, cool color balance. Slow cool fading
  strip.setPixelColor(all, [220, 0, 0]);
  
}

void clear_weather(void)
{
  blink_light(4);
  // Warm, sunny color temperature
  strip.setPixelColor(all, [234, 238, 127]);
    for (x=0; x<=all; x++){
    strip.setPixelColor(x, [0, 255, 239]);
    delay(1000);
    strip.setPixelColor(x, [255, 255, 0]);
  
}

void chance_of_rain(void)
{
  blink_light(5);
  strip.setPixelColor(all, [128, 95, 3]);
}

void thunderstorm(void)
{
  blink_light(6);
  // Rain and flashing bright lights every few seconds
  strip.setPixelColor(all, [255, 0, 0]);
  delay(4000);
  strip.show();
  delay(100);
  strip.setPixelColor([4, 10, 12, 18], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor([4, 10, 12, 18], [255, 255, 255]);
  delay(200);
  strip.setPixelColor(all, [255, 0, 0]);
  delay(7000);
  strip.show();
  delay(100);
  strip.setPixelColor([14, 20, 27, 29], [255, 255, 255]);
  delay (200);
  strip.show();
  delay(100);
  strip.setPixelColor([14, 20, 27, 29], [255, 255, 255]);
  delay (200);
  strip.setPixelColor(all, [255, 0, 0]);
  delay(5000);
  strip.show();
  delay(100);
  strip.setPixelColor([3, 7, 10, 29], [255, 255, 255]);
  delay (200);
  strip.show();
  delay(100);
  strip.setPixelColor([3, 7, 10, 29], [255, 255, 255]);
  delay (200);
  strip.show()
  delay(100);
  strip.setPixelColor([all], [255, 0, 0]);
  delay(8000);
  strip.show();
  delay(100);
  strip.setPixelColor([8, 13, 17, 20], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor([8, 13, 17, 20], [255, 255, 255]);
  delay(200);
  strip.setPixelColor(all, [255, 0, 0]);
}

void chance_of_a_thunderstorm(void)
{
  blink_light(7);
  strip.setPixelColor(all, [255, 0, 0]);
  delay(8000);
  strip.show();
  delay(100);
  strip.setPixelColor([3, 5, 9], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor(all, [255, 0, 0]);
  delay(10000);
  strip.show();
  delay(100);
  strip.setPixelColor([17, 23, 26, 29], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor([17, 23, 26, 29], [255, 255, 255]);
  delay(200);
  strip.show();
  delay(100);
  strip.setPixelColor(all, [255, 0, 0]);
  
}

void light_rain(void)
{
  blink_light(8);
  // pwm'd rain?
  strip.setPixelColor(all, [205, 175, 137]);
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

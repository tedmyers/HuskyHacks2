#include <Adafruit_DotStar.h>
#include <SPI.h>

#define NUM_CONDITIONS 8
#define NUM_CHARACTERS 30

const char *conditions[] = 
{
    "\0",
    "Overcast",
    "Partly Cloudy",
    "Mostly Cloudy",
    "Clear",
    "Chance of Rain",
    "Thunderstorm",
    "Chance of a Thunderstorm"
};

String condition_read_string;
char condition_read[NUM_CHARACTERS];

uint8_t mode_pin = 5; // change this to proper pin

Adafruit_DotStar init_dotstar(void);

void setup() {
  Serial.begin(9600);
  Adafruit_DotStar strip = init_dotstar();
  while (!Serial) {} 

  pinMode(mode_pin, INPUT);
  digitalWrite(mode_pin, HIGH); // enable pullup
}

uint8_t condition_string_to_num(char condition_read[]);
void weather_demo(void);
void overcast(void);
void partly_cloudy(void);
void mostly_cloudy(void);
void clear_weather(void);
void chance_of_rain(void);
void thunderstorm(void);
void chance_of_a_thunderstorm(void);
void unknown_condition(void);

void loop() {

  // check if demo mode enabled (high = on)
  if (digitalRead(mode_pin)) { weather_demo(); }

  // Receive data from weather API if available
  // check for this every once and a while (put in an ISR?)
  condition_read_string = Serial.readString();
  strcpy(condition_read, condition_read_string.c_str());
  
  
  uint8_t condition_num;
  // Determine weather states
  if (condition_read)
  {
    condition_num = condition_string_to_num(condition_read);
  }
  
  switch (condition_num)
  {
    //"Overcast"
    case 1 :
      overcast();
    //"condition_2"
    case 2 :
      partly_cloudy();
    case 4 :
      mostly_cloudy();
    case 5 :
      clear_weather();
    case 6 :
      chance_of_rain();
    case 7 :
      thunderstorm();
    case 8 :
      chance_of_a_thunderstorm();
    // condition unknown
    default :
      unknown_condition();
  }
}

uint8_t condition_string_to_num(char condition_read[])
{
  // compare through conditions[] until there's a match
  uint8_t iii;
  for (iii=0; iii<NUM_CONDITIONS; iii++)
  {
    if (!strcmp(condition_read,conditions[iii])) // strings match
      return iii;
  }
  
  return 0;
}


Adafruit_DotStar init_dotstar(void)
{
  // fill with functions to initialize the dotstar strip
  return Adafruit_DotStar(60, 4, 5, DOTSTAR_BRG); // modify this
}


#define NUM_CONDITIONS 8 // find number of conditions, placeholder value
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

void setup() {
  Serial.begin(9600);
  while (!Serial) {} 
}

uint8_t condition_string_to_num(char condition_read[]);
void weather_demo(void);
void overcast(void);
void unknown_condition(void);
void condition_2(void);
void condition_3(void);

void loop() {

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
      condition_2();
    case 3 :
      condition_3();
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

void overcast(void)
{
  // light LEDs cooler and/or dimmer

  // light water drip?
  
}

void weather_demo(void)
{
  // cycle lights night-day fairly slowly (rotation of light source)

  // have a rain event for ~15 seconds?

  // lightning during the rainstorm
}
void unknown_condition(void)
{
  // do something generic, maybe flash an indicator light
}
void condition_2(void) {}
void condition_3(void) {}


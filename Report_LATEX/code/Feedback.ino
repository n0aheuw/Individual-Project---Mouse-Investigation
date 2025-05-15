volatile byte full_revolutions;
unsigned int feedback_rpm;
unsigned long feedback_timeold;
unsigned long timerev;

void setup() {
  Serial.begin(9600);

  //Use this version when using Hall Effect Sensor	
  attachInterrupt(0, interupt_detect, FALLING);

  //Use this version when using Optical Sensor
  //attachInterrupt(0, interupt_detect, RISING);

  full_revolutions = 0;
  feedback_rpm = 0;
  feedback_timeold = 0;
  timerev = 0;
}

void loop() {
  if (full_revolutions >= 4) { 
    timerev = (millis() - feedback_timeold)/4;
    feedback_rpm = 60000/timerev;
    feedback_timeold = millis();
    full_revolutions = 0;
    Serial.print("RPM :");
    Serial.println(feedback_rpm, DEC);
  }
}

//This function is called whenever a interrupt is detected by the Arduino
//the interupt in this case is the optical or HES sensor
void interupt_detect()
{
  full_revolutions++;
}


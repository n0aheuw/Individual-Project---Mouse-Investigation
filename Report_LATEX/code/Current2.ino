//Volatge Reference
const int VoltREF = 3.3;

//Pin Assignment
const int MTR = 3;


//Index value and Number of Readings for current calculate arrays
int index = 0; 
const int numReadings = 100;

//Current Variables
int readings[numReadings]; 
int total = 0;
int average = 0;


void setup() {
  Serial.begin(9600);
  pinMode(MTR, OUTPUT);
  analogReference(EXTERNAL);

  for (int thisReading = 0; thisReading < numReadings; thisReading++)
    readings[thisReading]= 0;
}

void loop() {
  //Motor Speed Setup value between 0-255 representing a PWM duty cycle:
  analogWrite(MTR, 51);

  //Seial Setup
  Serial.print("0, "); Serial.print("1, "); 
  
  // subtract the last reading:
  total = total - readings[index];
  
  // reads the voltage level over Shunt_Output
  // and stores as a value 0->1023 representing 0->3.3V.
  readings[index] = int(analogRead(A0)); 

  // add the reading to the total:
  total = total + readings[index];

  // advance to the next position in the array:  
  index = index + 1;                    

  // if at the end of the array...
  if (index >= numReadings){              
    // ...wrap around to the beginning: 
    index = 0;                           
  }
  // calculate the average voltage diff seen 
  average = total / numReadings;

  // V = IR using 1 Ohm => I = V 
  // Multiplied by the K value which is the constant to turn digitial to 
  //voltage Vref/1024 = 0.0032226... approx 0.0032
  // converts value from digitial representation to float value for readings
  float current = average * (0.0032);
  
  Serial.println(current);
}

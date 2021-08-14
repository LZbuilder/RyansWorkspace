/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
// single line comment
// i am commenting and its not ruining anything
// the setup routine runs once when you press reset:

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  myFunction(12, "Dumbass", 'B', "");
}

// the loop routine runs over and over again forever:
void loop() {

}

void myFunction(int parameterOne, String parameterTwo, char character, String dickfila){
  Serial.println(parameterOne);
  Serial.println(parameterTwo);
  Serial.println(character);
  Serial.println(dickfila);
}

/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput

  MOD NOTES:

  This code was modified to drive a DC biased BLDC motor, which is a BLDC motor in a star configuation, with the intersection of the three coils connected to a constant DC 
  voltage (+ or - x volts), and the other ends of the coils connected to ground through transistors or MOSFETS with diodes to protect agains reverse polarity voltage spikes.
  The gates of the three driver transistors are connected to PWM pins 13, 12, and 11 as A, B, and C respectively.
 modified by anonymous
*/

int sensorPin = A0;    // select the input pin for the potentiometer
int pina = 13;      // select the pin for the LED
int pinb = 12;
int pinc = 11;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(pina, OUTPUT);
  pinMode(pinb, OUTPUT);
  pinMode(pinc, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
 //stage 1
  digitalWrite(pina, HIGH);
  digitalWrite(pinb, HIGH);
  delay(sensorValue);
  digitalWrite(pina, LOW);
  digitalWrite(pinb, LOW);
  delay(sensorValue);
  //state 2
  digitalWrite(pinb, HIGH);
  digitalWrite(pinc, HIGH);
  delay(sensorValue);
  digitalWrite(pinb, LOW);
  digitalWrite(pinc, LOW);
  delay(sensorValue);
//stage 3
  digitalWrite(pinc, HIGH);
  digitalWrite(pina, HIGH);
  delay(sensorValue);
  digitalWrite(pinc, LOW);
  digitalWrite(pina, LOW);
  delay(sensorValue);
}

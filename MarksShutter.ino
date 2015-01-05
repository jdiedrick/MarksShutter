
#include <Button.h>
#include <Solenoid.h>

const int solenoidPin = 2;      // the number of the LED pin

const int button1Pin = 3;     // the number of the pushbutton pin
const int button2Pin = 4;     // the number of the pushbutton pin
const int button3Pin = 5;     // the number of the pushbutton pin
const int button4Pin = 6;     // the number of the pushbutton pin
const int button5Pin = 7;     // the number of the pushbutton pin

int solenoidState = HIGH;

//classes
Solenoid *solenoid1;
Button *button1;
Button *button2;
Button *button3;
Button *button4;
Button *button5;

void setup() {
  
  Serial.begin(9600);
  
  solenoid1=new Solenoid(2, solenoidState);
  button1 = new Button(3);
  button2 = new Button(4);
  button3 = new Button(5);
  button4 = new Button(6);
  button5 = new Button(7);
  
}

void loop(){
  
  button1->checkButton(solenoid1, 0);
  button2->checkButton(solenoid1, 1);
  button3->checkButton(solenoid1, 2);
  button4->checkButton(solenoid1, 3);
  button5->checkButton(solenoid1, 4);
  
}

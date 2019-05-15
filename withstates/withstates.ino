int Button = 9; //define the 9th digital pin for button brick
int LED = 11; //define the 8th digital pin for LED brick
int Buzzer = 10;

// Variables will change:
int buttonPushCounter = 1;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
 pinMode(LED,OUTPUT); //set the LED pin for digital output
 pinMode(Button,INPUT); //set the Button pin for digital input
 pinMode(Buzzer, OUTPUT);
}

void loop() {

  // read the pushbutton input pin:
  buttonState = digitalRead(Button);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonPushCounter % 2 == 1) {
      buttonPushCounter++;
      activation1();
    } else {
      buttonPushCounter++;
      activation2();
    }
    // Delay a little bit to avoid bouncing
    delay(50);

 
}
}
void activation1() {  //                         1. LIGHT + BUZZER
    analogWrite(LED,100); // light the LED
    delay(1000);
    analogWrite(Buzzer,100);
    delay(1000);
    analogWrite(LED,0);
    delay(1000);
    analogWrite(Buzzer,0);
    delay(1000);
}
void activation2() {  //                           2. LIGHT
  analogWrite(LED,100); // light the LED
  delay(1000);
  analogWrite(LED,0); // light the LED
  delay(1000);
  analogWrite(LED,100); // light the LED
  delay(1000);
  analogWrite(LED,0); // light the LED
  delay(1000);


//    if (buttonPushCounter % 2 == 1) {
//    analogWrite(LED, HIGH);
//  } else {
//    analogWrite(LED, LOW);
//  }

}

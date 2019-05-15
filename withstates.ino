int Button = 9; //define the 9th digital pin for button brick
int LED = 11; //define the 8th digital pin for LED brick
int Buzzer = 10;
int ButtonPushes = 0;

void setup() {
 pinMode(LED,OUTPUT); //set the LED pin for digital output
 pinMode(Button,INPUT); //set the Button pin for digital input
 pinMode(Buzzer, OUTPUT);
}


void loop() {

 if (digitalRead(Button)){ // if button press
  ButtonPushes++;
  delay(500);
 }

 if(ButtonPushes == 1) {
  activation1();
  
 }
 if(ButtonPushes == 2){
  activation2();
  ButtonPushes = 0;
 }
 
}

void activation1() {
    analogWrite(LED,100); // light the LED
    delay(1000);
    analogWrite(Buzzer,100);
    delay(1000);
    analogWrite(LED,0);
    delay(1000);
    analogWrite(Buzzer,0);
    delay(1000);
}
void activation2() {
  analogWrite(LED,100); // light the LED
  delay(1000);
  analogWrite(LED,100); // light the LED
  delay(1000);
  analogWrite(LED,100); // light the LED
  delay(1000);
}

const int Switchpin = 2; // select switch pin
const int Motorpin = 9; // select motorpin
int Switchstate = 0;

void setup(){
 pinMode(Motorpin, OUTPUT); // state of the motor in the beginning
 pinMode(Switchpin, INPUT); // state of the switch
}

// enter loop to run motor
void loop(){
  Switchstate = digitalRead(Switchpin);
  if (Switchstate == HIGH) {
    digitalWrite(Motorpin, HIGH);
  }
  else{
    digitalWrite(Motorpin, LOW);
  }
}

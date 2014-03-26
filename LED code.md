uogTeamM2
=========

int numTimePressed=0;

void setup() {                
  // initialize the LED pins as digital OUTPUTs and the button as a digital INPUT 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, INPUT);      
}

// the loop routine runs over and over again forever:
void loop() {


if(digitalRead(4) == HIGH){
numTimePressed = numTimePressed + 1;

}
delay(500);              // pauses between functions for half a second

if(numTimePressed==1){
digitalWrite(13, HIGH); 
digitalWrite(12, HIGH);  
}
delay(500);

if (numTimePressed==2){
digitalWrite(13, HIGH); 
digitalWrite(12, HIGH);  
delay(500);                  
digitalWrite(13, LOW);
digitalWrite(12, LOW);

}
delay(500);
}

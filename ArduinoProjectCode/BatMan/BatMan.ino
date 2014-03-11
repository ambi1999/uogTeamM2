//Author: Ibharim, Am
//Date: 11 March 2014
//Purpose: This code is piano code.

int notes [] = {293.66,329.66,349.23,392.00,440.00,493.88,523.25}


void setup () {
  Serial.begin (9600);
}

void loop () {
  
  int keyVal = analogRead(A0);
  
  Serial.println (keyVal);
  
  if(keyVal == 2023) {
    tone (8, notes[0]);
  }
    

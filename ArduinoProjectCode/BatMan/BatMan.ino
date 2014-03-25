//Author: Ibharim, Am
//Date: 11 March 2014
//Purpose: This code is piano code.

int button_C = 1; // declaring the pins 
int button_D = 2;
int button_E = 3;
int button_F = 4;
int button_G = 5;
int button_A = 6;
int button_B = 7;


int speaker = 13; // pizo speaker output

int buttonstate_C = 0;
int buttonstate_D = 0;
int buttonstate_E = 0;
int buttonstate_F = 0;
int buttonstate_G = 0;
int buttonstate_A = 0;
int buttonstate_B = 0;
//int buttonstate_Cup = 0;


int tones[] = { 293.66,329.66,349.23,392.00,440.00,493.88,523.25 }; // the frequency of notes. 
int Cur_tone = 0;

void setup()
{
  pinMode(button_C, INPUT); // declaring if it's an input or output
  pinMode(button_D, INPUT);
  pinMode(button_E, INPUT);
  pinMode(button_F, INPUT);
  pinMode(button_G, INPUT);
  pinMode(button_A, INPUT);
  pinMode(button_B, INPUT);


  pinMode(speaker, OUTPUT);
}

void loop()
{
	buttonstate_C = digitalRead(button_C); // connecting the buttons to the digital read.
	buttonstate_D = digitalRead(button_D);
	buttonstate_E = digitalRead(button_E);
	buttonstate_F = digitalRead(button_F);
	buttonstate_G = digitalRead(button_G);
	buttonstate_A = digitalRead(button_A);
	buttonstate_B = digitalRead(button_B);
	

	if((buttonstate_C == HIGH) || (buttonstate_E == HIGH) ||  // using IF statment to make a function
		(buttonstate_G == HIGH) || (buttonstate_D == HIGH) || 
		(buttonstate_F == HIGH) || (buttonstate_A == HIGH) || 
		(buttonstate_B == HIGH)  )
	{ 
		if (buttonstate_C == HIGH)  // If a button is pressed the note will play.
 		{
			Cur_tone = tones[0];
		} 
		if (buttonstate_E == HIGH)
		{
			Cur_tone = tones[1];
		}
		if (buttonstate_G == HIGH)
		{
			Cur_tone = tones[2];
		}
		if (buttonstate_D == HIGH)
		{
			Cur_tone = tones[3];
		}
		if (buttonstate_F == HIGH)
		{
			Cur_tone = tones[4];
		}
		if (buttonstate_A == HIGH)
		{
			Cur_tone = tones[5];
		}
		if (buttonstate_B == HIGH)
		{
			Cur_tone = tones[6];
		}
	

		digitalWrite(speaker, HIGH); 
		delayMicroseconds(Cur_tone);
		digitalWrite(speaker, LOW);
		delayMicroseconds(Cur_tone);
	}
	else 
	{
		digitalWrite(speaker, LOW); // if a button is not pressed speaker won't make a sound
	}

}

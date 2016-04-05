/*
 Shuffle Board Score Board

 Leverages five buttons to allow players to input points and keep a running count of 
 the game score on two 8x16 LED displays. One button for each team moves score up, one
 button moves score down and the fifth button resets all scores to zero after a double press.


 The circuit:
 * 2 8x16 LED backpacks are attached to I2C from pins A4 and A5 - additionally they are connected to 5V and Ground via harnass
 * Team 1 Score Up pushbutton attached to pin 6 from +5V
 * 10K resistor attached to pin 6 from ground
 * Team 1 Score Down pushbutton attached to pin 5 from +5V
 * 10K resistor attached to pin 5 from ground
 * Reset Score pushbutton attached to pin 4 from +5V
 * 10K resistor attached to pin 4 from ground
 * Team 2 Score Up pushbutton attached to pin 3 from +5V
 * 10K resistor attached to pin 3 from ground
 * Team 2 Score Down pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 created 2016
 by Smartpig
 
 This code is in the public domain.

 */

// Included Libraries

#include <Bounce2.h>
#include <Adafruit_GFX.h>
#include <gfxfont.h>
#include <Adafruit_LEDBackpack.h>

// constants won't change. They're used here to
// set pin numbers:
const int team1upPin = 6;     // the number of the team1 button score up pin
const int team1downPin = 5;     // the number of the team1 button score down pin
const int resetscorePin = 4;     // the number of the reset score button pin
const int team2upPin = 3;     // the number of the team2 button score up pin
const int team2downPin = 2;     // the number of the team2 button score down pin


// variables will change:
int button1State = 0;         // variable for reading the Team 1 up pushbutton status
int button2State = 0;         // variable for reading the Team 1 down pushbutton status
int button3State = 0;         // variable for reading the Cear Score pushbutton status
int button4State = 0;         // variable for reading the Team 2 up pushbutton status
int button5State = 0;         // variable for reading the Team 2 down pushbutton status

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

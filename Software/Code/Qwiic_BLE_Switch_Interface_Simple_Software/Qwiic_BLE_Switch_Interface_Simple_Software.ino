/** ************************************************************************
 * File Name: Qwiic_BLE_Switch_Interface_Simple_Software.ino 
 * Title: Qwiic BLE Switch Interface Simple Software
 * Developed by: Milador
 * Version Number: 1.0 (24/6/2022)
 * Github Link: https://github.com/milador/Qwiic-BLE-Switch-Interface
 ***************************************************************************/


#include <Wire.h>
#include "SparkFun_TCA9534.h"
#include <BleKeyboard.h>
#include <M5StickCPlus.h>

//***CAN BE CHANGED***/
#define SWITCH_MAC_MODE                true                // Windows, Android = false, Mac = true
#define SWITCH_REACTION_TIME           50                  //Minimum time for each switch action ( level 10 : 1x50 =50ms , level 1 : 10x50=500ms )
#define SWITCH_DEFAULT_REACTION_LEVEL  6

//***DO NOT CHANGE***//
#define INPUT_ADDR                     0x27                //TCA9534 input switch module I2C Address 
#define NUM_SWITCH                     2                   //Switch A and B
#define UPDATE_SWITCH_DELAY            200                 //100ms

// Variable Declaration
bool g_inputPinMode[NUM_SWITCH] = {GPIO_IN, GPIO_IN};

String g_switchConnectionMessage;        //Qwiic modules connection state message 
int g_moduleConnectionState;

//Declare switch state variables for each switch
bool g_switchAState,g_switchBState;

bool g_switchMacIsEnabled;
int g_switchReactionLevel;
int g_switchReactionTime;

 //Switch structure 
typedef struct { 
  uint8_t switchNumber;
  uint8_t switchChar;
  uint8_t switchMacChar;
} switchStruct;



//Switch properties 
const switchStruct switchProperty[] {
    {1,'a',KEY_F1},                             //{1=dot,"DOT",'a',  KEY_F1
    {2,'b',KEY_F2}                              //{2=dash,"DASH",'b',KEY_F2
};

TCA9534 inputModule;            //Input
BleKeyboard bleKeyboard;

void setup() {

  Serial.begin(115200);                                                        //Starts Serial
  M5.begin(0,1,1);                                                             //Starts M5Stack
  M5.Axp.SetLDO2(false);
  M5.Axp.SetLDO3(false);          
  M5.Axp.ScreenBreath(0);
                                               
  bleKeyboard.setName("Qwiic BLE Simple Switch");                              //Set name of BLE keyboard device 
  bleKeyboard.begin();                                                         //Starts BLE keyboard emulation
  delay(1000);
  switchSetup();                                                               //Setup switch
  delay(5);
  busExpandSetup();                                                            //Setup bus expander

};

void loop() {

  //Update 
  M5.update();
  
  //On M5 Button press release 
  if (M5.BtnA.wasReleased()) {

  } 

  //Update status of switch inputs
  g_switchAState = inputModule.digitalRead(0);
  g_switchBState = inputModule.digitalRead(1);

  keyboardAction(SWITCH_MAC_MODE,g_switchAState,g_switchBState); 
  
  delay(g_switchReactionTime);
}

//***SETUP SWITCH MODE FUNCTION***//
void switchSetup() {

    g_switchMacIsEnabled = SWITCH_MAC_MODE;
    g_switchReactionLevel = SWITCH_DEFAULT_REACTION_LEVEL;
   
    //Calculate switch delay based on g_switchReactionLevel
    g_switchReactionTime = ((11-g_switchReactionLevel)*SWITCH_REACTION_TIME);

    //Serial print settings 
    Serial.print("Switch Mode: ");
    (g_switchMacIsEnabled) ? Serial.println("Mac") : Serial.println("Windows");

    Serial.print("Switch Reaction Level: ");
    Serial.println(g_switchReactionLevel);
    Serial.print("Reaction Time(ms): ");
    Serial.println(g_switchReactionTime);
}

//***BUS EXPANDER SETUP FUNCTION***//
void busExpandSetup() {
  //Initialize the switch pins as inputs
  Wire.begin();
  while (1) { //Both input and output modules are successfully detected 
    if (inputModule.begin(Wire,INPUT_ADDR) == true ) {
      g_switchConnectionMessage = "Success: I2C is detected";
      Serial.println(g_switchConnectionMessage);
      g_moduleConnectionState = 1;
      break;
    } else {
      g_switchConnectionMessage = "Success: I2C not detected";
      Serial.println(g_switchConnectionMessage);
      g_moduleConnectionState = 0;
      delay(3000);
    }
  }
  inputModule.pinMode(g_inputPinMode);
}


//***ADAPTIVE SWITCH KEYBOARD FUNCTION***//
void keyboardAction(bool macMode,int switchA,int switchB) {
    if(!switchA) {
      //Windows,Android: a, Mac: F1
      (macMode) ? bleKeyboard.write(switchProperty[0].switchMacChar) : bleKeyboard.write(switchProperty[0].switchChar);
    } else if(!switchB) {
      //Windows,Android: b, Mac: F2
      (macMode) ? bleKeyboard.write(switchProperty[1].switchMacChar) : bleKeyboard.write(switchProperty[1].switchChar);
    } else
    {
      bleKeyboard.releaseAll();
    }
    delay(5);

}


//***CONFIGURATION MODE ACTIONS FUNCTION***//
void settingsAction(int switchA,int switchB) {
  if(switchA==LOW) {
    decreaseReactionLevel();
  }
  if(switchB==LOW) {
    increaseReactionLevel();
  }
}

//***INCREASE SWITCH REACTION LEVEL FUNCTION***//
void increaseReactionLevel(void) {
  g_switchReactionLevel++;
  if (g_switchReactionLevel == 11) {
    g_switchReactionLevel = 10;
  } else {
    g_switchReactionTime = ((11-g_switchReactionLevel)*SWITCH_REACTION_TIME);
    delay(25);
  }
  Serial.print("Reaction level: ");
  Serial.println(g_switchReactionLevel);
  Serial.print("Reaction Time(ms): ");
  Serial.print(g_switchReactionTime);
  delay(25);
}

//***DECREASE SWITCH REACTION LEVEL FUNCTION***//
void decreaseReactionLevel(void) {
  g_switchReactionLevel--;
  if (g_switchReactionLevel == 0) {
    g_switchReactionLevel = 1; 
  } else {
    g_switchReactionTime = ((11-g_switchReactionLevel)*SWITCH_REACTION_TIME);
    delay(25);
  } 
  Serial.print("Reaction level: ");
  Serial.println(g_switchReactionLevel);
  Serial.print("Reaction Time(ms): ");
  Serial.print(g_switchReactionTime);
  delay(25);
}

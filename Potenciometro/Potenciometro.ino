/**********************************************************************************
**                                                                               **
**                               Potenciometro                                   **
**                                                                               **
**   ABDELLAZIZ   AARAB                                    02/02/2017            **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup() {
Serial.begin(9600);
}

}
//********************************* LOOP ******************************************
void loop() {
Serial.print(analogRead(A0));
}
//******************************* FUNCIONS ****************************************

/**********************************************************************************
**                                                                               **
**                               LedPulsador                                     **
**                                                                               **
**   ABDELLAZIZ   AARAB                                    02/02/2017            **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup(){
pinMode(2, OUTPUT);  // utiliza el pin 2 salida
pinMode(4, INPUT);   //    el pin 4 entrada
}

//********************************* LOOP ******************************************
void loop(){
if(digitalRead(4)){
  digitalWrite(2, HIGH);  // activa la salida 
}else{
digitalWrite(2, LOW);    //  desactivar la salida
}
}

//******************************* FUNCIONS ****************************************


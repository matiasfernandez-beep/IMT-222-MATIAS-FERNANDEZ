#include "Arduino.h"
#include "funciones.h"
int Matriz_led[CANT_LED];

void iniciar_comunicacion_serial(){
  Serial.begin(BAUDRATE);
}

void configurar_pines(){
  for(int i = 0; i < CANT_LED; i++ ){
    Matriz_led[i] = i; 
    pinMode(Matriz_led[i], OUTPUT);
  }
}
void intervalo_led(){
  for(int i = 0; i < CANT_LED; i++ ){
    digitalWrite(Matriz_led[i], HIGH);
    delay(TIME);
  }
}
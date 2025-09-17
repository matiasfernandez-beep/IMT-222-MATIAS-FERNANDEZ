#include "Arduino.h"
#include "funciones.h"
int Matriz_led[CANT_LED];

void iniciar_comunicacion_serial(){
  Serial.begin(BAUDRATE);
}

void configurar_leds(){
  for (int i = 2; i < CANT_LED+2; i++) {
    Matriz_led[i-2] = i; 
    pinMode(Matriz_led[i-2], OUTPUT);
  }
}

void intervalo_led(){
  for(int i = 0; i < CANT_LED; i++ ){
    digitalWrite(Matriz_led[i], HIGH);
    delay(TIME);
  }
  for(int i = 0; i < CANT_LED; i++ ){
    digitalWrite(Matriz_led[i], LOW);
  }
}
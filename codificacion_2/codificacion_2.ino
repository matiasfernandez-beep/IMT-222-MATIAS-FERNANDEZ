#include "funciones.h"


void setup() {
  // put your setup code here, to run once:
  iniciar_comunicacion_serial();
  configurar_leds();
  attachInterrupt(digitalPinToInterrupt(BTNREINICIO), activacion, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
}

void activacion(){
  intervalo_led();
}

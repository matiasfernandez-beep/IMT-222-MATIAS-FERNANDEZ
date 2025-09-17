#include "funciones.h"


void setup() {
  // put your setup code here, to run once:
  iniciar_comunicacion_serial();
  configurar_pines();
}

void loop() {
  // put your main code here, to run repeatedly:
  intervalo_led();
}

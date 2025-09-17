#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <Arduino.h>
//MACROS
#define TIME 2000
#define CANT_LED 10
#define BAUDRATE 9600

//Variables
extern int Matriz_led[CANT_LED];

//CONFIGURACION INICIAL
void iniciar_comunicacion_serial();
void configurar_pines();
void intervalo_led();


#endif
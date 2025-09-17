#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <Arduino.h>


//MACROS
#define TIME 1000
#define CANT_LED 4
#define BAUDRATE 9600
#define BTNREINICIO 6

//Variables
extern int Matriz_Led[CANT_LED];

//CONFIGURACIONES

void iniciar_comunicacion_serial();
void configurar_leds();
void intervalo_led();


#endif
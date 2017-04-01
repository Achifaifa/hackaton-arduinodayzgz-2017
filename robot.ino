// Sensor de llama
#define LLAMA_DIG_1 2   // Sensor izquierdo
#define LLAMA_ANA_1 A0
#define LLAMA_DIG_2 3
#define LLAMA_ANA_2 A1
#define LLAMA_DIG_3 4   // Sensor central
#define LLAMA_ANA_3 A2
#define LLAMA_DIG_4 5
#define LLAMA_ANA_4 A3
#define LLAMA_DIG_5 6   // Sensor derecho
#define LLAMA_ANA_5 A4
// Sensor HC-SR04 
#define US_TRIGGER  7
#define US_ECHO     8
#define US_TIMEOUT  30000       // microsegundos
// Motores
#include <Servo.h>
#define MOTOR_IZQ 9
#define MOTOR_DCH 10
#define ZERO_IZQ 112     
#define ZERO_DCH 112   
Servo servo_izq;        // Crea los objetos para los dos servos
Servo servo_dch;
// Pin para el ventilador
#define EXTINTOR    12
// Definiciones para el sensor IR de suelo
#define SUELO_IR       11
#define MARCA_NEGRA    1

        // rueda izquierda
        //     valor > ZERO_IZQ --> adelante
        //     valor < ZERO_IZQ --> atrás
        // rueda derecha
        //     valor < ZERO_DCH --> adelante
        //     valor > ZERO_DCH --> atrás
        



void setup() {
  // Sensor de llama
  pinMode(LLAMA_DIG_1 , INPUT)
  pinMode(LLAMA_ANA_1 , INPUT)
  pinMode(LLAMA_DIG_2 , INPUT)
  pinMode(LLAMA_ANA_2 , INPUT)
  pinMode(LLAMA_DIG_3 , INPUT)
  pinMode(LLAMA_ANA_3 , INPUT)
  pinMode(LLAMA_DIG_4 , INPUT)
  pinMode(LLAMA_ANA_4 , INPUT)
  pinMode(LLAMA_DIG_5 , INPUT)
  pinMode(LLAMA_ANA_5 , INPUT)
  pinMode(US_TRIGGER  , INPUT)
  // Motores
  pinMode(MOTOR_IZQ , OUTPUT)
  pinMode(MOTOR_DCH , OUTPUT)
  pinMode(ZERO_IZQ  , OUTPUT)
  pinMode(ZERO_DCH  , OUTPUT)
  // Pin para el ventilador
  pinMode(EXTINTOR    , OUTPUT)
  // Definiciones para el sensor IR de suelo
  pinMode(SUELO_IR    , INPUT)
  pinMode(MARCA_NEGRA , INPUT)

}

void loop() {

}



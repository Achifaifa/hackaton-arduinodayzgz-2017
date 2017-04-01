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
#define ZEROS 112  
Servo servo_izq;        // Crea los objetos para los dos servos
Servo servo_dch;
// Pin para el ventilador
#define EXTINTOR    12
// Definiciones para el sensor IR de suelo
#define SUELO_IR       11
#define MARCA_NEGRA    1

void setup() {

  
  pinMode(LLAMA_DIG_1 , INPUT);
  pinMode(LLAMA_ANA_1 , INPUT);
  pinMode(LLAMA_DIG_2 , INPUT);
  pinMode(LLAMA_ANA_2 , INPUT);
  pinMode(LLAMA_DIG_3 , INPUT);
  pinMode(LLAMA_ANA_3 , INPUT);
  pinMode(LLAMA_DIG_4 , INPUT);
  pinMode(LLAMA_ANA_4 , INPUT);
  pinMode(LLAMA_DIG_5 , INPUT);
  pinMode(LLAMA_ANA_5 , INPUT);
  pinMode(US_TRIGGER  , INPUT);

  servo_izq.attach(MOTOR_IZQ);
  servo_dch.attach(MOTOR_DCH);
  // Pin para el ventilador
  pinMode(EXTINTOR    , OUTPUT);
  // Definiciones para el sensor IR de suelo
  pinMode(SUELO_IR    , INPUT);
}

int detectarlinea(){

  if (digitalRead(SUELO_IR)==MARCA_NEGRA){
    return 1;
  }
  return 0;
}

int detectarvela(){

  if (digitalRaed(LLAMA_DIG_1)==1){return 1;}
  if (digitalRaed(LLAMA_DIG_2)==1){return 2;}
  if (digitalRaed(LLAMA_DIG_3)==1){return 3;}
  if (digitalRaed(LLAMA_DIG_4)==1){return 4;}
  if (digitalRaed(LLAMA_DIG_5)==1){return 5;}
  return 0;
}

// rueda izquierda
//     valor > ZERO_IZQ --> adelante
//     valor < ZERO_IZQ --> atrás
// rueda derecha
//     valor < ZERO_DCH --> adelante
//     valor > ZERO_DCH --> atrás
void mover(dir){

  if (dir=="delante"){
    servo_dch.write(0);
    servo_izq.write(255);
  }
  if (dir=="detras"){
    servo_dch.write(255);
    servo_izq.write(0);
  }
  if (dir=="izquierda"){
    servo_dch.write(0);
    servo_izq.write(0);
  }
  if (dir=="derecha"){
    servo_dch.write(255);
    servo_izq.write(255);
  }
  if (dir=="parar"){
    servo_dch.write(ZEROS);
    servo_izq.write(ZEROS);
  }
}

void loop() {


}





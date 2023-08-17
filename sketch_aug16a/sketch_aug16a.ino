#include <Ultrasonic.h>

//desvio um
#define trig A0
#define echo A1

//desvio dois
#define trig A0
#define echo A1

//desvio três
#define trig A0
#define echo A1


//variaveis dos desvios
int Des1;
int Des2;
int Des3;

//motores
//motor A
int IN1 = 2;
int IN2 = 3;

//motor B
int IN3 = 4;
int IN4 = 6;

//não sei oq é isso, não me lembro
//int enableA = 8;
//int enableB = 3;

int cmMsec;
Ultrasonic ultrassonic(trig, echo);

void setup() {
  pinMode(Des1, INPUT);
  pinMode(Des2, INPUT);
  pinMode(Des3, INPUT);

  //pinMode(enableA, OUTPUT);
  //pinMode(enableB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  serial.begin(9600);
}

void esquerda(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);

  //digitalWrite(enableA, HIGH);
  //digitalWrite(enableB, HIGH);
  }

void direita(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, LOW);
  
   //digitalWrite(enableA, HIGH);
   //digitalWrite(enableB, HIGH);
  }
void reto(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  //digitalWrite(enableA, HIGH);
  //digitalWrite(enableB, HIGH);
  }

void loop() {
  int sens1 = analogRead(ir1);
  int sens2 = analogRead(ir2);
  int sens3 = analogRead(ir3);

  if(sensIr1 < 500 && sensIr3 < 500 && sensIr2 > 500){
     esquerda();
    }
    if(sensIr2 < 500 && sensIr3 < 500 && sensIr1 > 500){
        ireita();
      }
   if(sensIr3 > 500 && sensIr1 < 500 && sensIr2 < 500){
     reto();
    }

}

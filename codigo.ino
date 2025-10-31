#include <Servo.h> // inclui a biblioteca Servo.h

// Configurações do servo 1
Servo meuServo1; // declaração do objeto servo para o servo 1
 int pinoPotenciometroServo1 = A0; // pino do potenciômetro para o servo 1
 int pinoServo1 = 5; // pino de controle do servo 1 (deve usar um pino com PWM habilitado)
int testeServo1; // variável para armazenar o valor do potenciômetro para o servo 1

// Configurações do servo 2
Servo meuServo2; // declaração do objeto servo para o servo 2
 int pinoPotenciometroServo2 = A1; // pino do potenciômetro para o servo 2
 int pinoServo2 = 3; // pino de controle do servo 2 (deve usar um pino com PWM habilitado)
int testeServo2; // variável para armazenar o valor do potenciômetro para o servo 2

void setup() {
  meuServo1.attach(pinoServo1); // associa o objeto servo ao pino de controle do servo 1
  meuServo2.attach(pinoServo2); // associa o objeto servo ao pino de controle do servo 2
}

void loop() {
  // Leitura do potenciômetro do servo 1
  testeServo1 = analogRead(pinoPotenciometroServo1); // lê o valor do potenciômetro do servo 1
  testeServo1 = map(testeServo1, 0, 1023, 180, 0); // mapeia o valor lido para o intervalo de rotação do servo 1
  meuServo1.write(testeServo1); // movimenta o servo 1 para a posição determinada pelo potenciômetro
  
  // Leitura do potenciômetro do servo 2
  testeServo2 = analogRead(pinoPotenciometroServo2); // lê o valor do potenciômetro do servo 2
  testeServo2 = map(testeServo2, 0, 1023, 180, 0); // mapeia o valor lido para o intervalo de rotação do servo 2
  meuServo2.write(testeServo2); // movimenta o servo 2 para a posição determinada pelo potenciômetro
  
  delay(5); // aguarda um curto período de tempo
}

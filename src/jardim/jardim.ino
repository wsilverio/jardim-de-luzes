/*
  PROJETO: LUZ, CIENCIA E EMOCAO
  EXPERIMENTO: JARDIM
  UNIVERSIDADE FEDERAL DO PARANA
  DEPARTAMENTO DE ENGENHARIA ELETRICA
*/

#define MASTER  HIGH
#define SLAVE   LOW

// modo de operacao
#define MODE  MASTER

// pinos
#define LED_PIN   3   // led uso geral
#define MAX_EN    4   // habilita transmissao MAX485
#define MODE_PIN  12  // modo de operacao
#define SS_PIN    10  // slave select
#define SCK_PIN   13  // clock
#define MOSI_PIN  11  // mosi

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(MAX_EN, OUTPUT);
  pinMode(MODE_PIN, INPUT_PULLUP);
  pinMode(SS_PIN, OUTPUT);
  pinMode(SCK_PIN, OUTPUT);
  pinMode(MOSI_PIN, OUTPUT);

}

void loop() {

}



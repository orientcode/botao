// definindo ENTRADA com o valor 8
#define BOTAO 3
#define LED   13 

void setup() {
  pinMode(BOTAO, INPUT); // configurando a porta como entrada
  pinMode(LED, OUTPUT);  // configurando a porta como saida
  Serial.begin(9600);  // iniciando a comunicação serial
}

void loop() {
  int valorLido = digitalRead(BOTAO); // variavel que armazena o valor recebido pela porta digital
  Serial.println(valorLido); // mostrando na serial valor recebido
  if (valorLido == HIGH) { // condição que verifica se o botao foi pressionado
    digitalWrite(LED, HIGH); // acender led
  } else {
    digitalWrite(LED, LOW); // apagar led
  }
  delay(100); // aguardar 100 milesegundos
}

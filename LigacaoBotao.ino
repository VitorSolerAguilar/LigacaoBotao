int estadoBotao;
int botao = 12;
int led = 3;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  estadoBotao = digitalRead(botao);
  
  if(estadoBotao == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}

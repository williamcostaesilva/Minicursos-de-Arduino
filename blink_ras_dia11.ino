/*
	Projeto 1 - Blink Ras-UFCG- Dia 1
    Autor: William Costa
*/
#define led 2

void setup()
{
	pinMode(led, OUTPUT);
}

void loop()
{
	piscaled();
}

void piscaled()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(2000);
  
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led,LOW);
  delay(300);
}
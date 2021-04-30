String serie;
int i=0,s=0,opc=0;
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}
void loop()
{
  if(opc==0)
  {
    Serial.println("***********************************");
    Serial.println("Escriba alguna opción");
    Serial.println("Serie1 'De izquierda a derecha'");
    Serial.println("Serie2 'De derecha a izquierda'");
    Serial.println("Serie3 'Centrales a laterales'");
    Serial.println("***********************************");
    opc++;
  }
  if(Serial.available()>0)
  {
    serie=Serial.readString();
    Serial.println(serie);
    if(serie=="Serie1")
    {
      Serial.println("Ejecutando Serie1...");
      for(i=0;i<3;i++)
      {
      digitalWrite(2,HIGH);
      delay(200);
      digitalWrite(3,HIGH);
      delay(200);
      digitalWrite(4,HIGH);
      delay(200);
      digitalWrite(5,HIGH);
      delay(200);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      opc=0;
      }//for serie1
      Serial.println("Serie1 Finalizada");
    }//if serie1
    if(serie=="Serie2")
    {
      Serial.println("Ejecutando Serie2...");
      for(i=0;i<3;i++)
      {
      digitalWrite(5,HIGH);
      delay(200);
      digitalWrite(4,HIGH);
      delay(200);
      digitalWrite(3,HIGH);
      delay(200);
      digitalWrite(2,HIGH);
      delay(200);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      opc=0;
      }//for serie2
      Serial.println("Serie2 Finalizada");
    }//if serie2
    if(serie=="Serie3")
    {
      Serial.println("Ejecutando Serie3...");
      for(i=0;i<3;i++)
      {
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      delay(200);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(5,HIGH);
      delay(200);
      digitalWrite(2,LOW);
      
      digitalWrite(5,LOW);
      opc=0;
      }//for serie3
      Serial.println("Serie3 Finalizada");
    }//if serie3
  }
}

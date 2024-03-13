char bt;

String voice; 
void setup()
{
Serial.begin(9600);
   pinMode(11,OUTPUT);
   digitalWrite(11,LOW);
   pinMode(10,OUTPUT);
   digitalWrite(10,LOW);
   pinMode(6,OUTPUT);
   digitalWrite(6,LOW);
    pinMode(5,OUTPUT);
   digitalWrite(5,LOW);
    pinMode(3,OUTPUT);
   digitalWrite(3,LOW);
    pinMode(2,OUTPUT);
   digitalWrite(2,LOW);
  pinMode(12,OUTPUT);
   digitalWrite(12,HIGH);
 pinMode(7,INPUT);
   digitalWrite(7,HIGH);
   pinMode(8,INPUT);
   digitalWrite(8,HIGH);
   pinMode(9,INPUT);
   digitalWrite(9,HIGH);
         pinMode(A0,INPUT);
   digitalWrite(A0,HIGH);
         pinMode(A1,INPUT);
   digitalWrite(A1,HIGH);
         pinMode(A2,INPUT);
   digitalWrite(A2,HIGH);
         pinMode(A3,INPUT);
   digitalWrite(A3,HIGH);
   pinMode(A4,INPUT);
}

void loop()
{
  Serial.println(analogRead(A4)*0.49);
  if((analogRead(A4)*0.49)>45)
  {
     digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
     digitalWrite(12,LOW);
      digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   delay(500);
     digitalWrite(10,LOW);
  }
  if((analogRead(A4)*0.49)<45)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
  }

  if(digitalRead(8)==1)
   {
    Serial.println("bt");
    if(Serial.available()>0)
    {
      bt=Serial.read();
      if(bt=='F')
      {
        digitalWrite(6,HIGH);
        digitalWrite(5,LOW);
          digitalWrite(3,HIGH);
            digitalWrite(2,LOW);
      }
       if(bt=='B')
      {
        digitalWrite(6,LOW);
        digitalWrite(5,HIGH);
          digitalWrite(3,LOW);
            digitalWrite(2,HIGH); 
      }
       if(bt=='S')
      {
         digitalWrite(6,LOW);
        digitalWrite(5,LOW);
          digitalWrite(3,LOW);
            digitalWrite(2,LOW);
      }
       if(bt=='R')
      {
        digitalWrite(6,LOW);
        digitalWrite(5,HIGH);
          digitalWrite(3,HIGH);
            digitalWrite(2,LOW);
      }
       if(bt=='L')
      {
          digitalWrite(6,HIGH);
        digitalWrite(5,LOW);
          digitalWrite(3,LOW);
            digitalWrite(2,HIGH);
      }
    }
   }
     if(digitalRead(8)==0)
   {
    Serial.println("iot");
      if(digitalRead(A0)==0)
              {
                   digitalWrite(6,HIGH);
        digitalWrite(5,LOW);
          digitalWrite(3,HIGH);
            digitalWrite(2,LOW);
              }
             
          else      if(digitalRead(A1)==0)
              {
                 
             digitalWrite(6,LOW);
        digitalWrite(5,HIGH);
          digitalWrite(3,HIGH);
            digitalWrite(2,LOW);
              }
              
           else     if(digitalRead(A2)==0)
              {
                   digitalWrite(6,HIGH);
        digitalWrite(5,LOW);
          digitalWrite(3,LOW);
            digitalWrite(2,HIGH);
              }
          
  
              
           else    if(digitalRead(A3)==0)
               {
                  digitalWrite(6,LOW);
        digitalWrite(5,HIGH);
          digitalWrite(3,LOW);
            digitalWrite(2,HIGH);            
               }
               else
               {
                 digitalWrite(6,LOW);
        digitalWrite(5,LOW);
          digitalWrite(3,LOW);
            digitalWrite(2,LOW);
               }
   }     
             
}

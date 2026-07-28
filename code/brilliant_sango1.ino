int ledRed= 4;
int ledGreen= 2;
int ledYellow= 3;
int buzzer= 7;
int trigPin= 10;
int echoPin= 9;
long duration;
float distance;


void setup()
{
 pinMode(ledRed,OUTPUT);
 pinMode(ledGreen,OUTPUT); 
 pinMode(ledYellow,OUTPUT);
  
 pinMode(buzzer,OUTPUT); 
  
 pinMode(trigPin,OUTPUT); 
 pinMode(echoPin,INPUT); 
  
 Serial.begin(9600); 
 Serial.println("Obstacle Detection System Started");
}

void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
  
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
    
duration=pulseIn(echoPin,HIGH);
  
distance=duration/58.0;
  
if(distance>30)
 {
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);
  
  digitalWrite(buzzer,LOW);
  
  Serial.println("Status: SAFE");
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  Serial.println();
 }
else if(distance>15)
 {
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,HIGH);    
  
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1000);
  
  Serial.println("Status: WARNING");
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm"); 
  Serial.println();
 }
else if(distance>0)
 {
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow,LOW);    
  
  digitalWrite(buzzer,HIGH);
  delay(200);
  digitalWrite(buzzer,LOW);
  delay(200);
  
  Serial.println("Status: DANGER");
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm"); 
  Serial.println();
 }
else
 {
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow,LOW);    
  
  digitalWrite(buzzer,LOW);
  
  Serial.println("Invalid Reading");
  Serial.println();
 } 
}
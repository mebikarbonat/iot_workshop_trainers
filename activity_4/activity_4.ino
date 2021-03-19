//Muhammad Azizi Mohd Ariffin
//mazizi@tmsk.uitm.edu.my
//LM35 Analog Sensor non_blocking

long previousMillis = 0; 
long interval = 1000; 

#define led1 D0
float vout; //temporary variable to hold sensor reading

void setup() 
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
}
void loop() 
{
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis > interval)
  {
  previousMillis = currentMillis;
  vout=analogRead(A0); //Reading the value from sensor
  vout=(vout*300)/1023;
  Serial.println(vout);

  if(vout >= 32.0)
  {
    digitalWrite(led1, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
  }
  
  }
}

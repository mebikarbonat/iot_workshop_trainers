//Muhammad Azizi Mohd Ariffin
//mazizi@tmsk.uitm.edu.my
//RGB Analog Output

void setup() 
{
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}
void loop() 
{
  analogWrite(D0, random(0,255));
  analogWrite(D1, random(0,255));
  analogWrite(D2, random(0,255));
  delay(500);   

  analogWrite(D0, random(0,255));
  analogWrite(D1, random(0,255));
  analogWrite(D2, random(0,255));
  delay(500); 
  analogWrite(D0, random(0,255));
  analogWrite(D1, random(0,255));
  analogWrite(D2, random(0,255));
  delay(500); 
}

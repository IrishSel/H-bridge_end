int motor_pin = 9;
int brightness = 0; //скорость вращения
int fadeAmount = 25; // Шаг изменения скорости

void setup() 
{
  pinMode(motor_pin, OUTPUT);
}

void loop() 
{
  analogWrite(motor_pin, brightness);  
    
  brightness = brightness + fadeAmount;
  
   if (brightness == 0 || brightness == 255)
  {
    fadeAmount = -fadeAmount ; 
  }
  delay(30);   

  
  
}

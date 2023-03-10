#define motor_1 6
#define motor_2 7

void setup() {
  pinMode(motor_1, OUTPUT);
  pinMode(motor_2, OUTPUT);
}

void loop() {
  motor_start(120,6);
}

void motor_start(int speed, int direction){
  if (direction == 6)
  {
    analogWrite(motor_1, speed);
    pinMode(motor_1, OUTPUT);
    pinMode(motor_2, INPUT);
  }

  if (direction == 7)
  {
    analogWrite(motor_2, speed);
    pinMode(motor_2, OUTPUT);
    pinMode(motor_1, INPUT);
  }
}

const int pwm1 = 9; // speed control for M1
const int pwm3 = 5; // speed control for M3 (left)

const int dir1 = 2; // direction control for M1
const int dir3 = 4; // direction control for M3

void setup() {
  // put your setup code here, to run once:
  pinMode(pwm1, OUTPUT);  digitalWrite(pwm1, LOW);
  pinMode(dir1, OUTPUT);

  // analogWrite(pwm1, 100);
  

}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dir1, 1);
  analogWrite(pwm1, 200);
}

// Speed Control Pins (Active Low)
const int PWM_M1 = 9; // Right
const int PWM_M2 = 10;
const int PWM_M3 = 5; // Left
const int PWM_M4 = 6;

// Direction Control Pins
const int DIR_M1 = 2; // Right/ 1 --> Pulling
const int DIR_M2 = 3;
const int DIR_M3 = 4; // Left
const int DIR_M4 = 7;

// emable for all 4 motors (Active Low)
const int ENABLE_MOTORS = 8;

int pwm1, pwm2, pwm3, pwm4;

void setup() {
  // put your setup code here, to run once:

  pinMode(PWM_M1, OUTPUT);  digitalWrite(PWM_M1, LOW);
  pinMode(PWM_M2, OUTPUT);  digitalWrite(PWM_M2, LOW);
  pinMode(PWM_M3, OUTPUT);  digitalWrite(PWM_M3, LOW);
  pinMode(PWM_M4, OUTPUT);  digitalWrite(PWM_M4, LOW);


  pinMode(DIR_M1, OUTPUT);
  pinMode(DIR_M2, OUTPUT);
  pinMode(DIR_M3, OUTPUT);
  pinMode(DIR_M4, OUTPUT);

  pinMode(ENABLE_MOTORS, OUTPUT);   digitalWrite(ENABLE_MOTORS, LOW);

}

void curlRight() {
  digitalWrite(DIR_M2, 1);

  for (pwm2 = 0; pwm2 <= 150; pwm2++) {
    analogWrite(PWM_M2, pwm2);
    delay(15);   
  }

  delay(2000); // Run for 2 seconds

  for (pwm2 = 150; pwm2 >= 0; pwm2--) {
    analogWrite(PWM_M2, pwm2);
    delay(15);   
  }

  delay(1000); // wait for 1 second
}


void loop() {
  // put your main code here, to run repeatedly:
  curlRight();
}

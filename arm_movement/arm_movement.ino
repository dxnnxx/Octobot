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

void pull_right() {
  digitalWrite(DIR_M2, 1);

  for (pwm2 = 0; pwm2 <= 110; pwm2++) {
    analogWrite(PWM_M2, pwm2);
    delay(15);   
  }

  delay(800); // Run for 0.8 seconds

  for (pwm2 = 110; pwm2 >= 0; pwm2--) {
    analogWrite(PWM_M2, pwm2);
    delay(15);   
  }

  delay(700); // wait for 1 second
}

void unpull_right() {
  digitalWrite(DIR_M2, 0);

  for (pwm2 = 0; pwm2 <= 110; pwm2++) {
    analogWrite(PWM_M2, pwm2);
    delay(15);   
  }

  delay(800); // Run for 0.8 seconds

  for (pwm2 = 110; pwm2 >= 0; pwm2--) {
    analogWrite(PWM_M2, pwm2);
    delay(15);   
  }

  delay(700); // wait for 1 second
}

void pull_left() {
  digitalWrite(DIR_M3, 0);

  for (pwm3 = 0; pwm3 <= 110; pwm3++) {
    analogWrite(PWM_M3, pwm3);
    delay(15);   
  }

  delay(800); // Run for 0.8 seconds

  for (pwm3 = 110; pwm3 >= 0; pwm3--) {
    analogWrite(PWM_M3, pwm3);
    delay(15);   
  }

  delay(700); // wait for 1 second
}

void unpull_left() {
  digitalWrite(DIR_M3, 1);

  for (pwm3 = 0; pwm3 <= 110; pwm3++) {
    analogWrite(PWM_M3, pwm3);
    delay(15);   
  }

  delay(700); // Run for 0.7 seconds

  for (pwm3 = 110; pwm3 >= 0; pwm3--) {
    analogWrite(PWM_M3, pwm3);
    delay(15);   
  }

  delay(900); // wait for 1 second
}

void loop() {
  // put your main code here, to run repeatedly:
  pull_right();
  unpull_right();
  pull_left();
  unpull_left();
}

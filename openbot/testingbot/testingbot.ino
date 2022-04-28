int motor1pin1 = 5;
int motor1pin2 = 6;

int motor2pin1 = 9;
int motor2pin2 = 10;

int ultrasonic_echo = 11;
int ultrasonic_trig = 12;
long duration; 
int distance;

int left_led = 4;
int right_led = 7;  

int left_speed = 2;
int right_speed = 3;
int LV;
int RV;

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(ultrasonic_trig, OUTPUT);
  pinMode(ultrasonic_echo, INPUT);
  pinMode(left_led, OUTPUT);
  pinMode(right_led, OUTPUT);
  pinMode(left_speed, INPUT);
  pinMode(right_speed, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  LV = analogRead(left_speed);
  Serial.print("Speed of left side: ");
  Serial.print(LV);
  Serial.println("rpm");

  RV = analogRead(right_speed);
  Serial.print("Speed of right side: ");
  Serial.print(RV);
  Serial.println("rpm");

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(100);

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(100);

  digitalWrite(left_led, HIGH);
  delay(100);
  digitalWrite(left_led, LOW);
  delay(100);

  digitalWrite(right_led, HIGH);
  delay(100);
  digitalWrite(right_led, LOW);
  delay(100);

  // Clears the trigPin condition
  digitalWrite(ultrasonic_trig, LOW);
  delayMicroseconds(2);

  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(ultrasonic_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonic_trig, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(ultrasonic_echo, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
}

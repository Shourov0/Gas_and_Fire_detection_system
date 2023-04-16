int ir_rcv = 7;
int g_sensor=3;
int buzzer =11;

void setup() {
  Serial.begin(9600);
  pinMode(ir_rcv,INPUT);
  pinMode(g_sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  delay(20000);
}

void loop() {
  if(digitalRead(ir_rcv) == LOW || digitalRead(g_sensor) == LOW){
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
  }
}

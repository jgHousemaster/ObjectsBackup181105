void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(13);  
  Serial.println(x); 
}

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=200;i<800;i++)
   {
      tone(8,i);
      delay(5);
   }
   delay(4000);
   for(int i=800;i>=200;i--)
   {
      tone(8,i);
      delay(10);
    }
}

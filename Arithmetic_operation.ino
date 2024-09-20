void setup() {
  Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 15;
  int y = 3;
  int z = 2;
  int a = x+y;
  Serial.println(a);
  delay(1000);
  int b = x - y;
  Serial.println(b);
  delay(1000);
  int c = x * y;
  Serial.println(c);
  delay(1000);
  int d = x / y;
  Serial.println(d);
  delay(1000);
  int e = x % 2;
  Serial.println(e);
  delay(1000);
}

void setup1() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);  //pinMode(핀번호, 모드)  INPUT/OUTPUT
}

void loop1() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);  // digitalWrite(핀번호, 작동여부);   작동: HIGH(5V) / LOW(0V)
  delay(100); //ms단위
  digitalWrite(7, LOW);
  delay(100);
}

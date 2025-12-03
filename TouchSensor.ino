int touchPin=7;
int buzz=13;
void setup(){
pinMode(touchPin, INPUT);
pinMode(buzz, OUTPUT);
Serial.begin(9600);
}
void loop() {
  int touch=digitalRead(touchPin);
  if(touch == HIGH){
    digitalWrite(buzz,HIGH);
    Serial.println("Touched");
  }else{
    digitalWrite(buzz,LOW);
    Serial.println("Not Touched!");
  }
 delay(100);
}
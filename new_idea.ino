const int sounderPin = 9; 

void setup() {
  pinMode(sounderPin, OUTPUT); 
}

void loop() {
  tone(sounderPin, 1000); //  1000 Гц
  delay(1000); // триває 1 секунд
  
  noTone(sounderPin); // Зупиняємо звук
  delay(1000); // не грає 1 секунд
}
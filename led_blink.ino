// LED'in bağlı olduğu pin numarasını tanımlıyoruz
const int ledPin = 13;  

void setup() {
  Serial.begin(9600);
  delay(100); // Bazı durumlarda gerekli
  Serial.println("LED ON");
  // 13. pini çıkış (OUTPUT) olarak ayarlıyoruz
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // LED'i yak (5V uygula)
  delay(1000);                 // 1 saniye bekle
  digitalWrite(ledPin, LOW);   // LED'i söndür (0V uygula)
  delay(1000);                 // 1 saniye bekle
}

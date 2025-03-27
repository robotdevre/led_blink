#led_blink

Bu proje, Arduino Uno kartı kullanılarak bir LED'in belirli aralıklarla yanıp sönmesini sağlar. Temel seviye bir Arduino projesidir.

---

##  Kullanılan Malzemeler

- Arduino Uno
- 220 Ohm direnç
- LED
- Breadboard
- Jumper kablolar

---

## Proje Amacı

- `digitalWrite()` fonksiyonunu öğrenmek
- `delay()` ile zamanlama yapmak
- Temel devre kurulumlarını kavramak

---

## 🔌 Devre Şeması

> `diagram.json` dosyasında Wokwi uyumlu devre şeması bulunmaktadır.  
> İstersen doğrudan [Wokwi üzerinden simüle etmek için buraya tıklayabilirsin.](https://wokwi.com)

---

## 🧾 Kod

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

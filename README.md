#led_blink
![Wokwi CI](https://github.com/robotdevre/led_blink/actions/workflows/wokwi.yml/badge.svg)


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
> İstersen doğrudan [Wokwi üzerinden simüle etmek için buraya tıklayabilirsin.](https://wokwi.com/projects/426574228038427649)

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
``` 
---

## 📫 Benimle İletişime Geç / Takip Et
Eğer proje hakkında bir fikrin varsa, soruların olursa ya da sadece selam vermek istersen; aşağıdaki kanallardan bana ulaşabilir ya da sosyal medya hesaplarımdan takip edebilirsin:

📧 E-posta

📷 Instagram

🌐 Web Sitesi

🎥 YouTube

💼 LinkedIn

🐦 X (Twitter)

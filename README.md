# Project-fingerprint-open-the-door-esp32

โปรเจกต์ระบบเปิด-ปิดประตูด้วยการสแกนลายนิ้วมือ (Fingerprint Door Lock) ควบคุมการทำงานผ่านบอร์ดไมโครคอนโทรลเลอร์ (รองรับ ESP8266, ESP32 และ Arduino AVR) พร้อมการแจ้งเตือนผ่าน LINE Notify และแสดงผลผ่านจอ LCD

## 🌟 คุณสมบัติเด่น (Features)
- สแกนลายนิ้วมือเพื่อควบคุมโมดูล Relay สำหรับล็อก/ปลดล็อกประตู
- แจ้งเตือนสถานะการเปิด-ปิดประตูผ่านแอปพลิเคชัน LINE (LINE Notify)
- แสดงข้อความสถานะการทำงานและเวลานับถอยหลังผ่านจอ LCD I2C (16x2)
- มีไฟ LED แสดงสถานะ (สีเขียว: สแกนผ่าน, สีแดง: สแกนไม่ผ่าน)
- มีเสียง Buzzer แจ้งเตือนสถานะต่างๆ
- รองรับการเพิ่มลายนิ้วมือ (Enroll) ผ่าน Serial Monitor พร้อมระบบรหัสผ่านป้องกัน

## 🛠️ อุปกรณ์ที่ใช้ (Hardware Requirements)
- บอร์ดคอนโทรลเลอร์: ESP8266 NodeMCU / ESP32 / Arduino (UNO, Nano)
- เซ็นเซอร์สแกนลายนิ้วมือ (Fingerprint Sensor) เช่น AS608 หรือ R307
- จอแสดงผล LCD I2C 16x2
- Relay Module (1 Channel)
- LED สีเขียว และ สีแดง
- Buzzer (Active หรือ Passive)

## 📌 การต่อวงจร (Pin Mapping สำหรับ ESP8266)
| อุปกรณ์ (Device) | ขาบนบอร์ด (ESP8266) |
| ------------- |:-------------:|
| **Fingerprint** V+, Tx, Rx, Gnd | Vin, D6, D7, Gnd |
| **LED 1 (สีเขียว - ผ่าน)** Anode(+), Cathode(-) | D4, Gnd |
| **LED 2 (สีแดง - ไม่ผ่าน)** Anode(+), Cathode(-) | D3, Gnd |
| **Relay** Vcc, IN1, Gnd | Vin, D0, Gnd |
| **LCD I2C** Vcc, SDA, SCL, Gnd | 3V, D2, D1, Gnd |
| **Buzzer** Vcc, S, Gnd | 5V, D5, Gnd |

*(หมายเหตุ: หากใช้ ESP32 หรือ Arduino ขาพินจะสลับไปตามที่กำหนดในโค้ดส่วนของ `#ifdef ESP32` หรือ `#elif defined(__AVR__)`)*

## 📚 ไลบรารีที่จำเป็น (Required Libraries)
ต้องทำการติดตั้งไลบรารีเหล่านี้ใน Arduino IDE ก่อนคอมไพล์โปรแกรม:
1. `Adafruit_Fingerprint`
2. `TridentTD_LineNotify` (สำหรับ ESP8266/ESP32)
3. `Wire` (มักจะมีมาให้อยู่แล้ว)
4. `LiquidCrystal_I2C`

## ⚙️ การตั้งค่าก่อนใช้งาน (Configuration)
ในส่วนต้นของไฟล์ `.ino` (หรือแหล่งโค้ด) ให้เปลี่ยนค่าดังต่อไปนี้ให้ตรงกับเครือข่ายและระบบของคุณ:
```cpp
#define SSID        "ชื่อ WiFi ของคุณ"
#define PASSWORD    "รหัสผ่าน WiFi ของคุณ"
#define LINE_TOKEN  "LINE Notify Token ของคุณ"
String password = "NZNZ";  // รหัสผ่าน 4 ตัว สำหรับเพิ่มลายนิ้วมือผ่าน Serial Monitor
```

## 📝 การเพิ่มลายนิ้วมือใหม่ (Enrollment)
การลงทะเบียนลายนิ้วมือสามารถทำผ่าน Serial Monitor ของ Arduino IDE:
1. เปิด Serial Monitor และตั้งค่า Baud Rate เป็น `9600`
2. พิมพ์คำสั่งในรูปแบบ `รหัสผ่าน,ID` เช่น `NZNZ,1` แล้วกด Enter (ID ที่แนะนำให้ตั้งคือ 1-49 ส่วน 50 ขึ้นไปเตรียมไว้สำหรับเป็น Admin)
3. ระบบจะเข้าสู่โหมดบันทึกลายนิ้วมือ และให้คุณทำการทาบนิ้วที่เซ็นเซอร์ตามคำแนะนำใน Serial Monitor
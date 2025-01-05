# **ESP32 Temperatur- und Luftfeuchtigkeitsanzeige mit DHT11**

In diesem Projekt lernst du, wie du mit einem **ESP32**, einem **DHT11-Temperatur- und Luftfeuchtigkeitssensor** und einem **OLED-Display** (SSD1306) eine Anzeige für Temperatur und Luftfeuchtigkeit baust.

---

## **Benötigte Materialien**

- **ESP32** Entwicklungsboard
- **DHT11-Sensor**
- **OLED-Display** (SSD1306, I²C)
- **Jumper-Kabel**
- **Breadboard**
- **10 kΩ Pullup-Widerstand** (für den DHT11)

---

## **Verkabelung**

### **DHT11 Sensor**

| **DHT11 Pin** | **ESP32 Pin**  |
|---------------|----------------|
| **VCC**       | **3.3V**       |
| **GND**       | **GND**        |
| **DATA**      | **GPIO4**      |

- Ein **10 kΩ Pullup-Widerstand** wird zwischen dem **DATA-Pin** des DHT11 und **3.3V** geschaltet.

### **OLED-Display (SSD1306)**

| **OLED Pin** | **ESP32 Pin** |
|--------------|---------------|
| **VCC**      | **3.3V**      |
| **GND**      | **GND**       |
| **SDA**      | **GPIO21**    |
| **SCL**      | **GPIO22**    |

---

## **Schaltplan**

Hier ist ein Beispiel für die Verkabelung:

![Schaltplan](INSERT-YOUR-IMAGE-LINK-HERE)

---

## **Bibliotheken installieren**

1. Öffne die **Arduino IDE**.
2. Gehe zu **Sketch → Bibliothek einbinden → Bibliotheken verwalten**.
3. Installiere die folgenden Bibliotheken:
   - **Adafruit SSD1306**
   - **Adafruit GFX**
   - **DHT sensor library**

---

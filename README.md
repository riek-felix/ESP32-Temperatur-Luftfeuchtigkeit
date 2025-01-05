# **ESP32 Temperatur- und Luftfeuchtigkeitsanzeige mit DHT11**

Temperatur- und Luftfeuchtigkeitsanzeige mithilfe eines DTH11/ DTH22 und einem OLED-Display (SSD1306).

---

## **Benötigte Materialien**

- **ESP32** Entwicklungsboard
- **DHT11-Sensor**
- **OLED-Display** (SSD1306, I²C)
- **Jumper-Kabel**
- **Breadboard**

---

## **Schritt 1: Verkabelung**

### **DHT11/ DTH22 Sensor**

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

## **Schritt 2: Bibliotheken installieren**

1. Öffne die **Arduino IDE**.
2. Gehe zu **Sketch → Bibliothek einbinden → Bibliotheken verwalten**.
3. Installiere die folgenden Bibliotheken:
   - **Adafruit SSD1306**
   - **Adafruit GFX**
   - **DHT sensor library**

---

## **Schritt 3:Code**
Lade den Code [esp32_temp_luftf.ino] (https://github.com/riek-felix/ESP32-Temperatur-Luftfeuchtigkeit/blob/main/esp32_temp_luftf.ino) herunter oder kopiere ihn in deine Arduino IDE

---

## **Schritt 4:Code hochladen**
1. Schließe deinen ESP32 über ein USB-Kabel an deinen Computer an.
2. Wähle in der Arduino IDE unter **Tools** --> **Board** --> **ESP32 Dev Module** aus
3. Wähle den richtigen Port aus.
4. Lade den Code auf den ESP32 hoch.

---

## **Schritt 5: Messwerte anzeigen**
1. Die gemessene Temperatur und Luftfeuchtigkeit werden auf dem OLED-Display angezeigt. 
2. Die gleichen Werte werden auch im seriellen Monitor der Arduino IDE ausgegeben (Baudrate: 115200)

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// Display-Einstellungen
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// DHT11-Einstellungen
#define DHTPIN 4 // Pin, an dem der DHT11 angeschlossen ist
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Seriellen Monitor starten
  Serial.begin(115200);
  Serial.println("Starte...");

  // DHT11 initialisieren
  dht.begin();

  // OLED-Display initialisieren
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // 0x3C ist die Standardadresse des SSD1306
    Serial.println(F("OLED konnte nicht initialisiert werden!"));
    for (;;); // Stoppe hier, wenn das Display nicht funktioniert
  }

  // Display vorbereiten
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Starte...");
  display.display();
  delay(2000);
}

void loop() {
  // Sensorwerte lesen
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Prüfen, ob die Messwerte gültig sind
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println(F("Fehler beim Lesen des DHT11-Sensors!"));
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Sensorfehler!");
    display.display();
    delay(2000);
    return;
  }

  // Messwerte auf dem seriellen Monitor ausgeben
  Serial.print(F("Temperatur: "));
  Serial.print(temperature);
  Serial.println(F(" °C"));

  Serial.print(F("Luftfeuchtigkeit: "));
  Serial.print(humidity);
  Serial.println(F(" %"));

  // Messwerte auf dem Display anzeigen
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("DHT11 Sensorwerte:");
  display.setTextSize(2);
  display.setCursor(0, 20);
  display.print("T: ");
  display.print(temperature);
  display.println(" C");

  display.setCursor(0, 40);
  display.print("H: ");
  display.print(humidity);
  display.println(" %");

  display.display();
  delay(2000); // Warte 2 Sekunden bis zur nächsten Messung
}


/*
 Smart Plant Health Monitor
 ESP32 + Soil Moisture + DHT11 + LEDs + ThingSpeak
*/

#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

String apiKey = "YOUR_THINGSPEAK_WRITE_API_KEY";
String serverName = "https://api.thingspeak.com/update";

#define SOIL_PIN 35
#define DHTPIN 4
#define DHTTYPE DHT11

#define LED_RED 25
#define LED_YELLOW 26
#define LED_GREEN 27

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void loop() {
  int soil = analogRead(SOIL_PIN);
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  String label;
  if (soil <= 1975) label = "WET";
  else if (soil <= 3275) label = "MOIST";
  else label = "DRY";

  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, LOW);

  if (label == "WET") digitalWrite(LED_GREEN, HIGH);
  else if (label == "MOIST") digitalWrite(LED_YELLOW, HIGH);
  else digitalWrite(LED_RED, HIGH);

  Serial.print(soil);
  Serial.print(",");
  Serial.print(temp);
  Serial.print(",");
  Serial.print(hum);
  Serial.print(",");
  Serial.println(label);

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String url = serverName + "?api_key=" + apiKey +
                 "&field1=" + String(soil) +
                 "&field2=" + String(temp) +
                 "&field3=" + String(hum);
    http.begin(url);
    http.GET();
    http.end();
  }

  delay(20000);
}

#define BLYNK_TEMPLATE_ID "TMPL6noGSube69"
#define BLYNK_TEMPLATE_NAME "Sensor DHT"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

void sendSensorData() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Gagal membaca dari sensor DHT11!");
    return;
  }

  Serial.print("Suhu: ");
  Serial.print(temperature);
  Serial.print(" °C | Kelembaban: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Kirim data ke Virtual Pin Blynk
  Blynk.virtualWrite(V5, temperature);
  Blynk.virtualWrite(V6, humidity);
}

void setup() {
  Serial.begin(115200);
  dht.begin();

  Blynk.begin(auth, ssid, pass);

  // Setup interval kirim data setiap 2 detik
  timer.setInterval(2000L, sendSensorData);
}

void loop() {
  Blynk.run();
  timer.run();
}

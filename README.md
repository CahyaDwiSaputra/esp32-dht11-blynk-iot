# 🌡️ ESP32 Weather Station: DHT11 & Blynk IoT Cloud Dashboard

Stasiun pemantauan cuaca dan iklim mikro (*weather monitoring*) nirkabel berbasis mikrokontroler **ESP32** dan sensor suhu & kelembaban **DHT11**, terintegrasi dengan platform cloud **Blynk IoT** untuk pemantauan data telemetri real-time melalui web dan smartphone.

---

## 🚀 Fitur Utama
- **Monitoring Suhu & Kelembaban Presisi**: Pembacaan periodik variabel temperatur (°C) dan kelembaban udara relatif (% RH).
- **Integrasi Blynk IoT Cloud**:
  - Virtual Pin `V5`: Nilai Temperatur / Suhu.
  - Virtual Pin `V6`: Nilai Persentase Kelembaban.
  - Gauge & Chart interaktif di dashboard aplikasi mobile Blynk.
- **Koneksi Wi-Fi Otomatis**: Fitur auto-reconnect untuk menjaga kontinuitas pengiriman data sensor.
- **Dilengkapi Dokumentasi Praktikum**: PDF laporan praktikum lengkap di folder `docs/`.

---

## 🛠️ Skema Rangkaian & Pinout (ESP32)
| Komponen | Pin Modul | Pin ESP32 (GPIO) | Keterangan |
|---|---|---|---|
| **DHT11 Sensor** | VCC | 3V3 / 5V | Catu daya sensor |
| **DHT11 Sensor** | GND | GND | Ground |
| **DHT11 Sensor** | DATA | **GPIO 4** | Jalur pembacaan data serial 1-wire |

---

## 📦 Kebutuhan Library
- `DHT sensor library` (oleh Adafruit)
- `Adafruit Unified Sensor` (oleh Adafruit)
- `Blynk` (oleh Volodymyr Shymanskyy)

---

## 👤 Author
- **Cahya Dwi Saputra**

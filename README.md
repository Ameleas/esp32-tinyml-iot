# TinyML Bird Detection with ESP32S3

This project demonstrates image-based bird detection using TinyML on an ESP32S3 device.
Due to time constraints and in order to generate sufficient data for visualization in Grafana, a toy bird was
used during development and testing. Images are captured periodically every minute, and MQTT messages are
published every ten minutes. These parameters can easily be adjusted to suit specific use cases.

## Hardware
- Seeed Studio XIAO ESP32S3 Sense
- Raspberry Pi 5

## Software
- Edge Impulse
- Arduino
- IOTstack with
    - Portainer 
    - MQTT
    - Node-RED
    - InfluxDB
    - Grafana

## Security
- MQTT over TLS
- mTLS authentication
- Certificates generated with OpenSSL

## How to build
1. Install required Arduino libraries
2. Copy `secrets.example.h` to `secrets.h`
3. Fill in WiFi and MQTT credentials
4. Upload to ESP32

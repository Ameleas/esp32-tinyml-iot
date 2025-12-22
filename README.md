# TinyML Bird Detection with ESP32S3

This project demonstrates image-based bird detection using TinyML on an ESP32S3 device.

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

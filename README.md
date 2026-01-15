
# 🌱 Smart Plant Health Monitor

An IoT-based system that monitors plant health using soil moisture, temperature, and humidity sensors.
The system integrates Machine Learning, cloud data logging (ThingSpeak), and real-time visual feedback using LEDs.

## Features
- ESP32-based sensor monitoring
- Soil Moisture + DHT11 sensors
- Decision Tree ML model (Supervised Learning)
- Real-time ThingSpeak cloud dashboard
- LED-based plant status indication (Dry / Moist / Wet)

## Folder Description
- Arduino_Code : ESP32 firmware
- ML : Dataset and ML training script
- Dashboard : HTML dashboard
- Images : Hardware, outputs, ThingSpeak screenshots
- Demo : Demo video (optional)

## ML Approach
A Decision Tree classifier is trained using labeled sensor data to classify plant condition into:
- Dry
- Moist
- Wet

## Outcome
Provides a low-cost, scalable solution for smart agriculture and plant monitoring.


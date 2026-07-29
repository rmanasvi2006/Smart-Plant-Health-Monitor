Smart Plant Health Monitor
 
Smart Plant Health Monitor is an IoT-enabled monitoring system that combines real-time environmental sensing, cloud-based data visualization, and machine learning to assess plant health. The system continuously monitors soil moisture, temperature, and humidity, classifies plant conditions using a Decision Tree model, and provides live feedback through a web dashboard and visual indicators.

## Project Motivation

Manual plant monitoring can be time-consuming and inconsistent. This project provides an automated, low-cost solution for continuously monitoring plant health using IoT sensors, cloud analytics, and machine learning. By combining real-time sensing with intelligent classification, the system helps detect plant stress early and supports more informed plant care.

By integrating IoT + Cloud + Machine Learning, the system can:

Detect plant stress early

Reduce overwatering/underwatering

Enable data-driven plant care

## Key Features

- Real-time monitoring of soil moisture, temperature, and humidity
- Interactive dashboard for live sensor visualization
- Cloud-based data logging and analytics using ThingSpeak
- Decision Tree–based machine learning for plant health classification
- ESP32-based wireless data acquisition
- LED indicators for immediate health status feedback
- Dataset generation for machine learning training

 ## Tech Stack

### Programming Languages
- Python
- JavaScript
- HTML5
- CSS3

### IoT & Cloud
- ESP32
- ThingSpeak

### Machine Learning
- scikit-learn
- pandas

### Hardware
- Soil Moisture Sensor
- DHT11
- LEDs
 
 📂 Project Structure
Smart-Plant-Health-Monitor/
│
├── Arduino_Code/
│   └── smart_plant_monitor.ino
│
├── ML/
│   ├── Smart_Plant_Sensor_Dataset.xlsx
│   └── train_model.py
│
├── Dashboard/
│   └── index.html
│
├── Images/
│   ├── Hardware setup
│   ├── Serial Monitor outputs
│   └── ThingSpeak dashboards
│
└── README.md

## System Workflow

Sensors collect data
↓

ESP32 processes sensor readings and updates LED status

↓

Sensor data is transmitted to ThingSpeak

↓

ThingSpeak stores historical readings

↓

Decision Tree model classifies plant condition

↓

Dashboard visualizes live data and trends

## Machine Learning

The project uses a supervised Decision Tree classifier trained on sensor data collected from the monitoring system.

Input Features
- Soil Moisture
- Temperature
- Humidity

Output Classes
- Dry
- Moist
- Wet

## Demo Link: https://drive.google.com/file/d/1Gtw55avt31PannVgabQe77Y-HSKFHCko/view?usp=drivesdk

## Results
## Results

The system successfully demonstrated:

- Real-time monitoring of environmental conditions
- Cloud-based data collection and visualization
- Machine learning–based plant health classification
- Automated visual feedback using LED indicators
- End-to-end IoT to cloud monitoring workflow

## Future Improvements

- Mobile application support
- Predictive irrigation recommendations
- Multi-plant monitoring
- Database integration for long-term analytics
- User authentication and historical reports

## Conclusion

This project demonstrates a complete smart agriculture pipeline combining hardware, cloud computing, data analytics, and machine learning.
It is cost-effective, scalable, and practical, making it suitable for real-world agricultural and smart home applications.

## Author
Manasvi

Project: Smart Plant Health Monitor


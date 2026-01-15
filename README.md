🌱 Smart Plant Health Monitor

An end-to-end IoT + Machine Learning based Smart Plant Health Monitoring System that continuously monitors soil moisture, temperature, and humidity to determine plant health in real time.
The system combines ESP32-based sensing, cloud data aggregation (ThingSpeak), ML-based classification, LED-based feedback, and a web dashboard for visualization.

## Project Motivation

Manual plant monitoring is inefficient, subjective, and error-prone. This project aims to provide a low-cost, automated, and scalable solution to monitor plant health using real-time sensor data and intelligent decision-making.

By integrating IoT + Cloud + Machine Learning, the system can:

Detect plant stress early

Reduce overwatering/underwatering

Enable data-driven plant care

## Key Features

🌡️ Real-time sensing using Soil Moisture sensor and DHT11 (Temperature & Humidity)

📡 ESP32-based IoT system with Wi-Fi connectivity

☁️ Cloud data logging & visualization using ThingSpeak

🤖 Machine Learning (Decision Tree – Supervised Learning) for plant condition classification

🚦 LED-based visual feedback

🔴 Red → Dry

🟡 Yellow → Moist

🟢 Green → Wet

📊 Custom HTML/CSS Dashboard for live data monitoring

📁 Clean dataset generation for ML training

## Hardware Components Used

ESP32 Development Board

Soil Moisture Sensor (Analog)

DHT11 Temperature & Humidity Sensor

Breadboard

LEDs (Red, Yellow, Green)

Resistors (220Ω / 330Ω)

Jumper Wires

USB Cable

## Software & Tools

Arduino IDE

Python 3.x

Libraries:

pandas

scikit-learn

matplotlib (optional)

ThingSpeak Cloud Platform

HTML, CSS, JavaScript (Dashboard)

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

Sensors collect soil moisture, temperature, and humidity data

ESP32 reads sensor values and:

Controls LEDs based on thresholds

Sends data to ThingSpeak

ThingSpeak stores and visualizes real-time data

Dataset is exported from ThingSpeak / Serial Monitor

ML Model is trained using labeled data

Decision Tree classifies plant condition (Dry / Moist / Wet)

Dashboard displays live sensor data and trends

## Machine Learning Approach

Type: Supervised Learning

Algorithm: Decision Tree Classifier

Input Features:

Soil Moisture

Temperature

Humidity

Output Classes:

Dry

Moist

Wet

The trained model learns decision boundaries from real sensor data and generates interpretable rules for classification.

## How to Run the Project
1️⃣ Arduino Setup

Open Arduino_Code/smart_plant_monitor.ino in Arduino IDE

Select:

Board: ESP32 Dev Module

Correct COM Port

Update the following in the code:

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
const char* apiKey = "YOUR_THINGSPEAK_WRITE_API_KEY";


Upload the code to ESP32

2️⃣ ThingSpeak Setup

Create a ThingSpeak account

Create a new channel

Add fields:

Field 1 → Soil Moisture

Field 2 → Temperature

Field 3 → Humidity

Copy the Write API Key into Arduino code

Observe real-time graphs updating every few seconds

3️⃣ Machine Learning Training

Navigate to the ML folder

Install required libraries:

pip install pandas scikit-learn


Run the training script:

python train_model.py


View model accuracy and learned decision rules in terminal

4️⃣ Dashboard Setup

Open Dashboard/index.html

Replace:

const channelID = "YOUR_CHANNEL_ID";


Open the file in a browser

View live sensor data in a clean, professional dashboard

## Demo Link: https://drive.google.com/file/d/1Gtw55avt31PannVgabQe77Y-HSKFHCko/view?usp=drivesdk

## Outputs & Results

Real-time ThingSpeak graphs for all sensors

Accurate ML-based classification

Clear LED indications for plant health

Exportable dataset for analysis

Fully working IoT → Cloud → ML pipeline

## Future Enhancements

Mobile app integration

Predictive watering recommendations

Multiple plant support

Database integration (Firebase / MongoDB)

## Conclusion

This project demonstrates a complete smart agriculture pipeline combining hardware, cloud computing, data analytics, and machine learning.
It is cost-effective, scalable, and practical, making it suitable for real-world agricultural and smart home applications.

## Author
Manasvi

Project: Smart Plant Health Monitor


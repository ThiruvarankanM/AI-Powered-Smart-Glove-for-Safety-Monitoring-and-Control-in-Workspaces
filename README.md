# AI-Powered Smart Glove for Safety Monitoring

An intelligent safety glove system designed to protect industrial workers by identifying environmental and physical hazards in real-time. Uses AI, embedded sensors, and cloud analytics for comprehensive workplace safety monitoring.

## Demo

[![Demo Video](https://img.youtube.com/vi/b_JVvI8ynJI/0.jpg)](https://youtu.be/b_JVvI8ynJI)

**[Watch Live Demo](https://youtu.be/b_JVvI8ynJI)**

## Features

- Real-time hazard detection: gas leaks, high temperature, heavy lifting, dangerous falls
- Immediate alerts via vibration motor and LED indicators
- Automated email alerts to emergency contacts via SMTP
- Four types of fall detection: Free Fall, Impact Fall, Normal Fall, Unconscious Fall
- Firebase Realtime Database integration with 5-second data logging
- Machine learning risk classification (0-10 scale) via Google Colab
- CSV data export for analytics and model training

## Hardware Components

**Sensors:**
- LM35 Temperature Sensor
- MQ-2 Gas Sensor (smoke/toxic gas detection)
- MPU6050 Accelerometer and Gyroscope (fall detection)
- Custom Force Sensor (optical-based overload detection)

**Actuators:**
- Vibration Motor (haptic feedback)
- LED Indicators (visual alerts)

## Software Stack

- **LabVIEW** - Main control system for data acquisition and processing
- **Arduino IDE** - Accelerometer data transmission programming
- **NI DAQ** - Analog sensor interfacing
- **Python** - Data filtering and Firebase integration
- **Google Colab** - Machine learning model training
- **Firebase Realtime Database** - Cloud data storage
- **SMTP** - Automated email alert system

## System Operation

1. **Real-time Monitoring**: LabVIEW reads sensor data from NI DAQ and Arduino
2. **Threshold Analysis**: Case structures and OR gates check hazard conditions
3. **Alert System**: Vibration motor and LEDs activate for immediate warnings
4. **Emergency Notification**: Email alerts sent to family/emergency contacts
5. **Data Logging**: Sensor data uploaded to Firebase every 5 seconds in JSON format
6. **ML Analysis**: CSV files generated for machine learning risk classification

## Safety Detection

- High Temperature Exposure
- Toxic Gas Detection
- Heavy Load Lifting
- Fall Detection with Unconsciousness Monitoring
- Predictive Risk Assessment (0-10 scale)

## Target Applications

- Construction Sites
- Chemical Factories
- Mining Operations
- Heavy Manufacturing Units

## Development Team

- Thiruvarankan Mathurakaran
- Thineth Sadeepa
- Mathusayini Thayalanesan

## License

MIT License

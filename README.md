# AI-Powered Smart Glove for Safety Monitoring & Control in Workspaces

This project presents an intelligent safety glove system designed to protect industrial workers by identifying and alerting them to environmental and physical hazards in real time. By leveraging AI, embedded sensors, and cloud-based analytics, this glove serves as a reliable companion in high-risk work environments such as factories and construction sites.

---

## 📌 Overview

The **AI-powered smart glove** is an integrated wearable solution developed to monitor the surrounding environment and a worker’s physical state. It is equipped with multiple sensors to detect **dangerous gas levels, high temperatures, abnormal force levels, and types of physical falls**.

The glove provides **immediate alerts** through **LEDs and vibration motors** and sends **warning emails to the worker’s family** if critical conditions are detected. Sensor data is logged every 5 seconds to a **Firebase Realtime Database** in JSON format. This data is also exported as CSV files for use in machine learning workflows, such as those implemented on Google Colab, which help classify risk levels and improve safety predictions.

---

## 🔍 Key Features

* Real-time detection of multiple hazards: gas leaks, high temperature, heavy lifting, and dangerous falls  
* Immediate alerts using vibration motor and LED indicators  
* Smart email alert system via **SMTP** that notifies the worker’s family in critical cases  
* Four types of fall detection: **Free Fall, Impact Fall, Normal Fall, and Unconscious Fall**  
* Automated data upload to **Firebase Realtime Database** every 5 seconds using HTTP in JSON format  
* CSV data generation for machine learning analysis and training  
* Machine learning integration through Google Colab to classify risk levels based on sensor data  
* Modular, scalable system using both **Arduino** and **NI DAQ**  
* Real-time sensor filtering and logic implemented in **LabVIEW**  
* Fall detection logic includes elapsed time to check for unconsciousness  
* Custom-built force sensor for overload detection

---

## 🔧 Components Used

### 🔹 Sensors

* **LM35** – Temperature Sensor  
* **MQ-2** – Gas Sensor (for smoke/poisonous gas detection)  
* **MPU6050** – Accelerometer and Gyroscope (fall detection)  
* **Custom Force Sensor** – Optical-based sensor to detect load/overload  

### 🔹 Actuators

* **Vibration Motor** – Provides haptic feedback in hazard detection  
* **LED Indicators** – Visual alert signals  

---

## 🧠 Software & Tools

* **LabVIEW** – Main control hub for sensor data acquisition, processing, fall detection logic, and mail alert execution  
* **Arduino IDE** – Used to program Arduino to transmit accelerometer data  
* **NI DAQ** – Interfaces analog sensors (LM35, MQ-2, custom force sensor) with LabVIEW  
* **LINX in LabVIEW** – Fetches real-time linear acceleration and gyroscope data from Arduino  
* **Python** – Used for filtering sensor data, interfacing with Firebase, and generating CSV files  
* **Google Colab** – Used to run machine learning models on exported CSV data for risk classification  
* **Firebase Realtime Database** – Cloud platform to store sensor data at 5-second intervals in JSON format  
* **SMTP (Simple Mail Transfer Protocol)** – Sends automated email alerts to the worker’s family  

---

## ⚙️ How It Works

1. The glove is worn by the worker and all sensors are connected to **NI DAQ** and **Arduino**.  
2. **LabVIEW** initializes real-time monitoring by:  
   * Reading analog values from LM35, MQ-2, and Force Sensor via DAQ  
   * Receiving MPU6050 data via Arduino over LINX to detect falls  
   * Checking thresholds using **case structures** and **OR gates**  
   * Detecting if the worker is **unconscious** using **elapsed time function**  
3. If any hazard is detected:  
   * The **vibration motor and LEDs activate immediately**  
   * An **email alert** is sent to the family with a message like:  
     *"The worker may be in danger at the workplace. Please call and check their condition."*  
4. Sensor data is sent every **5 seconds** to Firebase in JSON format using HTTP  
5. CSV files are generated regularly from the collected data for offline analysis and machine learning on Google Colab  
6. Machine learning models analyze the data to classify the risk level from **0 (safe)** to **10 (critical)**, helping improve predictive safety alerts  

---

## 🧪 Safety Events Detected

* **High Temperature**  
* **Toxic Gas Exposure**  
* **Heavy Load (Overweight Lifting)**  
* **Fall Detection**:  
  * **Free Fall**  
  * **Impact Fall**  
  * **Normal Fall**  
  * **Unconsciousness** (detected by time without movement)  

---

## 👷 Intended Use

This system is ideal for workers in high-risk environments such as:  

* Construction Sites  
* Chemical Factories  
* Mining Areas  
* Heavy Manufacturing Units  

---

## 👨‍💻 Developed By

**Thiruvarankan Mathurakaran**  
**Thineth Sadeepa**  
**Mathusayini Thayalanesan**

---

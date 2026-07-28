# 🤖 Obstacle Detection Simulator V1.5

An Arduino-based obstacle detection system built in **Tinkercad** using the **HC-SR04 Ultrasonic Sensor**. The system continuously measures the distance to nearby objects and provides visual, audible, and serial monitor feedback based on the detected distance.

---

## 📌 Project Overview

This project simulates an obstacle detection system similar to those used in parking assistance and basic robotic navigation. The Arduino reads distance data from an HC-SR04 ultrasonic sensor and classifies the surroundings into three safety zones.

---

## ✨ Features

- 📏 Continuous distance measurement using the HC-SR04 Ultrasonic Sensor.
- 🟢 Green LED indicates a **SAFE** zone.
- 🟡 Yellow LED indicates a **WARNING** zone.
- 🔴 Red LED indicates a **DANGER** zone.
- 🔔 Slow buzzer beeps in the warning zone.
- 🚨 Fast buzzer beeps in the danger zone.
- 💻 Live distance and status updates through the Serial Monitor.
- ⚠️ Displays an **Invalid Reading** message when no valid distance is available.

---

## 🛠 Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Green LED
- Yellow LED
- Red LED
- Active Buzzer
- 3 × 220 Ω Resistors
- Breadboard
- Jumper Wires

---

## 📊 Safety Zones

| Distance | Status | LED | Buzzer |
|----------|--------|-----|--------|
| Greater than 30 cm | SAFE | 🟢 Green | OFF |
| 15–30 cm | WARNING | 🟡 Yellow | Slow Beep |
| 0–15 cm | DANGER | 🔴 Red | Fast Beep |
| Invalid Reading | Invalid Reading | All LEDs OFF | OFF |

---

## ⚙️ Working Principle

1. Arduino sends a **10 µs trigger pulse** to the HC-SR04.
2. The sensor emits ultrasonic waves.
3. The waves reflect from an obstacle and return to the sensor.
4. Arduino measures the echo time using `pulseIn()`.
5. The distance is calculated.
6. The Arduino determines the appropriate safety zone.
7. LEDs, buzzer, and Serial Monitor are updated continuously.

---

## 📷 Project Preview

### 🔧 Circuit Diagram

![Circuit](Images/Circuit.png)

### 🟢 SAFE Mode

![Safe Mode](Images/Safe_Mode.png)

### 🟡 WARNING Mode

![Warning Mode](Images/Warning_Mode.png)

### 🔴 DANGER Mode

![Danger Mode](Images/Danger_Mode.png)

### 💻 Serial Monitor

![Serial Monitor](Images/SerialMonitor.png)

---

## 🎥 Demo Video

Place your demonstration video in the `Videos` folder.

```
Videos/Demo.mp4
```

---

## 📁 Repository Structure

```text
Obstacle-Detection-Simulator/
│
├── Code/
│   └── Obstacle_Detection_Simulator.ino
│
├── Images/
│   ├── Circuit.png
│   ├── Safe_Mode.png
│   ├── Warning_Mode.png
│   ├── Danger_Mode.png
│   └── SerialMonitor.png
│
├── Videos/
│   └── Demo.mp4
│
├── README.md
├── LICENSE
└── .gitignore
```

---

## 📚 Concepts Practiced

- Arduino Programming
- Digital Input and Output
- Ultrasonic Distance Measurement
- Conditional Statements (`if`, `else if`, `else`)
- Serial Communication
- Sensor Interfacing
- Embedded System Logic
- Robotics Fundamentals

---

## ⚠️ Known Limitation

The HC-SR04 sensor has a minimum measuring distance of approximately **2 cm**. In Tinkercad, placing an object closer than this minimum distance may produce an invalid large distance value instead of a valid measurement. In this version, such readings may be interpreted as **SAFE** because they exceed the defined safe threshold. This behavior is a limitation of the simulator and will be improved in a future version.

---

## 🚀 Future Improvements

- Replace `delay()` with `millis()` for non-blocking buzzer control.
- Improve handling of invalid sensor readings.
- Add an LCD or OLED display.
- Add servo motor scanning for wider obstacle detection.
- Convert the project into an autonomous obstacle-avoiding robot.

---

## 👨‍💻 Author

**Moksh**

Built as part of my Arduino and Robotics learning journey using Tinkercad.

# 🤖 Obstacle Detection Simulator V1.5

An Arduino-based obstacle detection system built in **Tinkercad** using the **HC-SR04 Ultrasonic Sensor**. The system continuously measures the distance to nearby objects and provides visual, audible, and serial monitor feedback based on the detected distance.

---

## 📌 Project Overview

This project simulates an obstacle detection system similar to those used in parking assistance systems and basic robotic navigation. The Arduino continuously reads distance data from the HC-SR04 ultrasonic sensor and classifies the surroundings into different safety zones.

---

## ✨ Features

- 📏 Continuous distance measurement using the HC-SR04 Ultrasonic Sensor.
- 🟢 Green LED indicates the **SAFE** zone.
- 🟡 Yellow LED indicates the **WARNING** zone.
- 🔴 Red LED indicates the **DANGER** zone.
- 🔔 Slow buzzer beeps in the warning zone.
- 🚨 Fast buzzer beeps in the danger zone.
- 💻 Displays live distance and status updates on the Serial Monitor.
- ⚠️ Detects invalid sensor readings and displays an appropriate message.

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
| Greater than **30 cm** | SAFE | 🟢 Green | OFF |
| **15–30 cm** | WARNING | 🟡 Yellow | Slow Beep |
| **0–15 cm** | DANGER | 🔴 Red | Fast Beep |
| Invalid Reading | Invalid Reading | All LEDs OFF | OFF |

---

## ⚙️ Working Principle

1. Arduino sends a **10 µs trigger pulse** to the HC-SR04 ultrasonic sensor.
2. The sensor emits ultrasonic waves.
3. The waves strike an obstacle and reflect back.
4. Arduino measures the echo pulse duration using `pulseIn()`.
5. The measured time is converted into distance.
6. The Arduino compares the distance with predefined safety thresholds.
7. LEDs, buzzer, and Serial Monitor are updated according to the detected zone.

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
- Embedded Systems Basics
- Robotics Fundamentals

---

## ⚠️ Known Limitation

The HC-SR04 ultrasonic sensor has a minimum measuring distance of approximately **2 cm**. In Tinkercad, placing an object closer than this minimum distance may produce an unusually large distance value instead of a valid measurement. In this version, such readings may be interpreted as **SAFE** because they exceed the defined safe threshold. This behavior is a limitation of the simulator and will be improved in future versions.

---

## 🚀 Future Improvements

- Replace `delay()` with `millis()` for non-blocking buzzer control.
- Improve handling of invalid sensor readings.
- Add an LCD or OLED display.
- Add servo motor scanning for wider obstacle detection.
- Convert the project into an autonomous obstacle-avoiding robot.
- Add configurable distance thresholds using buttons or a potentiometer.

---

## 👨‍💻 Author

**Moksh**

Built as part of my Arduino and Robotics learning journey using Tinkercad.

# ClothMATE - Smart Automated Clothesline System

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)

## 📌 Overview

**ClothMATE** is an automated home system that detects rain and automatically retracts your clothesline to protect drying laundry from unexpected weather changes. Built as a Year 1 project for IT1040 - Fundamentals of Computing at SLIIT.

## 🎯 Problem Solved

- Unpredictable weather damages outdoor laundry
- Manual clothesline operation is time-consuming
- People with busy schedules can't monitor weather constantly

## 🔧 Features

- 🌧️ **Rain Detection** - Rain sensor detects moisture instantly
- 🤖 **Automatic Retraction** - Motor retracts clothesline when rain is detected
- 🔄 **Auto-Extension** - Extends back when weather clears
- 📱 **Serial Monitor Feedback** - Real-time status updates

## 🧰 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Rain Sensor Module | 1 |
| 4-Channel Relay Module | 1 |
| DC Motor | 1 |
| 12V Power Supply | 1 |
| Jumper Wires | As needed |

## 📊 How It Works
┌─────────────┐ ┌─────────────┐ ┌─────────────┐
│ Rain Sensor │────▶│ Arduino │────▶│ Relay │
│ (Input) │ │ (Brain) │ │ (Switch) │
└─────────────┘ └─────────────┘ └──────┬──────┘
│
▼
┌─────────────┐
│ DC Motor │
│ (Actuator) │
└─────────────┘


## 🚀 Getting Started

### Prerequisites
- Arduino IDE installed
- USB cable for Arduino

### Setup Instructions

1. **Connect components:**
   - Rain sensor VCC → Arduino 5V
   - Rain sensor GND → Arduino GND
   - Rain sensor DO → Arduino pin 10

2. **Connect relays:**
   - Relay 1 (Extend) → Arduino pin 13
   - Relay 2 → Arduino pin 12
   - Relay 3 (Retract) → Arduino pin 11

3. **Upload the code:**
   - Open `finalcode_copy_20260525190127.ino` in Arduino IDE
   - Select Board: Arduino Uno
   - Select correct Port
   - Click Upload

## 📹 Demo

[Click here to watch the demo video](Video/ClothMATE-demo.mp4)

## 📚 Documentation

- [Proposal Document](./Documentation/Proposal-Report.pdf)
- [Progress Report](./Documentation/Progress-Report.pdf)
- [Presentation Slides](./Presentation/Automated-Cloth-Line-Project (ClothMATE).pptx)

## 👥 Team Members (Group 1.2/18)

| IT Number | Name |
|-----------|------|
| IT24100239 | Disanayaka D.M.C.N |
| IT24102276 | Kaldera H.P.I.D |
| IT24101177 | Bodini G.V.E.J |
| IT24102482 | Jayathilaka D.L.T.S |
| IT24101092 | Perera K.P.V.S |
| IT24101893 | Ranasinghe N.A |

## 📅 Course Information

- **Course:** IT1040 - Fundamentals of Computing
- **Year/Semester:** Year 1, Semester 1 - 2024
- **Institution:** Sri Lanka Institute of Information Technology (SLIIT)

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- SLIIT Faculty for guidance
- Arduino community for resources

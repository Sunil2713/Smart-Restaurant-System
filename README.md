# 🍽️ Smart Restaurant System

A comprehensive automation solution for restaurants that combines RF-based ordering, line-following robots, and intelligent dish delivery to enhance customer experience and reduce staff workload.

## 📋 Table of Contents
- [Overview](#overview)
- [Features](#features)
- [System Architecture](#system-architecture)
- [Components](#components)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation & Setup](#installation--setup)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Technical Details](#technical-details)
- [Applications](#applications)
- [Contributing](#contributing)

## 🎯 Overview

The Smart Restaurant System is an innovative automation solution designed to revolutionize restaurant operations. It consists of three main components:

1. **RF Transmitter with Keypad** - For automated order taking
2. **RF Receiver with LCD Display** - For order display and kitchen communication
3. **Line-Following Robot** - For automated dish delivery

This system eliminates manual order-taking errors, reduces staff workload, and improves overall customer satisfaction through seamless automation.

## ✨ Features

- **Automated Order Taking**: 4x4 matrix keypad with RF transmission
- **Real-time Order Display**: LCD screen for kitchen staff
- **Intelligent Robot Delivery**: Line-following robot with IR sensors
- **Error Elimination**: Reduces human error in order processing
- **Staff Efficiency**: Works with limited staff requirements
- **Customer Satisfaction**: Faster and more accurate service

## 🏗️ System Architecture

### Block Diagram Components:

1. **RF Transmitter Circuit with 4x4 Matrix Keypad**
   - Arduino-based keypad interface
   - RF transmission module
   - Menu item mapping

2. **RF Receiver Circuit with LCD Screen**
   - RF reception module
   - I2C LCD display
   - Order processing

3. **Line Robot Circuit**
   - IR proximity sensors
   - Motor control system
   - Line following algorithm

## 🔧 Components

### Hardware Components:
- **Arduino Boards** (3x) - Main controllers
- **4x4 Matrix Keypad** - Order input interface
- **RF Transmitter/Receiver Modules** - Wireless communication
- **I2C LCD Display** - Order display
- **IR Proximity Sensors** (3x) - Robot navigation
- **L298N Motor Driver** - Robot motor control
- **DC Motors** (2x) - Robot movement
- **Chassis & Wheels** - Robot body

### Software Libraries:
- `Keypad.h` - Keypad interface
- `RH_ASK.h` - RF communication
- `LiquidCrystal_I2C.h` - LCD display
- `Wire.h` - I2C communication
- `SPI.h` - Serial communication

## 📦 Hardware Requirements

### For RF Transmitter:
- Arduino Uno/Nano
- 4x4 Matrix Keypad
- RF Transmitter Module (433MHz)
- Connecting wires

### For RF Receiver:
- Arduino Uno/Nano
- RF Receiver Module (433MHz)
- I2C LCD Display (16x2)
- Connecting wires

### For Line Robot:
- Arduino Uno/Nano
- L298N Motor Driver
- 2x DC Motors with wheels
- 2x IR Proximity Sensors
- Robot chassis
- Power supply (9V battery)

## 💻 Software Requirements

- Arduino IDE (version 1.8.x or higher)
- Required Libraries:
  - Keypad Library
  - RadioHead ASK Library
  - LiquidCrystal I2C Library

## 🚀 Installation & Setup

### 1. Clone the Repository
```bash
git clone <repository-url>
cd Smart-Restaurant-System
```

### 2. Install Required Libraries
In Arduino IDE, go to `Tools > Manage Libraries` and install:
- Keypad by Mark Stanley
- RadioHead by Mike McCauley
- LiquidCrystal I2C by Frank de Brabander

### 3. Hardware Assembly

#### RF Transmitter Setup:
1. Connect 4x4 keypad to Arduino pins 2-9
2. Connect RF transmitter to Arduino
3. Upload `hoteltrans.ide.ino`

#### RF Receiver Setup:
1. Connect RF receiver to Arduino
2. Connect I2C LCD to Arduino (SDA, SCL, VCC, GND)
3. Upload `Receiver.ino`

#### Line Robot Setup:
1. Mount Arduino and motor driver on chassis
2. Connect IR sensors to A0 and A1
3. Connect motors to L298N driver
4. Upload `linerobot.ide.ino`

## 📖 Usage

### Order Taking Process:
1. Customer uses keypad to select menu items
2. RF transmitter sends order data wirelessly
3. Receiver displays order on LCD screen
4. Kitchen staff receives order notification

### Robot Delivery Process:
1. Robot follows black line on floor
2. IR sensors detect line direction
3. Robot navigates to designated table
4. Stops at destination for dish delivery

### Menu Items:
- **1**: Caesar Salad
- **2**: Bite-size Sandwich
- **3**: Mini Taco Quiches
- **4**: Pot Lemon Quinoa
- **5**: Spicy Lahori Paneer
- **6**: Bhindi with Butter Naan
- **7**: Chocolate Mousse
- **8**: Angel Food Cake
- **9**: Almond and Date Cake
- **0**: Menu selection guide
- **A**: Parcel
- **B**: Bill
- **C**: Table Clean
- **D**: Waiter

## 📁 Project Structure

```
Smart-Restaurant-System/
├── hoteltrans.ide/
│   └── hoteltrans.ide.ino          # RF Transmitter with Keypad
├── Receiver/
│   └── Receiver.ino                # RF Receiver with LCD
├── linerobot.ide/
│   └── linerobot.ide.ino           # Line Following Robot
├── SMART RESTAURANT PROJECT.pdf    # Project Documentation
├── SMART RESTAURANT PROJECT.jpg    # Project Image
└── README.md                       # This file
```

## 🔬 Technical Details

### RF Communication:
- Frequency: 433MHz
- Protocol: ASK (Amplitude Shift Keying)
- Range: Up to 100 meters (line of sight)

### Robot Navigation:
- **Forward**: Both sensors on white line
- **Turn Right**: Right sensor on black, left on white
- **Turn Left**: Left sensor on black, right on white
- **Stop**: Both sensors on black (destination reached)

### Motor Control:
- **Motor 1**: Right wheel (Pins: enA=10, in1=9, in2=8)
- **Motor 2**: Left wheel (Pins: enB=5, in3=7, in4=6)
- **Speed Control**: PWM-based speed regulation

## 🎯 Applications

### Primary Use Cases:
- **Restaurants**: Automated order taking and delivery
- **Cafeterias**: Self-service ordering systems
- **Food Courts**: Multi-vendor ordering platforms
- **Catering Services**: Large-scale event management

### Benefits:
- **Eliminates User Error**: Automated order processing
- **Works with Limited Staff**: Reduces manpower requirements
- **Improves Customer Satisfaction**: Faster and accurate service
- **Cost Effective**: Reduces operational costs
- **Scalable**: Easy to expand and modify

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

### How to Contribute:
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

## 📞 Contact

For questions or support, please open an issue in the repository.

---

**Note**: This project is designed for educational and demonstration purposes. For commercial deployment, additional safety measures and certifications may be required. 
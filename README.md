# Automated Lighting System Using ARM Cortex-A9

## Project Overview
This project is an IoT-based automated lighting system developed on the ARM Cortex-A9 microcontroller, designed to improve energy efficiency in households and public buildings. The system automatically controls lighting based on room occupancy using PIR sensors, and it includes options for manual control, remote access, and automated scheduling.

## Features
- **Motion Detection**: Uses two PIR sensors to detect entry and exit, ensuring lights are turned on or off based on room occupancy.
- **Manual Override**: Allows users to manually control lights with physical switches, giving flexibility alongside automation.
- **Remote Control**: Includes Wi-Fi control options for remote light access, allowing users to manage lighting even when away from home.
- **Vacation Mode**: Simulates occupancy by turning lights on/off at set times to deter unauthorized access when away.
- **Energy Efficiency**: Automatically turns off lights after a specified period (16 hours) if no occupancy is detected.

## System Architecture
1. **Input Components**:
   - **PIR Sensors**: Detect room entry and exit to control lighting.
   - **Physical Switches**: Serve as manual overrides for users.
   - **Wi-Fi Module**: ESP32/ESP8266 modules enable remote control.

2. **Output Components**:
   - **LED Lights**: Controlled via a dimmer for adjustable brightness.
   - **Control Board**: Uses relay modules to manage power based on user-defined schedules and motion detection.

3. **Microcontroller Selection**:  
   ARM Cortex-A9 was chosen for its superior performance, compatibility, and extensive development support. Alternative microcontrollers, such as MSP430 and 68HC12, were considered based on cost and functionality but did not meet all requirements for this project.

## Software Design
The software tracks room occupancy by counting entries and exits, managing light states based on the number of occupants. Features include:
- Real-time monitoring of PIR sensor data to adjust lighting.
- Manual mode for immediate on/off control.
- Scheduling via Wi-Fi module for automated control based on user-defined wake-up, sleep, and vacation modes.
- Safety feature to turn off lights after 16 hours without motion.

## Prototyping Results
The prototype, tested on an ARM development kit, demonstrates core functionalities, including:
- **Automated and Manual Control**: Lights respond to occupancy and can be controlled manually.
- **Time-Based Control**: Vacation mode and automated schedules work as expected.
- **Override Safety**: System defaults to manual mode if physical switches are used, ensuring user control over automation.

## Conclusion
This project provided valuable experience in balancing software and hardware solutions, prioritizing energy efficiency, sustainability, and functionality. While future versions could enhance occupancy accuracy with additional sensors, this prototype establishes a foundation for an effective, automated lighting system.

## Getting Started
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/automated-lighting-system.git
   cd automated-lighting-system

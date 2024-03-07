# BLINKING LED PROJECT USING ARDUINO
## Date
5th March,2024
## Written By
@BoluBiyi03 (https://github.com/BoluBiyi03)
## Collaborated with
@zadvajr(https://github.com/zadvajr)
## Introduction
### Purpose
The purpose of this project is to create a system that allows the LED to come on for half a second and goes off for half a second then repeat the process again with a delay of 1 second each instead of the previous 0.5 second.
## Required Hardware
The basic required hardware or tools are just three and they are;
1) Arduino Board 
2) Yellow LED
3) 220 ohms resistor

## Schematic Design
!(schematic capture)(https://drive.google.com/file/d/1G4eeNPq1NZJu3UplKzJJ6KO6lST_P5rf/view?usp=sharing)
## Source Code
```
/*
This is my led blink project
It blinks an led for a second and turn it off for another second
*/

const int led_pin = 13; //output pin 13

void setup() {

  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin, HIGH);
  delay(500);
  digitalWrite(led_pin, LOW);
  delay(500);
  digitalWrite(led_pin, HIGH);
  delay(1000);
  digitalWrite(led_pin, LOW);
  delay(1000);

}
```
## HEX file
[text](../blink_led/blink_led_sketch/blink_led_sketch.ino.hex)

## Output
!(arduino board)(https://drive.google.com/file/d/1Bknc2SETcQdaZ_DlWMmSU0a796EK26FB/view?usp=sharing)
!(arduino visual output)(https://drive.google.com/file/d/10QubbPeABzxLFT3OtzgukBICE6O11Cn0/view?usp=sharing)

## Summary and Conclusion
The **Blinking LED project using Arduino** is a simple yet effective demonstration of LED blinking using Arduino. This basic setup showcases the fundamental principles of programming and hardware interaction, making it an ideal starting point for beginners in electronics and programming.          In conclusion, the blinking LED project using Arduino provides an accessible entry into the world of microcontroller-based projects. Its simplicity serves as a foundation for learning, allowing enthusiasts to grasp key concepts and build a solid understanding of Arduino programming and hardware interfacing.


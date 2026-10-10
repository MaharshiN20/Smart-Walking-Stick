[README_Smart-Walking-Stick.md](https://github.com/user-attachments/files/33291454/README_Smart-Walking-Stick.md)
# Smart Walking Stick

An obstacle-alert walking stick for visually impaired users. An ultrasonic sensor measures the distance ahead, and when something gets close, the stick warns the user with both a buzzer and a vibration motor, so the alert works in noisy places too.

<!-- Add a photo of the stick here, e.g.: ![Smart walking stick](media/stick.jpg) -->

## How it works

1. Each loop, the Arduino sends a 10 µs trigger pulse to the ultrasonic sensor.
2. It times the echo with `pulseIn()` and converts it to distance: `distance = duration × 0.034 / 2` (cm).
3. If an obstacle is **15 cm or closer**, the buzzer and vibration motor turn on. Otherwise both stay off.
4. The distance is printed to the serial monitor for debugging.

## Hardware

| Component | Pin |
|---|---|
| Ultrasonic trigger | 9 |
| Ultrasonic echo | 10 |
| Vibration motor | 11 |
| Buzzer | 13 |

- Arduino Uno
- HC-SR04 ultrasonic sensor
- Vibration motor
- Piezo buzzer
- Cane or stick to mount everything on

## Running it

1. Wire the components as shown above.
2. Open `Smart-Walking-Stick.ino` in the Arduino IDE.
3. Upload to the Uno.
4. Open the Serial Monitor at 9600 baud to see live distance readings.

## Possible improvements

- Make the vibration stronger or faster as obstacles get closer, instead of a single on/off threshold
- Add a second sensor angled downward to catch drop-offs and stairs
- Run it from a rechargeable battery pack

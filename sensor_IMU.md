# Sensors

In order to function, a robot must sense its physical location /
orientation, and apply physical actions to make the desired
movements.

In this lesson, we will learn about gyroscopes, which are used to
sense rotations in robots, mobile phones, and other fancy gizmos that
young people buy. 


# Connecting the gyroscope sensor to the Arduino

Attach the sensor to the breadboard with jumper wires. Make sure that
someone from the lab looks at your connections before you plug the
Arduino into the USB port!  

| Sensor  | Arduino Uno |
|---------|-------------|
| VDD     | 3.3 V       |
| GND     | GND         |
| INT     | 2           |
| SCL     | A5          |
| SDA     | A4          |
| VIO     | 3.3 V       |

# The code

Code for this lesson is in `Sensor_IMU.ino`. As is common with
hardware devices, the code is fairly complex. (Indeed, many hardware
codes require a huge number of obscure commands to turn the device
on, and then another set of commands to make sure it has not caught
fire, etc.)

Typically, however, we are really only interested in the following
lines near the end of the `loop` function:
```
mpu.dmpGetQuaternion(&q, fifoBuffer);
mpu.dmpGetEuler(euler, &q);		
            
Serial.print("Angles\t");
Serial.print(euler[0] * 180/M_PI,3);
Serial.print("\t");
Serial.print(euler[1] * 180/M_PI,3);
Serial.print("\t");
Serial.println(euler[2] * 180/M_PI,3);
```

These commands extract the *Euler angles*, (roll, pitch, and yaw), and
display them in the serial monitor.

Ask someone from the lab, and they can explain what roll, pitch, and
yaw by pretending they are an airplane.

# The data

Upload the code to the Arduino and view the data with the serial
monitor. (You may need to change the serial monitor baud rate to
38400 to see it.)

Rotate the board and see how the angles change. 
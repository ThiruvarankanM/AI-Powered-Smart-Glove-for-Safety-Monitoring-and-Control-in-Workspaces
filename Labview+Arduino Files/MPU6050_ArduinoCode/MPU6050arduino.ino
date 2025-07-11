#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);        // Start serial for LabVIEW
  Wire.begin();              // Join I2C bus
  mpu.initialize();          // Initialize MPU6050

  // Check if connection is successful
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while (1); // Stop here if failed
  }
  delay(1000); // Wait for sensor to settle
}

void loop() {
  int16_t ax, ay, az;

  mpu.getAcceleration(&ax, &ay, &az); // Get accel data

  // Send data as CSV: ax,ay,az
  Serial.print(ax);
  Serial.print(",");
  Serial.print(ay);
  Serial.print(",");
  Serial.println(az);

  delay(100); // Send every 100 ms
}

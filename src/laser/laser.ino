// -------------------------------------------------
// Copyright (c) 2023 HiBit <https://www.hibit.dev>
// -------------------------------------------------


#define LASER_PIN 13

void setup()
{
  pinMode(LASER_PIN, OUTPUT);

  Serial.begin(115200);
}

void loop()
{
  Serial.println("Turning laser ON");
  digitalWrite(LASER_PIN, HIGH);
  delay(3000); // Wait three seconds

  Serial.println("Turning laser OFF");
  digitalWrite(LASER_PIN, LOW);
  delay(3000); // Wait three seconds

}

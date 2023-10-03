/*
 * Air quality monitoring using ESP32 and MQ135
 * Author: Atoany Nazareth Fierro Radilla
 * github: https://github.com/AtoanyTec/IoT-TEC-UDD
 * 
 */

 #define pin_sensor A0

 int MQ135_data;
 int MQ135_THRESHOLD_1 = 1000; // Fresh Air threshold


void setup() {
  Serial.begin(115200);
  Serial.println("*****************************************************");
}

void loop() {
   MQ135_data = analogRead(pin_sensor); //Sensor reading

  if(MQ135_data < MQ135_THRESHOLD_1)
  {
    Serial.println("Fresh Air: ");
    } 
  else 
  {
    Serial.println("Poor Air: ");
  }

  Serial.println(MQ135_data); // analog data
  Serial.println(" PPM"); // Unit = part per million
  delay(500);

}

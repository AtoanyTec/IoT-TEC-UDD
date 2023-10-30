#define MQ135_THRESHOLD_1 1000 // Fresh Air threshold

int MQ135_sensor = 36; //Sensor is connected to the pin GPIO36


void setup() {
  pinMode (MQ135_sensor, INPUT);  //The pin is configured as input
  Serial.begin(9600);            //Serial communication speed

}

void loop() {
  int MQ135_data = analogRead(MQ135_sensor);  //Reading of the sensor

  //IF condition
  if(MQ135_data < MQ135_THRESHOLD_1)
  {
    Serial.println("Fresh Air: ");
    } 
    else 
    {
      Serial.println("Poor Air: ");
    }

}

int sensort = 36;           //Analogue pin where the temperature sensor is connected
int led = 32;               //Pin where the LED is connected
int temperature_value = 0;  //variable where the temperature reading is saved

void setup() {
  pinMode(led, OUTPUT);         //Pin led configured as output  
  pinMode (sensort, INPUT);     //Temperature sensor pin configured as input
  Serial.begin(9600);           //Serial Monitor Speed connection 
}

void loop() 
{
  temperature_value = analogRead(sensort);                 //Sensor reading
  temperature_value = (3.3 * tempC * 100.0)/1024.0;        // Voltage to Temperature conversion

  
  Serial.print ("Temperatura = ");      //Message printing in Serial Monitor
  Serial.println (temperature_value);   //Temperature value printing
  
  if (temperature_value >18)
  {
    digitalWrite(led,HIGH);             //Turning the LED on
    }
    else
    {
      digitalWrite(led,LOW);            //Turning the LED off     
    }
}




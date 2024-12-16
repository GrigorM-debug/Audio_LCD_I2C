#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  Serial.println("I2C Scanner");
}

void loop() {
  // put your main code here, to run repeatedly:
  byte error, address;
  int numberOfDevices;

  Serial.println("Scanning...");

  numberOfDevices = 0;

  for(address = 1; address < 127; address++)
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if(error == 0)
    {
      Serial.print("I2C device found at address 0x");

      if(address < 16)
      {
        Serial.print("0");
      }

      Serial.print(address, HEX);
      Serial.println("  !");

      numberOfDevices++;
    }
    else if(error == 4)
    {
      Serial.print("Unknown error at address 0x");

      if(address < 16)
      {
        Serial.print("0");
      }

      Serial.print(address, HEX);
    }
  }

  if(numberOfDevices == 0)
  {
    Serial.println("No I2C devices found");
  }
  else
  {
    Serial.println("Done");
  }

  delay(5000);
}

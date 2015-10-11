
#define NOFIELD 505L    // Analog output with no applied field, calibrate this

//Program to poll a Hall effect sensor and display the output in the serial port.

void setup()
{
  Serial.begin(9600);
}

void DoMeasurement()
{
// measure magnetic field
  int raw = analogRead(0);   // Range : 0..1024

  Serial.print(raw); // Serial.print converts numbers into their string representation
  Serial.print("=value\n");
}

void loop()
{
    //delay(500); //can put in an optional delay
    DoMeasurement();
}


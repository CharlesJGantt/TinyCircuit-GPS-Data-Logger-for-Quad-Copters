/**********************************************************
 * TinyCircuits Test Procedure
 * Tiny-Circuits.com
 *
 * This is the test program for the GPS TinyShield (ASD2501)
 * 
 **********************************************************/

#include <SoftwareSerial.h>

static const int GPS_ONOFFPin = A3;
static const int GPS_SYSONPin = A2;
static const int GPS_RXPin = A1;
static const int GPS_TXPin = A0;
static const int GPSBaud = 9600;
static const int chipSelect = 10;

// The GPS connection is attached with a software serial port
SoftwareSerial Gps_serial(GPS_RXPin, GPS_TXPin);

int led = 13;

void setup()
{  
  // Init the GPS Module to wake mode
  pinMode(GPS_SYSONPin, INPUT);
  pinMode(GPS_ONOFFPin, OUTPUT);
  digitalWrite( GPS_ONOFFPin, LOW );   
  delay(5); 
  if( digitalRead( GPS_SYSONPin ) == LOW )
  {
     // Need to wake the module
    digitalWrite( GPS_ONOFFPin, HIGH ); 
    delay(5); 
    digitalWrite( GPS_ONOFFPin, LOW );      
  } 
  
  // Open serial communications and wait for port to open:
  Serial.begin(9600);   
  pinMode(led, OUTPUT);    
  Gps_serial.begin(9600);
}

void loop()
{
  if (Gps_serial.available())
     Serial.write(Gps_serial.read());
}

TinyCircuit-GPS-Data-Logger-for-Quad-Copters
============================================

TinyCircuits GPS Data Logger 

This Repo contains files that can be used to copy the GPS Data Logger I built for tracking my multi-rotor helicopters during flight. The Arduino Code file is courtsy of Ken Burns from TinyCircuits and was adapted from his GPS Cat Logger tutorial written for Make.com. 


When using the Arduino code found in this repo, you will need to make slight adjustments to the Arduino SoftwareSerial Library (under Arduino>libraries>SoftwareSerial) the SoftwareSerial.h file needs a minor change to allow a larger serial buffer to be used. Replace the SoftwareSerial library files (SoftwareSerial.cpp and SoftwareSerial.h) with the ones found in this repo. 

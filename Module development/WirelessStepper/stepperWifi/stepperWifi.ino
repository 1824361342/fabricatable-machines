/*

Proof of concept Wifi controller for JMC closed loop integrated stepper motors iHSS60

See https://github.com/fellesverkstedet/fabricatable-machines/tree/master/Module%20development/WirelessStepper

and 

https://github.com/fellesverkstedet/fabricatable-machines

for doucmentation

MIT Licence - Jakob Nilsson 03.09.2019 Oslo

*/

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#ifndef STASSID
#define STASSID "NETGEAR65" // Wifi network to connect to
#define STAPSK  "precioustomato788" //Wifi password
#define ROVERNAME  "rolf" //name your rover, one word, no special letters or capital letters.
#endif

const char* ssid = STASSID;
const char* password = STAPSK;

//Stepper control
const byte stepPin = 5; //GPIO5 refernce D1
const byte dirPin = 4; //GPIO4 reference D2
const byte pulseLength = 5; //milliseconds this can be changed to min 2.5 micro sec
boolean stepDirection = 0;  
int stepCounter = 0;

ESP8266WebServer server(80);


void navigationPage(){
  // Webpage goes here
 server.send(200, "text/html", "<font size=\"40\"><a href=\"/forward\">Forward</a> <br> <a href=\"/backwards\">Backwards</a> <br> <br> <a href=\"/stop\">STOP</a></font>"); // <a href=\"/left\">Left</a> <br> <a href=\"/right\">Right</a> NOTE: \" = " in the webpage 
}
void handleRoot() {

  // Webpage goes here
 navigationPage();
 }

void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}




void setup(void) {
  Serial.begin(9600);

//stepper
pinMode(stepPin,OUTPUT);
pinMode(dirPin,OUTPUT);  
  
  //Wifi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin(ROVERNAME)) {
    Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);

  server.on("/forward", []() {
      Serial.print("forward"); 
      //Takes 1000 steps in 0 direction
      stepDirection = 0;
      stepCounter = 1000; 
      navigationPage();
  });


  server.on("/backwards", []() {
      Serial.print("backwards");
      //Takes 1000 steps in 1 direction
      stepDirection = 1;
      stepCounter = 1000;
      navigationPage();
  });

    server.on("/left", []() {
      Serial.print("left");
      navigationPage();
  });

    server.on("/right", []() {
Serial.print("right");
navigationPage();
  });

    server.on("/stop", []() {
Serial.print("stop");
 stepCounter = 0;
navigationPage();
  });

  server.onNotFound(handleNotFound);

  server.begin();
  Serial.println("HTTP server started");
}


void takeStep(){ //int steps, boolean dir
  if (stepCounter >0){ //Take one step
    digitalWrite(dirPin, stepDirection);
    digitalWrite(stepPin, HIGH);
    delay(pulseLength);
    digitalWrite(stepPin, LOW);
    stepCounter = stepCounter - 1;
  }
}


void loop(void) {
  server.handleClient();
  MDNS.update();
  takeStep();
}

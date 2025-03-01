#include <ESP8266WiFi.h>


void setup() {
  //Here is the Wifi Config

  Serial.begin(115200);
  
  WiFi.begin("UseMeIfYouCan", "012345678");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  //Here is the GPIO Config
  pinMode(2, OUTPUT);


};

void loop(){


  digitalWrite(2, HIGH);
  Serial.println("LED - OFF");
  delay(5000);

  digitalWrite(2, LOW);
  Serial.println("LED - ON");
  delay(5000);
};

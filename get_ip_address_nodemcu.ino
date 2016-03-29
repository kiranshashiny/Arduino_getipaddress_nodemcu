#include <ESP8266WiFi.h>
#define WLAN_SSID       "<Your_SSID_here>"
#define WLAN_PASS       "<Your_Password_here>"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // See the connection status in Serial Monitor

  Serial.print("\nConnecting to ");
  Serial.println(WLAN_SSID);

  WiFi.begin(WLAN_SSID, WLAN_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.print("\nLocal IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:
  

}

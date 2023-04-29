  #include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#ifndef STASSID
#define STASSID "421"
#define STAPSK  "111BablTop"
#endif

const char* ssid = STASSID;
const char* password = STAPSK;
ESP8266WebServer server(80); // включение сервера на порту:80

byte mac[6];                  // the MAC address of your Wifi shield

int i = 0;


 void headroot(void) // Процедура обработки запроса GET , "/"
 {
 server.send(200, "text/plain" , "Hellow the Web Server");
// Ответ сервера 200 ,  text/plain  значит текстовые данные (заголовок Content-Type)
 }
 
void ledon(void) // Процедура обработки запроса GET , "/"
 {
 server.send(200, "text/plain" , "Hellow the Web Server");
// Ответ сервера 200 ,  text/plain  значит текстовые данные (заголовок Content-Type)
 }


void setup(void) {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println(".");
    Serial.println(WiFi.status());
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println(" ");
  Serial.println("Hi, Serge!");
  Serial.println(" ");

  WiFi.macAddress(mac);
  Serial.print("MAC: ");
  Serial.print(mac[5],HEX);
  Serial.print(":");
  Serial.print(mac[4],HEX);
  Serial.print(":");
  Serial.print(mac[3],HEX);
  Serial.print(":");
  Serial.print(mac[2],HEX);
  Serial.print(":");
  Serial.print(mac[1],HEX);
  Serial.print(":");
  Serial.println(mac[0],HEX);
  Serial.println("Hi, Serge!");

  server.on("/",headroot); // Ответ сервера на запрос главной страницы
  server.begin(); //Запуск сервера
}

void loop () {
 server.handleClient(); //обработка текущих входящих HTTP-запросов 
 delay(1);
}

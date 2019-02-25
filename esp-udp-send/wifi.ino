void wifi_function()
{
  Serial.println();
 
  Serial.printf("Подключение к %s ", ssid);
            //  "Подключение к %s "
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  { 
    delay(500);
    Serial.print(".");
  }
  Serial.println(" подключено");
}

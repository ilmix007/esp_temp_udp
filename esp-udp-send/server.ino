void server_function(){
  // запускаем веб-сервер:
  server.begin();
  Serial.println("Web server running. Waiting for the ESP IP...");
              // "Веб-сервер запущен. Ожидание IP-адреса ESP..."
  delay(10000);
 
  // печатаем IP-адрес ESP:
  Serial.println(WiFi.localIP());
}

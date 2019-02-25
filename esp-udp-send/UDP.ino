void udp_send(){
  // отправляем ответ на IP-адрес и порт, с которых пришел пакет:
    Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
    //Udp.write(replyPacekt);
    dtostrf(getTemperature(), 2, 2, temperatureCString);
    
    Udp.write(temperatureCString);
    Udp.endPacket();
    Serial.println(getTemperature());
}

void udp_receive(int packetSize){
  
    // получаем входящие UDP-пакеты:
    Serial.printf("Received %d bytes from %s, port %d\n", packetSize, Udp.remoteIP().toString().c_str(), Udp.remotePort());
              //  "Получено %d байт от %s, порт %d%"
    int len = Udp.read(incomingPacket, 255);
    if (len > 0)
    {
      incomingPacket[len] = 0;
    }
    Serial.printf("UDP packet contents: %s\n", incomingPacket);
              //  "Содержимое UDP-пакета: %s"
    Serial.print("Преобразованное число + 1: ");
    Serial.println(atof(incomingPacket)+1);
              
}

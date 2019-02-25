float getTemperature() {
  float tempC = 22;
    DS18B20.requestTemperatures();
//    tempC = DS18B20.getTempCByIndex(0);
    return tempC;
/*  float tempF;
    do {
    DS18B20.requestTemperatures();
    tempC = DS18B20.getTempCByIndex(0);
    dtostrf(tempC, 2, 2, temperatureCString);
    tempF = DS18B20.getTempFByIndex(0);
    dtostrf(tempF, 3, 2, temperatureFString);
    delay(100);
  } while (tempC != 85.0 || tempC != (-127.0));*/
  
}

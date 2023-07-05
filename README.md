# ESP-IDF TFT_eSPI

## Description
ESP-IDF에서 TFT_eSPI 라이브러리 테스트   
ESP-IDF v4.4.5에서 테스트 진행   
[Arduino components](https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/esp-idf_component.html) 추가 필요   
   
## Commit
2023.07.05 - gif img 테스트 (duck 192 x 240)  

## Test Spec
```
ESP-IDF : v4.4.5
Chip : ESP32-WROOM-32
TFT LCD : ST7735
```    

## External Library
Library : [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI)   

## Setting
```
/*
 * Adafruit 1.3" 240x240 ST7789 Wide Angle TFT LCD display
 * Driver : ST7789 - 1
 * Resolution : 240 x 240
 * Color : BGR
 * MISO : NC
 * MOSI : 19
 * SCLK : 18
 * TFT_CS : 21
 * TFT_DC : 23
 * TFT_RST : 22
 * TFT_Lite : NC
*/
```    

[Dev91 Blog](https://dev91.tistory.com/)


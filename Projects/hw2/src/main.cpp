/*
 * @Author: lav1e2nrose 3341944494@qq.com
 * @Date: 2024-05-17 19:44:45
 * @LastEditors: lav1e2nrose 3341944494@qq.com
 * @LastEditTime: 2024-05-17 19:51:02
 * @FilePath: \hw2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

#define LED1 13
#define LED2 12

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  Serial.begin(9600);   
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void loop() {
  char recvChar;
  
  if(Serial.available() > 0) {
    recvChar = Serial.read();
  
    switch(recvChar) {
      case '1':
        if(digitalRead(LED1) == HIGH) {
          digitalWrite(LED1, LOW);
          Serial.println("LED1 灭");
        } else {
          digitalWrite(LED1, HIGH);
          Serial.println("LED1 亮");
        }
        break;
      case '2':
        if(digitalRead(LED2) == HIGH) {
          digitalWrite(LED2, LOW);
          Serial.println("LED2 灭");
        } else {
          digitalWrite(LED2, HIGH);
          Serial.println("LED2 亮");
        }
        break;
      default:
        //不进行操作
        break;
    }
  }
}
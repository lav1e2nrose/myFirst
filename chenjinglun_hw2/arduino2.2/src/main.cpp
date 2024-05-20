/*
 * @Author: lav1e2nrose 3341944494@qq.com
 * @Date: 2024-05-17 19:56:41
 * @LastEditors: lav1e2nrose 3341944494@qq.com
 * @LastEditTime: 2024-05-17 19:57:53
 * @FilePath: \hw2.2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

#define PASSWORD_LENGTH 4

String correctPassword[PASSWORD_LENGTH] = {"AA", "BB", "CC", "AA"};
String inputPassword[PASSWORD_LENGTH];
int inputIndex = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String recvStr = Serial.readStringUntil('\n');
    recvStr.trim();  // 删除末尾的空格、换行符等

    if (recvStr == correctPassword[inputIndex]) {
      inputPassword[inputIndex] = recvStr;
      inputIndex++;

      if (inputIndex == PASSWORD_LENGTH) {
        Serial.println("密码正确");
        inputIndex = 0;  // 重置以便重新输入密码
      }
    } else {
      Serial.println("密码错误");
      inputIndex = 0;  // 错误发生时，输入密码重新开始
    }
  }
}
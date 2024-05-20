/*
 * @Author: lav1e2nrose 3341944494@qq.com
 * @Date: 2024-05-17 20:56:04
 * @LastEditors: lav1e2nrose 3341944494@qq.com
 * @LastEditTime: 2024-05-19 16:30:17
 * @FilePath: \hw3\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(3, 5, 10, 11, 12, 13);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hello world!");
  delay(1000);
  lcd.clear();
  delay(1000);
}

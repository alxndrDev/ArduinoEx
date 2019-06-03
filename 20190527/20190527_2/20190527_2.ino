#include <LedControl.h>

LedControl lc = LedControl(12, 11, 10, 1);
 
// 8X8로 X자를 표시할 수 있는 배열을 생성합니다.(1은 켜짐, 0은 꺼짐)
byte a[8] = { B10000001, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B10000001};
 
// 실행시 가장 먼저 호출되는 함수이며, 최초 1회만 실행됩니다.
// 변수를 선언하거나 초기화를 위한 코드를 포함합니다.
void setup()
{
  // 도트매트릭스의 절전모드를 꺼줍니다.
  lc.shutdown(0, false);
 
  // 도트매트릭스의 LED 밝기를 8로 지정해 줍니다.(0~15)
  lc.setIntensity(0, 8);
 
  // 도트매트릭스의 LED를 초기화 해줍니다.
  lc.clearDisplay(0);
}
 
 
// setup() 함수가 호출된 이후, loop() 함수가 호출되며,
// 블록 안의 코드를 무한히 반복 실행됩니다.
void loop()
{
  // 도트매트릭스의 LED를 첫 행부터 차례대로 켭니다.
  for (int row = 0; row < 8; row++)
  {
    lc.setRow(0, row, a[row]);  // 도트매트릭스의 LED를 행단위로 위부터 켭니다.
    delay(25);
  }
}

#include "chessboard.h"
#include <iostream>

int main() {
  Figure test('A', '1');
  std::cout<<test.x<<test.y<<std::endl;
  return 0;
}

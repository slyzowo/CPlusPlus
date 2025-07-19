#include <iostream>
using std::cout;

int main(){

/*
  Bitwise Operators, Special operators used in bit level programming

  &  = AND
  |  = OR
  ^  = XOR (exclusive or)
  << = left shift
  >> = right shift
*/

  int x = 6;  // 0000 0110
  int y = 12; // 0000 1100
  int z = 0;  // 0000 0000 -> 0000 0010 = 4
  z = x & y;
  cout << "AND = " << z << '\n';

  x = 6;  // 0000 0110
  y = 12; // 0000 1100
  z = 0;  // 0000 0000 -> 0000 1110 = 14
  z = x | y;
  cout << "OR = " << z << '\n';

  x = 6;  // 0000 0110
  y = 12; // 0000 1100
  z = 0;  // 0000 0000 -> 0000 1010 = 10
  z = x ^ y;
  cout << "XOR = " << z << '\n';

  x = 6;  // 0000 0110
  z = 0;  // 0000 0000 -> 0001 1000 = 24
  z = x << 2;
  cout << "Left Shift = " << z << '\n';

  x = 6;  // 0000 0110
  z = 0;  // 0000 0000 -> 0000 0011 = 3
  z = x >> 1;
  cout << "Right Shift = " << z << '\n';

return 0;
}
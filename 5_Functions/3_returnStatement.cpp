#include <iostream>
using std::cout;
using std::cin;

int squareArea(int length){
  int area = length * length;
  return area;
}

int main(){

  int result = squareArea(5);
  cout << result << '\n';

return 0;
}

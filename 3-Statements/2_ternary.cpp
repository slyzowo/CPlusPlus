#include <iostream>
using std::cout;

int main(){

  int min = 0;
  int x = 1;
  int y = 2;

  min = (x > y)? y : x;

  cout << min << '\n';

return 0;
}
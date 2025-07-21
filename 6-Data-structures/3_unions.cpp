#include <iostream>
using std::cout;
using std::cin;

union abc{
  int a;
  char b;
}var;


int main(){

  var.a = 65;

  cout << var.a << '\n';
  cout << var.b << '\n'; // 'A' is 65 in ASCII

return 0;
}
#include <iostream>
using std::cout;
using std::cin;

template <typename T>
T max(T x, T y){
  return (x > y) ? x : y;
}

int main(){

  cout << max(1, 3) << '\n';
  cout << max(1.2, 3.4) << '\n';
  cout << max('3', '5') << '\n';

return 0;
}
#include <iostream>
#include <ctime>
using std::cout;
using std::cin;

int main(){

  srand(time(NULL));

  int num = rand() % 6 + 1;
  // random-num / 6 then the remainder of that + 1 is our random number

  cout << num << '\n';

return 0;
}
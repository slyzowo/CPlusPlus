#include <iostream>
using std::cout;
using std::cin;

int main(){

  int number;

  do{
    cout << "Enter a positive number :" << '\n';
    cin >> number;
  } while (number < 0);

return 0;
}
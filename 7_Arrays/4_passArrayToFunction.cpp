#include <iostream>
using std::cout;
using std::cin;

double getTotal(double prices[], int size){
  double total = 0;

  for(int i = 0; i < size; i++){
    total += prices[i];
  }
  return total;
}

int main(){

  double prices[] = {50.99, 15.01, 64, 32};
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);

  cout << "$" << total << '\n';

return 0;
}
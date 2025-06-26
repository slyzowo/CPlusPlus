#include <iostream>
using std::cout;
using std::cin;

int main(){

  std::string foods[5];

  fill(foods, foods + 5, "pizza");

  for (std::string food : foods){
    std::cout << food << '\n';
  }
  

return 0;
}
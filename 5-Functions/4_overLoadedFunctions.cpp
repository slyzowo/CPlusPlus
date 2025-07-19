#include <iostream>
using std::cout;
using std::cin;

void bakePizza(){
  cout << "Here is your pizza" << '\n';
}

void bakePizza(std::string topping){
  cout << "Here is your " << topping << " pizza" << '\n';
}

int main(){

  bakePizza();
  bakePizza("chicken");

return 0;
}

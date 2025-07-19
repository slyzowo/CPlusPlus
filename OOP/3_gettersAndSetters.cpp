#include <iostream>
using std::cout;
using std::cin;

class Pizza{ 
  public :

  std::string topping1;
  std::string topping2;

  Pizza(std::string topping1){
    this -> topping1 = topping1;
  }

  Pizza(std::string topping1, std::string topping2){
    this -> topping1 = topping1;
    this -> topping2 = topping2;
  }

};

int main(){

  Pizza pizza1("pepperoni");
  cout << "Pizza 1 :" << pizza1.topping1 << '\n';
  
  Pizza pizza2("mushrooms", "peppers");
  cout << "Pizza 2 :" <<  pizza2.topping1 << '\n';
  cout << "Pizza 2 :" <<  pizza2.topping2 << '\n';


//  cout << pizza1. << '\n';
//  cout << pizza1. << '\n';

return 0;
}
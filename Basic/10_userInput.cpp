#include <iostream>

int main(){

  int age = 0;
  std::string pizza;
  std::string fullName;

  std::cout << "what is your full name?" << '\n';
  std::getline(std::cin >> std::ws, fullName);
  
  std::cout << fullName << " is your full name" << '\n';

  std::cout << "what is your favorite pizza?" << '\n';
  std::cin >> pizza;
  
  std::cout << pizza << " pizza is your favorite pizza" << '\n';
  
  std::cout << "what is your age?" << '\n';
  std::cin >> age;
  
  std::cout << age << " is your age" << '\n';


return 0;
}
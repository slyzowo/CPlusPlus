#include <iostream>

int main(){

  int a; // assignment
  a = 15; // declaration

  int b = 25; // both

  int age = 18;                  // digit / integer
  float pi = 3.141592;           // decimal numbers
  char grade = 'C';              // character
  std::string name = "slyzOwO";  // string is a list of characters
  bool student =  true;

  std::cout << "you are " << age << " years old" << '\n';
  std::cout << "pi is " << pi << '\n';
  std::cout << "my grade is " << grade << '\n';
  std::cout << "you\'re name is " << name << '\n';
  std::cout << "you\'re a student : " << student << '\n';

return 0;
}
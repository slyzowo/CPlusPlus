#include <iostream>

int main(){

  int a; // assignment
  a = 15; // declaration

  int b = 25; // both

  int age = 18;                  // digit / integer
  float pi = 3.141592;           // decimal numbers
  char grade = 'C';              // character
  std::string name = "slyzOwO";  // string is a list of characters

  std::cout << "you are " << age << " years old" << '\n';    // d = digit
  std::cout << "pi is " << pi << '\n';                       // s = string
  std::cout << "my grade is " << grade << '\n';             // c = character
  std::cout << "you\'re name is " << name << '\n';           // s = string

return 0;
}
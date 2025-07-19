#include <iostream>
#include <vector>

typedef std::string text_t;
// std::string turns into text_t

using number = int;

int main(){
  text_t name = "slyz0w0";
  std::cout << name << '\n';

  // typedef is outdated, use "using" instead

  number age = 18;
  std::cout << age << '\n';

return 0;
}
#include <iostream>
using std::cout;
using std::cin;

int main(){

  std::string students[] = {"spongebob", "patrick", "squidward", "sandy"};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++){ // dynamic
    cout << students[i] << '\n';
  }

return 0;
}
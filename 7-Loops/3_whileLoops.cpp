#include <iostream>
using std::cout;
using std::cin;

int main(){

  std::string name;
  

  while(name.empty()){
    cout << "Please enter your name : " <<'\n';
    std::getline(std::cin, name);
  }

  cout << "hello " << name << '\n';

return 0;
}
#include <iostream>
using std::cout;
using std::cin;

int main(){

  std::string students[] = {"spongebob", "patrick", "squidward", "sandy"};

  for(std::string student : students){
    cout << student << '\n';
  }

return 0;
}
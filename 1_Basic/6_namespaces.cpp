#include <iostream>
// dont use `using namespace std;` because of conflicts
using std::cout; // use this instead

namespace first{
  int x = 1;
}

namespace second{
  int x = 1;
}

int main(){

  int x = 1;

  cout << first::x << '\n';
  cout << second::x << '\n';

return 0;
}
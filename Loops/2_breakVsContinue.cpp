#include <iostream>
using std::cout;
using std::cin;

int main(){

  for(int i = 1; i <= 20; i++){
    if (i == 13){
      continue; // skips 13
  //  break;       stops after 12
    }
    cout << i << '\n';
  }
  

return 0;
}
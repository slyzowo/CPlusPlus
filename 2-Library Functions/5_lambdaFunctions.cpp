#include <iostream>
using std::cout;

int main(){

// Lambda Functions are like functions but smaller and you dont need to name them

// the [] allow the lambda function to access variables outside of its function
  auto add = [](int a, int b){
    return a + b;
  };

  cout << add(3, 4);

return 0;
}
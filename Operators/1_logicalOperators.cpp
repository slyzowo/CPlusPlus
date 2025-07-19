#include <iostream>
using std::cout;
using std::cin;

int main(){

  int temp = 0;

  cout << "Enter the temperature : " << '\n';
  cin >> temp;

  if(temp > 0 && temp < 30){
    cout << "go outside the weather is nice" << '\n';
  }

  else if(temp > 0 && temp < 30){
    cout << "go outside the weather is nice and sunny" << '\n';
  }

  else if(temp < 0 || temp > 30){
    cout << "stay inside the weather is horrible" << '\n';
  }

  else{
    cout << "Not a valid answer" << '\n';
  }

  bool sunny = 0;

  cout << "is it sunny? : " << '\n';
  cin >> sunny;

  if(sunny == 1){
    cout << "go outside the sun is out" << '\n';
  }

  else if(sunny != 1){
    cout << "stay indoors" << '\n';
  }

  else{
    cout << "Not a valid answer" << '\n';
  }

return 0;
}
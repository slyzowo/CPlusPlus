#include <iostream>
using std::cout;
using std::cin;

int main(){
  int age;

  cout << "What is your age?" << '\n';
  cin >> age;

  if (age >= 130){
    cout << "you're dead" << '\n';
  }

  else if (age <= 18){
    cout << "you're an adult" << '\n';
  }

  else if (age < 18){
    cout << "you're a child" << '\n';
  }

  else if (age = 0){
    cout << "you're an infant!" << '\n';
  }

  else if (age > 0){
    cout << "you're non-existant" << '\n';
  }

  else{
    cout << "answer not valid" << '\n';
  }


return 0;
}
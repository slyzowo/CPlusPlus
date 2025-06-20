#include <iostream>
using std::cout;
using std::cin;

class Human{ 
  public :

  std::string name;
  std::string job;
  int age;

  void eat(){
    cout << "this human is eating" << '\n';
  }

  void drinking(){
    cout << "this human is drinking" << '\n';
  }

  void sleeping(){
    cout << "this human is sleeping" << '\n';
  }
};

int main(){

  Human person;

  person.name = "slyzowo";
  person.job = "engineer";
  person.age = 18;

  cout << person.name << '\n';
  cout << person.age << '\n';
  cout << person.job << '\n';

return 0;
}
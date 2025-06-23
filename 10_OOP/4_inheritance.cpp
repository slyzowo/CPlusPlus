#include <iostream>
using std::cout;
using std::cin;

class Animal{ 
  public :

  bool alive = true;

  void eat(){
    cout << "i am eating" << '\n';
  }
};

class Dog : public Animal{
  public:
  void bark(){
    cout << "Bark!" << '\n';
  }
};

class Cat : public Animal{
  public:
  void meow(){
    cout << "meow" << '\n';
  }
};


int main(){

  Dog dog;
  Cat cat;

  cout << dog.alive << '\n';
  dog.eat();
  dog.bark();

  cout << cat.alive << '\n';
  cat.eat();
  cat.meow();

return 0;
}
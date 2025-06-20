#include <iostream>
using std::cout;
using std::cin;

class Student{ 
  public :

  std::string name;
  int age;
  double gpa;

  Student(std::string name, int age, double gpa){
    this->name = name;
    this->age = age;
    this->gpa = gpa;
  }

};

int main(){

  Student student1(
    "spongebob",
    50,
    3.0
  );
  cout << student1.name << '\n';
  cout << student1.age << '\n';
  cout << student1.gpa << '\n';


  Student student2(
    "patrick",  
    55,
    1.0
  );

  cout << student2.name << '\n';
  cout << student2.age << '\n';
  cout << student2.gpa << '\n';

return 0;
}
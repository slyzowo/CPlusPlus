#include <iostream>
using std::cout;
using std::cin;

struct Student{
  std::string name;
  double gpa;
  bool enrolled;
};


int main(){

    Student student1;
  student1.name = "slyzowo";
  student1.gpa = 4.0;
  student1.enrolled = true;

  cout << student1.name << '\n';
  cout << student1.gpa << '\n';
  cout << student1.enrolled << '\n';

return 0;
}
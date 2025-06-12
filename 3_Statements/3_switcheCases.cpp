#include <iostream>
using std::cout;

int main(){

int month = 1;

switch (month){
case 1:
  cout << "it is january" << '\n';
break;

case 2:
  cout << "it is february" << '\n';
break;

case 3:
  cout << "it is march" << '\n';
break;

case 4:
  cout << "it is april" << '\n';
break;

case 5:
  cout << "it is may" << '\n';
break;

case 6:
  cout << "it is june" << '\n';
break;

case 7:
  cout << "it is july" << '\n';
break;

case 8:
  cout << "it is august" << '\n';
break;

case 9:
  cout << "it is september" << '\n';
break;

case 10:
  cout << "it is october" << '\n';
break;

case 11:
  cout << "it is november" << '\n';
break;

case 12:
  cout << "it is december" << '\n';
break;


default: cout << "that is invalid" << '\n';
  break;
}

return 0;
}
#include <iostream>
using std::cout;
using std::string;

int main(){

  string name;

  cout << "what is your name?" << '\n';
  std::getline(std::cin, name);

  if(name.length() > 12){
    cout << "your name cannot be over 12 characters" << '\n';
  }

  else if (name.empty()){
    cout << "you did not enter your name" << '\n';
  }
  
  else{
    cout << "your new gmail is " << name.append("@gmail.com") << '\n';
    cout << "I N S E R T I N G" << '\n';
    cout << name.insert(6, "inserted") << '\n';
    cout << name.find("@") << '\n';
    cout << name.erase(1) << '\n';
  }

return 0;
}
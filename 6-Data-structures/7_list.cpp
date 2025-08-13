#include <iostream>
#include <list>
using std::cout;
using std::cin;
using std::string;
using std::list;

int main(){

  list<string> animals = {"cat", "dog", "fish", "bird"};

  cout << animals.front();
  animals.push_front("lizard");
  animals.push_back("twitch chat");
  animals.pop_back();
  animals.pop_front();

return 0;
}
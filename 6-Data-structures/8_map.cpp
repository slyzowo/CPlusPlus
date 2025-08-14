#include <iostream>
#include <map>
using std::cout;
using std::cin;
using std::map;
using std::string;

int main(){

  map<string, int> people = {
    {"johnny", 23},
    {"katie", 53}
  };

  cout << people.at("johnny"); // puts out 23, bc johnny is 23

  people["lilith"] = 18;
  cout << people.at("lilith");

  cout << people.size();

  people.erase("lilith"); // removes lilith

  cout << people.size();

  people.clear(); // removes everyone

return 0;
}
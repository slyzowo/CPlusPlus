#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main(){

// vectors are like arrays but better 

  vector <string> cars = {"honda\n", "ford\n", "BMW\n", "volkwagon\n", "volvo\n"};

  cout << cars.front(); // shows first element
  cout << cars.back(); // shows last element
  cout << cars.at(4); // shows element at index

  cars.push_back("tesla"); // adds tesla to the back

  cout << cars.back(); // shows last element

  cout << cars.size(); // shows vector size

  cout << cars.empty(); // asks the vector if its empty

  cars.push_back("tesla"); // deletes tesla

  for (string car : cars) {
    cout << car << "\n";
  }  

return 0;
}
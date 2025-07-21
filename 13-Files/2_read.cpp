#include <iostream>
#include <fstream> // file stream
using std::cout;

int main(){

  std::string food = "";

  std::ifstream file("foods.txt"); //std::inputFileStream

  file >> food;

  file.close();

  cout << food << '\n';
  // get line for spaces

return 0;
}
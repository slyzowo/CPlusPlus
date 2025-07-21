#include <iostream>
#include <fstream> // file stream

int main(){

  std::string food = "chicken";

  std::ofstream file("foods.txt"); //std::outputFileStream

  file << food;

  file.close();

return 0;
}
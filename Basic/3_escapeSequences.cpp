#include <iostream>

int main(){

/* 

  Escape Sequences, A character combination making up of a backslash follwed by a letter or several digits.
                    These Escape Sequences can do many things based on what letter or numbers are followed.

  \n = New Line
  \t = Tab
  \\ = Backslash
  \' = Single Quote
  \" = Double Quotes
  
  */
std::cout << "Hello World!" << '\n';
std::cout << '\t' << "Hello World!" << '\n';
std::cout << '\\' << "Hello World!" << '\n';
std::cout << '\'' << "Hello World!" << '\'' << '\n';
std::cout << '\"' << "Hello World!" << '\"' << '\n';


return 0;
}
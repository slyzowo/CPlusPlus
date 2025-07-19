#include <iostream>
using std::cout;
using std::cin;

int searchNumber(int array[], int size, int element){

  for (int i = 0; i < size; i++){
  
    if (array[i] == element){
      return i;
    }
  }

  return -1;
}

int main(){

  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int myNum = 0;
  int index = 0;

  cout << "Enter element to search for" << '\n';
  cin >> myNum;
  
  index = searchNumber(numbers, size, myNum);

if (index != -1){
  cout << "Your Number is at index " << index << '\n';
}
else{
  cout << "Your Number is NOT in the array" << '\n';
}

  
return 0;
}
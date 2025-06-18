#include <iostream>
using std::cout;
using std::cin;

enum Day{
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday
};

int main(){

  Day today = sunday;

  switch (today){
  case sunday:
    cout << "Today is Sunday" << '\n';
    break;
  case monday:
    cout << "Today is Monday" << '\n';
    break;
  case tuesday:
    cout << "Today is Tuesday" << '\n';
    break;
  case wednesday:
    cout << "Today is Wednesday" << '\n';
    break;
  case thursday:
    cout << "Today is Thursday" << '\n';
    break;
  case friday:
    cout << "Today is Friday" << '\n';
    break;
  case saturday:
    cout << "Today is Saturday" << '\n';
    break;
    
    default:
    cout << "How did you get here?" << '\n';
    break;
  }

return 0;
}
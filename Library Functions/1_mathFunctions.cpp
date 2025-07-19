#include <iostream>
#include <cmath>

int main(){

  double x = 3;
  double y = 4.121;
  double z;

// in the <iostream>
  z = std::max(x, y);
  std::cout << z << '\n';

  z = std::min(x, y);
  std::cout << z << '\n';

// in the <cmath>
  z = pow(2, 3);
  std::cout << z << '\n';

  z = sqrt(2);
  std::cout << z << '\n';

  z = abs(-10);
  std::cout << z << '\n';

  z = round(y);
  std::cout << z << '\n';

  z = ceil(y);
  std::cout << z << '\n';

  z = floor(y);
  std::cout << z << '\n';

return 0;
}
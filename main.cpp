#include <iostream>
#include <cstdlib>
#include "mmth.hpp"

int main(int argv, char *args[]) {

  double a[4] = {1.1, 2.2, 3.3, 4.4};
  double b[4] = {10.1, 20.2, 30.3, 40.4};
  double res[] = {0.0};

  std::Simple_Add(res, a, b);

  for (int i = 0 ; i < 4 ; i++) {
    std::cout << i << " : " << res[i] << std::endl;
  }

  return 0;
}
#include <stdio.h>
#include <vector.h>

int main() {

  std::vector<double> array;
  for(double x = 0.; x < 20.; x += 1.)
    array.push_back(x);

  printf("size=%d\n", array.size());

  return 0;

}

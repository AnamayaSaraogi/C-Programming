#include <stdio.h>
#include <math.h>

int main() {
  const double PI = 3.141592653589793;

  printf("%f\n", tan(3));
  printf("%f\n", tan(-3));
  printf("%f\n", tan(0));
  printf("%f\n", tan(PI));
  printf("%f\n", tan(PI / 2));
  return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
  const double PI = 3.141592653589793;

  printf("%f\n", sin(3));
  printf("%f\n", sin(-3));
  printf("%f\n", sin(0));
  printf("%f\n", sin(PI));
  printf("%f\n", sin(PI / 2.0));
  return 0;
}
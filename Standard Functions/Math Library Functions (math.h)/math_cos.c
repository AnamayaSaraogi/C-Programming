#include <stdio.h>
#include <math.h>

int main() {
  const double PI = 3.141592653589793;
  
  printf("%f\n", cos(3));
  printf("%f\n", cos(-3));
  printf("%f\n", cos(0));
  printf("%f\n", cos(PI));
  printf("%f\n", cos(PI / 2.0));
  return 0;
}
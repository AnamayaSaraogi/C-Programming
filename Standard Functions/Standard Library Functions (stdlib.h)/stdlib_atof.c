#include <stdio.h>
#include <stdlib.h>

int main() {
  char str[] = "4.25% above average";
  float amount = atof(str);
  printf("%f", amount);
  return 0;
}
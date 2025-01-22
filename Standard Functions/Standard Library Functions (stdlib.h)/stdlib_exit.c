#include <stdio.h>
#include <stdlib.h>

int main() {
  int myAge = 17;
  int votingAge = 18;

  if(myAge < votingAge) {
    printf("Not authorized");
    exit(0);
  }

  printf("Age verified. Continue this way.");
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Allocate memory for a number of items
  int numItems = 15;
  int *myArray = calloc(numItems, sizeof(int));

  // Write into the memory
  for(int i = 0; i < numItems; i++) {
    myArray[i] = i + 1;
  }

  // Display the contents of the memory
  for(int i = 0; i < numItems; i++) {
    printf("%d ", myArray[i]);
  }

  // Free the memory
  free(myArray);
  myArray = NULL;

  return 0;
}
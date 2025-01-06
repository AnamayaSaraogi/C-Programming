#include <stdio.h>

int main() {
  
    // Loop from 1 to 5
    for (int i = 1; i <= 5; i++) {
      
          // Skip 3 numbers
        if (i == 3)
            continue;
        printf("%d ", i);
    }

    return 0;
}
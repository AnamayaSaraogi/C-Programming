#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // Pointer to num
    printf("Value of num: %d\n", *ptr); // Access value using pointer
    return 0;
}

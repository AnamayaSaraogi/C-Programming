//to demonstrate passing parameters using call by refernce
#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int i, j;
    printf("Enter i and j values: ");
    scanf("%d%d", &i, &j);

    printf("Before swapping: %d %d\n", i, j);
    swap(&i, &j); // Passing addresses of `i` and `j`
    printf("After swapping: %d %d\n", i, j);

    return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;  // `temp` takes the value at address `a`
    *a = *b;    // Value at address `a` is updated with value at address `b`
    *b = temp;  // Value at address `b` is updated with `temp`
}

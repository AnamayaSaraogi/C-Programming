// C Program to demonstrate break statement with for loop
#include <stdio.h>

int main()
{

    // using break inside for loop to terminate after 2
    // iteration
    printf("break in for loop\n");
    for (int i = 1; i < 5; i++) {
        if (i == 3) {
            break;
        }
        else {
            printf("%d ", i);
        }
    }

    // using break inside while loop to terminate after 2
    // iteration
    printf("\nbreak in while loop\n");
    int i = 1;
    while (i < 20) {
        if (i == 3)
            break;
        else
            printf("%d ", i);
        i++;
    }
    return 0;
}
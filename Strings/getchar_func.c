#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter any character/digit: ");
    ch = getchar();

    if (isalpha(ch)) {
        printf("It is an alphabet: %c\n", ch);
    } else if (isdigit(ch)) {
        printf("It is a digit: %c\n", ch);
    } else {
        printf("It is a special symbol: %c\n", ch);
    }

    return 0;
}

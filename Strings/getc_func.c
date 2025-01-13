#include <stdio.h>

int main() {
    char ch;

    printf("Type characters (press Ctrl+D or Ctrl+Z to stop):\n");

    // Read characters from the keyboard until EOF is entered
    while ((ch = getc(stdin)) != EOF) {
        printf("You typed: %c\n", ch);
    }

    return 0;
}

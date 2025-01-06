#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {101, "Alice", 87.5};
    printf("ID: %d, Name: %s, Marks: %.2f\n", s1.id, s1.name, s1.marks);
    return 0;
}

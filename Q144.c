#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct student s) {
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct student s1 = {"Rahul", 101, 87.5};

    printStudent(s1);   // passing structure variable to function

    return 0;
}

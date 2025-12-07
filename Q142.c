#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }
    printf("Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}

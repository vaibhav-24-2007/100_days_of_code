#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float grade;
};
struct Student getTopStudent() {
    struct Student topStudent;
    topStudent.id = 1;
    snprintf(topStudent.name, sizeof(topStudent.name), "Alice Johnson");
    topStudent.grade = 95.5;

    return topStudent;
}

int main() {
    struct Student top = getTopStudent();

    printf("Top Student Details:\n");
    printf("ID: %d\n", top.id);
    printf("Name: %s\n", top.name);
    printf("Grade: %.2f\n", top.grade);

    return 0;
}

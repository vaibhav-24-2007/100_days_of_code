#include <stdio.h>
#include <stdlib.h> 
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student *student_ptr;
    student_ptr = (struct Student *)malloc(sizeof(struct Student));
    if (student_ptr == NULL) {
        printf("Error! Memory allocation failed.\n");
        return 1; // Return with an error code
    }
    student_ptr->roll_no = 101;
    snprintf(student_ptr->name, sizeof(student_ptr->name), "Alice Smith");
    student_ptr->marks = 85.5;
    printf(" Student Details \n");
    printf("Roll Number: %d\n", student_ptr->roll_no);
    printf("Name: %s\n", student_ptr->name);
    printf("Marks: %.2f\n", student_ptr->marks);
    free(student_ptr);
    student_ptr = NULL;

    return 0;
}

#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int id;
    char name[50];
    struct Date joiningDate;
};

int main() {
    struct Employee emp = {1001, "John Doe", {15, 6, 2020}};
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Joining Date: %02d-%02d-%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}

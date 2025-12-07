#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    FILE *file;
    Employee emp1 = {1, "John Doe", 55000.50};
    Employee emp2;
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fwrite(&emp1, sizeof(Employee), 1, file);
    fclose(file);
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    fread(&emp2, sizeof(Employee), 1, file);
    fclose(file);
    printf("ID: %d\nName: %s\nSalary: %.2f\n", emp2.id, emp2.name, emp2.salary);

    return 0;
}

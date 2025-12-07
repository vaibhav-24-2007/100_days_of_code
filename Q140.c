#include <stdio.h>
#include <string.h> 
enum Gender {
    MALE,     
    FEMALE,  
    NON_BINARY 
};
struct Person {
    char name[50];       
    int age;             
    enum Gender gender; 
};
int main() {
    struct Person employee1;
    strcpy(employee1.name, "Alex Johnson");
    employee1.age = 32;
    employee1.gender = FEMALE;
    printf("--- Employee Information ---\n");
    printf("Name: %s\n", employee1.name);
    printf("Age: %d\n", employee1.age);
    printf("Gender: ");
    switch (employee1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case NON_BINARY:
            printf("Non-Binary\n");
            break;
        default:
            printf("Unspecified\n");
            break;
    }

    return 0;
}

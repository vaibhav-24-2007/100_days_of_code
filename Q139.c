#include <stdio.h>
enum Day {
    MONDAY = 1, 
    TUESDAY = 2,    
    SUNDAY = 7 ,
};
int main() {
    printf("--- Enum Value Demonstration ---\n");
    printf("MONDAY is stored as integer: %d\n", MONDAY);
    printf("TUESDAY is stored as integer: %d\n", TUESDAY);
    printf("SUNDAY is stored as integer: %d\n", SUNDAY);
    enum Day currentDay = TUESDAY;
    printf("\n'currentDay' variable (of type enum Day) is set to TUESDAY.\n");
    printf("It holds the integer value: %d\n", currentDay);
    enum Day unknownDay = 99;
    printf("A variable assigned the integer 99 holds the value: %d\n", unknownDay);
    
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    int day, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", input);

  
    sscanf(input, "%d/04/%d", &day, &year);

    
    printf("%02d-Apr-%04d\n", day, year);

    return 0;
}

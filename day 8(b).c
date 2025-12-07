#include <stdio.h>

int main() {
    char a;
    printf("Enter a character ");
    scanf("%c", &a);

    
    if(a >= 'A' && a <= 'Z')
    {
        printf("uppercase alphabet\n");
    }
    else if(a>='a' && a <='z')
    {
        printf("lowercase alphabet\n");
    }
    else if(a>='0' && a<='9')
    {
        printf("It is a digit\n");
    }
    else {
        printf("It is a special character.\n");
    }

    return 0;
}

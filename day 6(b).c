#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer \n");
    scanf("%d",&n);

    
    if (n>0)
    
    {
        printf("Positive\n");
    } 
    else if(n<0)
    {
        printf("Negative\n");
    }
    
    else
    {
        printf("The number is Zero\n");
    }

    return 0;
}

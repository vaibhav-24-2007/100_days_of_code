#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer\n");
    scanf("%d",&a);
  
    if (a%2==0) 
    {
        printf("Even\n",a);
    } 
    else
    {
        printf("Odd\n",a);
    }

    return 0;
}

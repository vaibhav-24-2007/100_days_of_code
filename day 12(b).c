#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of units consumed\n");
    scanf("%d",&n);
    
    if(n<=50)
    {
        printf("Bill:%d",n*5);
    }
    
    else if(n<=150)
    {
        printf("Bill:%d",250+(n-50)*7);
    }
    
    else 
    {
        printf("Bill:%.1f",950+(n-150)*12.5);
    }
    return 0;
}

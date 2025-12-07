#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the two numbers \n");
    scanf ("%d %d",&a,&b);
    
    while((a<=0) || (b<=0))
    {
    printf("Enter positive numbers\n");
    printf("Enter the two numbers \n");
    scanf ("%d %d",&a,&b);
    }
    
    while (b>0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf(" HCF is %d",a);
    return 0;
}

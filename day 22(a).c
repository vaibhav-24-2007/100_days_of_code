#include <stdio.h>

int main() 
{
int n,sum=0,last;
do{
printf("Enter n ");
scanf("%d",&n);
} while(n<0);
int temp=n;
if (n==0)
{
    sum=1;
}

while(n!=0)
{
    int product =1;
    last = n%10;
    for(int i=1;i<=last;i++)
    {
        product*=i;
    }
    
    sum+=product;
    n=n/10;
}
if(sum==temp)
{
    printf("Strong number");
    
}
else
{
    printf("not strong");
}

    return 0;
}

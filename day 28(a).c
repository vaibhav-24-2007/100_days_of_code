#include <stdio.h>

int main() 
{
    int n,p=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    if(n<=0)
    {
        do
        {
            printf("Please give any positive number :");
            scanf("%d",&n);
        } while(n<=0);
    }
    
    for(int i=2;i<n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\t",i);
            p++;
        }
    }
    
    if(p==0)
    {
        printf("No prime numbers between 1 to %d",n);
    }

    return 0;
}

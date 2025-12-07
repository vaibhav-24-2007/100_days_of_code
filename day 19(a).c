#include <stdio.h>

int main() 
{
    int n,last,sum =0;
    printf("Enter n \n");
    scanf("%d",&n);

    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum+=last;
    }
    printf("%d",sum);
    return 0;
}

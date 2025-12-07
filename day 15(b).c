#include <stdio.h>

int main()
{
int n;
int reverse_number=0;
int last;
printf("Enter the number \n");
scanf("%d",&n);

while(n!=0)
{
    last = n%10;
    reverse_number=(reverse_number*10)+last;
    n=n/10;
    
}
printf("%d",reverse_number);

    return 0;
}

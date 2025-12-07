#include <stdio.h>

int main() {

int n;
int product =1;
printf("Enter the number whose factorial is to be calculated  \n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    product=product*i;
}
printf("Factorial of %d is %d",n,product);
    return 0;
}

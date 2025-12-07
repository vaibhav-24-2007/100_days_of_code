//Reverse an array without taking extra space.
#include <stdio.h>

int main()
{
int n;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    printf("Enter the %d entry of the array:",i);
    scanf("%d",&a[i]);
}
for(int j=n-1;j>=0;j--)
{
    printf("%d\t",a[j]);
}

    return 0;
}

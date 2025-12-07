#include <stdio.h>

int main() 
{
    int n,sum=0;
    
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array: ",i);
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
     
    printf("%d",sum);
    return 0;
}

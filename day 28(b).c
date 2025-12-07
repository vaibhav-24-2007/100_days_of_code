#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    
    if(n<=0)
    {
    do
    {
        printf("The number of elements in the array must be positive \nSo enter a positive number : ");
        scanf("%d",&n);
    }while(n<=0);
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i);
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<n;j++)
    {
        printf("%d \n",a[j]);
    }
    return 0;
}

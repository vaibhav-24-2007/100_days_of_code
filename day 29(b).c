#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array:");
        scanf("%d",&a[i]);
    }
    
    int max=a[0],min=a[0];
    for(int j=1;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
        
        else if(a[j]<min)
        {
            min=a[j];
        }
    }
    
    printf("Max :%d  Min :%d",max,min);
    
    
    return 0;
}

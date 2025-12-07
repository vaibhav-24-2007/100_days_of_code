#include <stdio.h>

int main() 
{
    int n,positive_count=0,negative_count=0,zero_count=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array ",i);
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            positive_count++;
        }
        else if(a[i]<0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
        
    }
    printf("Positive : %d \tNegative : %d \tZeroes :%d",positive_count,negative_count,zero_count);
    
    return 0;
}

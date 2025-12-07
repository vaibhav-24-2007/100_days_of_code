#include <stdio.h>

int main() 
{
    int n,even_count=0,odd_count=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("Number of even entries : %d \nNumber of odd entries : %d",even_count,odd_count);
    
    return 0;
}

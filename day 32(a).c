//Q63 (Arrays (1D))
//Merge two arrays.
#include <stdio.h>

int main() 
{
    int n1,n2;
    printf("Enter the number of elements in first and second array respectively :");
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        printf("Enter the %d entry of the first array :",i);
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n2;i++)
    {
        printf("Enter the %d entry of the second array :",i);
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",a[i]);
    }
    
    for(int i=0;i<n2;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}

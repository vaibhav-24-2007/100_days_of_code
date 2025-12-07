//Search for an element in an array using linear search.
#include <stdio.h>

int main() 
{
    int n,b,index,p=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
{
    printf("Enter the %d entry of the array:",i);
    scanf("%d",&a[i]);
}

printf("Enter the element to be searched:");
scanf("%d",&b);

for(int j=0;j<n;j++)
{
    if(a[j]==b)
    {
        index =j;
        printf("Element found at %d index",index);
        p++;
        break;    
    }
}
if(p==0)
{
    printf("Element not found");
}

    return 0;
}

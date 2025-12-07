//Q66 (Arrays (1D))
//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>

int main()
{
    int n,pos,n2;
    printf("Enter no of elements in the array :");
    scanf("%d",&n);
    int a[n],b[n+1];
    printf("enter the elements in ascending order\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array:",i);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element you want to add:");
    scanf("%d",&n2);
    for(int i=0;i<n;i++)
    {
        if(a[i]>n2)
        {
            pos=i;
            break;
        }
    }
    b[pos]=n2;

    for(int i=0;i<pos;i++)
    {
        b[i]=a[i];
    }
    for(int j=pos+1;j<=n;j++)
    {
        b[j]=a[j-1];
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",b[i]);
    }
    
    
    return 0;
}

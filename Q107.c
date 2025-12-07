/*Q107 (Logic Enhancers)
Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Number of array elements cannot be non positive ");
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of the array :",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=i-1;j>=0;j++)
        {
            if(a[j]>a[i])
            {
                printf("%d",a[j]);
                p++;
                break;
            }
        }
        if(p==0)
        {
            printf("-1");
        }
        if(i!=n-1)
        {
            printf(",");
        }
    }
    
    return 0;
}

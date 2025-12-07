/*Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.*/
#include <stdio.h>

int main() 
{
    int n,target,flag=1,p=0;
    printf("Enter the number of elements in the array and the target element\n");
    scanf("%d %d",&n,&target);
    if(n<=0)
    {
        while(n<=0)
        {
            printf("Number of enteries cannot be less than or equal to zero . Please enter the no of elements of the array again\n ");
            scanf("%d",&n);
        }
    }
    int nums[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element on the %d index of the array",i);
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            printf("%d,",i);
            p=i;
            flag=0;
             break;
        }
       
    }
    if(flag==0)
    {
    for(int i=n-1;i>=p;i--)
    {
        if(nums[i]==target)
        {
            printf("%d\n",i);
            break;
        }
    
    }
    }
    else
    
    {
        printf("-1,-1\n");
    }
    

    return 0;
}

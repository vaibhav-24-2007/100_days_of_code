/*Q105 (Logic Enhancers)
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("number of elements in the array cannot be non positive ");
        return 1;
    }
    int nums[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i+1);
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]==nums[i])
            {
                count++;
            }
            if(count>n/2)
            {
                printf("%d",nums[i]);
                return 0;
            }
        }
    }
        printf("-1");
    return 0;
}

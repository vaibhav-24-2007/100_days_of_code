/*Q116 (Logic Enhancers)
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Number of elements cannot be non positive");
        return 0;
    }
    
    int nums[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&nums[i]);
        if(nums[i]<0)
        {
            printf("only positive numbers are allowed ");
            return 0;
        }
    }
    int target;
    printf("Enter the target :");
    scanf("%d",&target);
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("-1 -1");
    return 0;
}

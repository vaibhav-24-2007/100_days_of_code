//Q102 (Logic Enhancers)
//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() 
{
    int n,x,p=0,temp;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    if(n<=0)
    {
    do
    {
        printf("Number of elements cannot be non positive so please re enter the value of number of elements of the array :");
        scanf("%d",&n);
    } while(n<=0);
        
    
    }
   
    printf("Enter x :");
    scanf("%d",&x);
    
    int nums[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array:",i+1);
        scanf("%d",&nums[i]);
        
    }
    for (int i=0;i<n;i++)
    {
          if(nums[i]>=x)
        {
            temp=i;
            p=1;
             
            break;
        }
    }
    if(p==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",temp);
    }
    

    return 0;
}

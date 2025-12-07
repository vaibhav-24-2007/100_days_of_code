/*Q112 (Logic Enhancers)
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    if (n<=0)
    {
    printf("Number of elments in the array cannot be non positive ");
    return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of the array :",i+1);
        scanf("%d",&arr[i]);
    }
    int max_sub_array_sum=arr[0];
    int current_sub_array_sum=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]+current_sub_array_sum>arr[i])
        {
            current_sub_array_sum+=arr[i];
        }
        else
        {
            current_sub_array_sum=arr[i];
        }
        if(current_sub_array_sum>max_sub_array_sum)
        {
            max_sub_array_sum=current_sub_array_sum;
        }
    }
    printf("%d",max_sub_array_sum);
    
    return 0;
}

/*Q110 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.*/
#include <stdio.h>

int main() 
{
    int n,k,largest;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    if(n<=0)
    {
    printf("Arrays can not have non positive number of elements");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter the %d element of the array :",i+1);
    scanf("%d",&arr[i]);
    }
    printf("Enter the value of k :");
    scanf("%d",&k);
    if(k>n)
    {
        printf("No subarrays possible");
        return 1;
    }
    for(int i=0;i<=n-k;i++)
    {
        largest=arr[i];
        for(int j=i+1;j<i+k;j++)
        {
            if(arr[j]>largest)
            {
                largest=arr[j];
            }
        }
        if(i==n-k)   // in order to remove the extra space character after the last output
        {
            printf("%d",largest);
        }
        else
        {
        printf("%d ",largest);
        }
    }
    
    
    return 0;
}

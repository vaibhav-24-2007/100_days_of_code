/*Q111 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/
#include <stdio.h>

int main() 
{
    int n,k,p=0;
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
        p=0;
        for(int j=i;j<i+k;j++)
        {
            if(arr[j]<0)
            {
                printf("%d",arr[j]);
                p++;
                break;
            }
        }
        if(p==0)
        {
                printf("0");
        }
        if(i!=n-k)
        {
            printf(" ");
        }
        
        
    }
    
    
    return 0;
}



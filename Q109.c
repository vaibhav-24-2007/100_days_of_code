/*Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>

int main() 
{
    int n,k,sum=0,sum_sub_array=0;
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
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];  /* Ye isliye kiya taaki agr negatives numbers le saare to sum_sub_array >0 kabhi hoga ni and output 0 aa jaayega which is wrong to ab sum ko first possible sub array ke sum ke equal kar diya */
    }
    for(int i=0;i<=n-k;i++)
    {
        sum_sub_array=0;
        for(int j=i;j<i+k;j++)
        {
            sum_sub_array+=arr[j];
        }
        if(sum_sub_array>sum)
        {
            sum=sum_sub_array;
        }
    }
    printf("%d",sum);
    
    return 0;
}

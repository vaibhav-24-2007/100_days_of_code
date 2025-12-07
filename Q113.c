/*Q113 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.*/
#include<stdio.h>
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
    int k;
    printf("Enter k:");
    scanf("%d",&k);
    if((k<=0) || (k>n))
    {
        printf("Invalid input");
        return 0;
    }
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("%d",arr[k-1]);
    
    return 0;
}

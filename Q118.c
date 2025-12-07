/*
Q118 (Logic Enhancers)
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/
#include<stdio.h>

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
    int a[n+1];
    for(int i=0;i<n+1;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&nums[i]);
        a[nums[i]]=1;
    }
    for(int i=0;i<n+1;i++)
    {
        if(a[i]==0)
        {
        printf("%d",i);
        break;
       }
    }
    
    return 0;
}

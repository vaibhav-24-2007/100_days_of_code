/*Q104 (Logic Enhancers)
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
#include<stdio.h>
int main()
{
    int n,p=0;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Only positive numbers allowed ");
        return 1;
    }
    
    for(int i=1;i<=n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=1;j<=i;j++)
        {
            sum1+=j;
        }
        
        for(int k=i;k<=n;k++)
        {
            sum2+=k;
        }
        if (sum1==sum2)
        {
            printf("%d",i);
            p++;
        }
    }
    if(p==0)
    {
        printf("-1");
    }
    return 0;
}

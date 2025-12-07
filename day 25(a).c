#include <stdio.h>

int main() 
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n<=0)
    {
     do
     {
       printf("Enter a positive number : ");
       scanf("%d",&n);
     } while(n<=0); 
    }
    
    for(int i=1;i<=n;i++)
    {
        int k=i-1;
        for(int a=0;a<k;a++)
        {
            printf(" ");
        }
        for(int j=i;j<=5;j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() 
{
    
    for(int i=1;i<=5;i++)
    {
        int count =0;
        for(int j=i;j<5;j++)
        {
            printf(" ");
            count++;
        }
        for(int k=count +1;k<=5;k++)
        {
            printf("%d",k);
        }
        printf("\n");
       
    }
    return 0;
}

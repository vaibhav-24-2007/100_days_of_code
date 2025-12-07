#include<stdio.h>

int main()
{
    int a=5;
    for(int i=1;i<=5;i++)
    {
        for (int j=a;j<=5;j++)
      {
         printf("%d",j);
      }
      a--;
      printf("\n");
    }
    return 0;
}

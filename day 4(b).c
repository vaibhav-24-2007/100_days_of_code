#include<stdio.h>

int main()
{
  int n;
  int sum = 0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
    {
      sum += i;
    }
  printf("%d",sum);
     return 0;
}

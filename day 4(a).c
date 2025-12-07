#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter the numbers\n");
  scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf(" a=%d \n b=%d",a,b);

return 0;
}

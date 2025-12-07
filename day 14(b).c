#include <stdio.h>

int main() {
    int n;
    int sum = 0,count = 0;
    int i=1;
    printf("Enter n\n ");
    scanf("%d",&n);
    while(count<n)
    {
       if(i%2==1)
       {
           sum = sum+i;
           count++;
           
           
       }
       i++;
    }
    printf("%d",sum);
    return 0;
}

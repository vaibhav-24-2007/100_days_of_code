#include <stdio.h>

int main() {
    int n,product=1;
    printf("Enter n \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            product*=i;
        }
    }
    printf("%d",product);
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter no of late days\n");
    scanf("%d",&n);
    
    if(n<=4)
    {
        printf("Your fine is %d",n*2);
    }
    
    else if (n<=8)
    {
        printf("Your fine is %d",8+((n-4)*6));
    }
    
    else if(n<=30)
    {
        printf("Your fine is %f",(32+((n-8)*8.28)));
    }
    else
    {
        printf("Your membership is cancelled ");
    }
    
    return 0;
}#include <stdio.h>

int main() {
    int n;
    printf("Enter no of late days\n");
    scanf("%d",&n);
    
    if(n<=4)
    {
        printf("Your fine is %d",n*2);
    }
    
    else if (n<=8)
    {
        printf("Your fine is %d",8+((n-4)*6));
    }
    
    else if(n<=30)
    {
        printf("Your fine is %f",(32+((n-8)*8.28)));
    }
    else
    {
        printf("Your membership is cancelled ");
    }
    
    return 0;
}

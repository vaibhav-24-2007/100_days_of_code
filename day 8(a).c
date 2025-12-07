#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter the no ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if((n1>=n2) && (n1>=n3))
    {
        printf("The greatest no is %d",n1);
    }
    else if((n2>=n1) && (n2>=n3))
    {
        printf("The greatest no is %d",n2);
    }
    else
    {
        printf("The greatest no is %d",n3);
    }

    return 0;
}

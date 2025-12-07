#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Enter the length of side 1\n");
    scanf("%d",&a);
    
    printf("Enter the length of side 2\n");
    scanf("%d",&b);
    
    printf("Enter the length of side 3\n");
    scanf("%d",&c);
    
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        if( (a==b) && (b==c))
        {
            printf("Equilateral Triangle");
        }
        
        else if((a==b) || (b==c) || (a==c))
        {
            printf("Isosceles Triangle");
        }
        
        else
        {
            printf("Scalene Triangle");
        }
    }
    
    else
    {
        printf("Triangle cannot be formed with these sides ");
    }
    return 0;
}

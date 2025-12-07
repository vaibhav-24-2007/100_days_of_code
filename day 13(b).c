#include <stdio.h>

int main() {
    int a,b;
    char operation;
    
    printf("Enter first number\n");
    scanf("%d",&a);
    
    printf("Enter second number\n");
    scanf("%d",&b);
    
    printf("Enter operation to be done between these two numbers\n");
    scanf(" %c ",&operation);
    
    switch(operation)
    {
        case '+':
        printf("%d",a+b);
        break;
        
        case '-':
        printf("%d",a-b);
        break;
        
        case '*':
        printf("%d",a*b);
        break;
        
        case '/':
        printf("%d",a/b);
        break;
        
        case '%':
        printf("%d",a%b);
        break;
        
        default :
        printf("Invalid operation");
    }
    
    return 0;
}

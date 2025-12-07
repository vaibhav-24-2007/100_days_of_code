#include<stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    //STRUCTURE OF QUADRATIC EQUATION = a(x^2) + bx + c = 0

    printf("Enter coffecient of x^2 \n");
    scanf("%d",&a);
    
    printf("Enter coffecient of x \n");
    scanf("%d",&b);
    
    printf("Enter the constant term  \n");
    scanf("%d",&c);
    
    int d=((b*b)-(4*a*c));
    printf("The discriminant is %d \n",d);
    
    float root1,root2;
   
    
    
    if (d >=0 )
    {
         root1=(-b+sqrt(d))/(2*a);
         root2 = (-b -sqrt(d))/(2*a);
        
        if(root1==root2)
        {
            printf("The rooots are real and same : %.2f %.2f",root1,root2);
        }
        else 
        {
            printf("The roots are real and different : %.2f %.2f",root1,root2);
        }
    }
    
    else
    {
        float realpart=(-b)/(2*a),imaginarypart=sqrt(-d)/(2*a);
         printf("The roots are complex: %.2f + %.2fi   %.2f - %.2fi\n", realpart, imaginarypart, realpart, imaginarypart);
    }
    
    return 0;
}

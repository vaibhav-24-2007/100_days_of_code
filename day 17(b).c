#include <stdio.h>

int main() {
    int n,new_num=0,last ;

    printf("Enter n\n");
    scanf("%d",&n);
    int temp =n;
    
    while (n!=0)
    {
        last=n%10;
        new_num=new_num+(last*last*last);
        n=n/10;
    }
    printf("%d\n",new_num);
    if(new_num==temp)
    {
        printf("Armstrong number\n");
        
    }
    else
    {
        printf("Not armstrong ");
    }
    
    
    return 0;
}

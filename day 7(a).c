#include <stdio.h>

int main() {
    char a;
    printf("Enter the character \n");
    scanf("%c",&a);
    
    if((a>='a' && a<='z') ||(a>='A' && a<='Z'))
    {
       if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf(" It is a Vowel");
    }
    else 
    {
        printf("It is consonant");
    }
    }
    else
    {
        printf("Invalid input");
    }
    
   

    return 0;
}

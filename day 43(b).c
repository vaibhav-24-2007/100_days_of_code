//Q86 (Strings)
//Check if a string is a palindrome.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int l,p=1;
    printf("Enter the string :");
    fgets(a,sizeof(a),stdin);
    l=strlen(a);
    
    for(int i=0;i<l-1;i++)
    {
        if(a[i]!=a[l-2-i])
        {
             p=0;
            break;
            
        }
    }
    if(p==1)
    {
        printf("Palindrome");
        
    }
    else
    {
        printf("Not a palindrome ");
    }
    return 0;
}

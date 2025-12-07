/*Q92 (Strings)
Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>
#include<string.h>

int main() 
{
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';
        l=l-1;
    }
    for(int i=0;i<l;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        for(int j=i-1;j>=0;j--)
        {
            if(str[j]==str[i])
            {
                printf("%c",str[i]);
                return 0;
            }
        }
        }
    }
    
    
    return 0;
}

/*Q96 (Strings)
Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
#include<string.h>

int main() 
{
    int p=0;
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    if(str[l-1]=='\n')
    {
        str[l-1]='\0';
        l--;
    }
    for(int i=0;i<=l;i++)
    {
        if((str[i]==' ') || (str[i]=='\0'))
        {
            for(int j=i-1;j>=p;j--)
            {
                printf("%c",str[j]);
            }
            if (str[i] == ' ') 
            {
                printf(" ");  
            }
            p=i+1;  
            
        }
    }
    
    return 0;
}

/*Q91 (Strings)
Remove all vowels from a string.
.*/
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
        if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
        {
            if(i==l-1)
            {
                str[i]='\0';
            }
            else
            {
                for(int j=i;j<l;j++)
                {
                 str[j]=str[j+1];
                }
                i=i-1;
            }
        }
    }
        printf("%s",str);
    return 0;
}

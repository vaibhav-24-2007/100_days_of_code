/*Q97 (Strings)
Print the initials of a name.
*/
#include <stdio.h>
#include<string.h>

int main() 
{
    int a=0;
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';
        l=l-1;
    }
    printf("%c.",str[0]);
    char index[5];
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            index[a]=str[i+1];
            a++;
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%c.",index[i]);
    }
    return 0;
}

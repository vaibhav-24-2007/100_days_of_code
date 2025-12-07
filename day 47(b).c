/*Q94 (Strings)
Find the longest word in a sentence.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int max=0,a=0;
    char word[100];
    char largestword[100];
    
    printf("Enter the string :");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    
    if(str[l-1]=='\n')
    {
        str[l-1]='\0';
        l--;
    }
    for(int i=0;i<l;i++)
    {
         a=0;
        while((str[i]!=' ') && (i<l))
        {
            word[a]=str[i];
            a++;
            i++;
        }
        word[a]='\0';
        if(a>max)
        {
            max=a;
            strcpy(largestword,word);
        }
        
    }
    printf("%s",largestword);
    return 0;
}

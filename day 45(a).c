//Q89 (Strings)
//Count frequency of a given character in a string.
//Q89 (Strings)
//Count frequency of a given character in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b;
    int l,freq=0;
    printf("Enter the string :");
    fgets(a,sizeof(a),stdin);
    l=strlen(a);
    if(a[l-1]=='\n')
    {
        a[l-1]='\0';
        l--;
    }
    printf("Enter the character whose frequency is to be found:");
    scanf("%c",&b);
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==b)
        {
            freq++;
        }
        i++;
    }
    printf("%d",freq);
    return 0;
}

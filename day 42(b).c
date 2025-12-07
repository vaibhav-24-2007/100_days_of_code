//Q84 (Strings)
//Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int l;
    printf("Enter the string in lowercase :");
    fgets(a,sizeof(a),stdin);
    l=strlen(a);
    for(int i=0;i<l-1;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;        //UPPERCASE == 65 TO 90
        }                        //LOWERCASE == 97 TO 122
        printf("%c",a[i]);
    }
    return 0;
}

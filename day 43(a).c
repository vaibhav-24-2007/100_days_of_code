//Q85 (Strings)
//Reverse a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i=0,length;
    printf("Enter the string:");
    fgets(a,sizeof(a),stdin);
    length=strlen(a);
    for(int i=length-2;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    
    
    return 0;
    
}

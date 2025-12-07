//Q90 (Strings)
//Toggle case of each character in a string.
#include <stdio.h>
#include<string.h>
int main() 
{
    char a[100];
    int l;
    printf("Enter the string:");
    fgets(a,sizeof(a),stdin);
    l=strlen(a);
    if(a[l-1]=='\n')
    {
        a[l-1]='\0';
        l--;
    }
    for(int i=0;i<l;i++)
    {
        if((a[i]>='a') && (a[i]<='z'))
        {
            a[i]=a[i]-32;
        }
        
        else if((a[i]>='A') && (a[i]<='Z'))
        {
            a[i]=a[i]+32;
        }
        printf("%c",a[i]);
        
    }
    
    
    return 0;
}

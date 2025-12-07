//Q87 (Strings)
//Count spaces, digits, and special characters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int l,spaces=0,digits=0,special=0;
    printf("Enter the string");
    fgets(a,sizeof(a),stdin);
    l=strlen(a);
    for(int i=0;i<l-1;i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {

        }
       else if(a[i]==' ')
        {
            spaces++;
        }

        else if(a[i]>='0' && a[i]<='9')
        {
            digits++;
        }
        else
        {
            special++;

        }

    }
    printf("spaces:%d , digits:%d , special:%d",spaces,digits,special);



    return 0;
}

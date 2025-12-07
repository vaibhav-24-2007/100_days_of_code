//Q82 (Strings)
//Print each character of a string on a new line.

#include<stdio.h>

int main()
{
    char a[1000];
    int count=0;
    printf("Enter the string: ");
    fgets(a,sizeof(a),stdin);
    while(a[count]!='\0')
    {
        if(a[count]=='\n')
        {
            break;
        }
        printf("%c\n",a[count]);
        count++;
    }
    
    
    return 0;
}

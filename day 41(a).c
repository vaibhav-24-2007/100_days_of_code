//Q81 (Strings)
//Count characters in a string without using built-in length functions.

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
count++;
}
printf("%d",count);
return 0;
}

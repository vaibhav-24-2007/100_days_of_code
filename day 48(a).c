/*Q95 (Strings)
Check if one string is a rotation of another.*/
#include <stdio.h>
#include<string.h>

int main() 
{
    char str1[100],str2[100],temp[100];
    printf("Enter the first string:");
    fgets(str1,sizeof(str1),stdin);
    int l1=strlen(str1);
    if(str1[l1-1]=='\n')
    {
        str1[l1-1]='\0';
        l1--;
    }
    
    printf("Enter the second string:");
    fgets(str2,sizeof(str2),stdin);
    int l2=strlen(str2);
    if(str2[l2-1]=='\n')
    {
        str2[l2-1]='\0';
        l2--;
    }
    if(l1!=l2)
    {
        printf("Not a rotation");
        return 0;
    }
    if(strcmp(str1,str2)==0)
    {
        printf("Rotation");
        return 0;
    }
    for(int i=1;i<l2;i++)
    {
        int index=0;
        for(int j=i;j<l2;j++)
        {
            temp[index++]=str2[j];
        }
        
        for(int j=0;j<i;j++)
        {
            temp[index++]=str2[j];
        }
        temp[index]='\0';
        
        if(strcmp(temp,str1)==0)
        {
            printf("Rotation");
            return 0;
        }
    }
    
    printf("Not a rotation");
    
    
    return 0;
}

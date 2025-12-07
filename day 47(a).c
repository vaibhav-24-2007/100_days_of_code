/*Q93 (Strings)
Check if two strings are anagrams of each other.*/
#include <stdio.h>
#include<string.h>

int ascii(char ch)
{
    int c=(int)ch;
    return c;
}

int main()
{
    char str1[100],str2[100];
    printf("Enter the first string :");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the second string:");
    fgets(str2,sizeof(str2),stdin);
    int l1=strlen(str1),l2=strlen(str2);
    
    if(str1[l1-1]=='\n')
    {
        str1[l1-1]='\0';
        l1--;
    }
    if(str2[l2-1]=='\n')
    {
        str2[l2-1]='\0';
        l2--;
    }
    if(l1!=l2)
    {
        printf("Not anagrams");
        return 0;
    }
    
    int freq1[256]={0},freq2[256]={0};
    for(int i=0;i<l1;i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
        int a=ascii(str1[i]);
        freq1[a]++;
    }
    
    for(int i=0;i<l2;i++)
    {
        if(str2[i]>='A' && str2[i]<='Z')
        {
            str2[i]=str2[i]+32;
        }
        int a=ascii(str2[i]);
        freq2[a]++;
    }
    
    for(int i=0;i<256;i++)
    {
       if(freq1[i]!=freq2[i])
       {
           printf("Not anagrams ");
           return 0;
       }
    }
    printf("Anagrams");
    return 0;
}

//Q83 (Strings)
//Count vowels and consonants in a string.

#include<stdio.h>
#include<string.h>

int main()
{
char a[1000];
int vowel=0,consonant=0,l;

printf("Enter the string:");
fgets(a,sizeof(a),stdin);
l =strlen(a);
printf("legth of the string is %d \n",l-1);// because fgets stores \n before null character thats why length -1

for(int i=0;i<l-1;i++)
{
    if((a[i]=='A') || (a[i]=='E') || (a[i]=='I') || (a[i]=='O') ||(a[i]=='U') || (a[i]=='a') || (a[i]=='e') || (a[i]=='i') || (a[i]=='o') || (a[i]=='u'))
    {
        vowel++;
    }
    else
    {
        consonant++;
    }
    
}
printf("Vowels=%d , Consonant=%d",vowel,consonant);

return 0;
}

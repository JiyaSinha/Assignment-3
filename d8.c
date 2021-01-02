#include<stdio.h>
#include<string.h>
int main()
{
    char s[25];
    int flag1=0,flag2=0;
    printf("Enter string:\n");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97||s[i]<=122))
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
              flag1++;
            else
              flag2++;
        }
    }
    printf("No. of vowels is %d and consonants is %d\n",flag1,flag2);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("Enter s1:\n");
    gets(s1);
    printf("Enter s2:\n");
    gets(s2);
    if(strcmp(s1,s2)>0)
        printf("s1>s2");
    else if(strcmp(s1,s2)<0)
        printf("s1<s2");
    else
        printf("s1=s2");
    return 0;
}

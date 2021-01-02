#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],*p1,*p2;
    p1=s1,p2=s2;
    printf("Enter the first string:\n");
    gets(p1);
    printf("enter the second string:\n");
    gets(p2);
    strcat(p1,p2);
    printf("The concatenated string:\n");
    puts(p1);
    return 0;
}


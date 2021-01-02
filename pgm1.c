#include<stdio.h>
int main()
{
    int n1,n2;
    int *p1=&n1,*p2=&n2;
    printf("Enter two integers to be swapped:\n");
    scanf("%d%d",p1,p2);
    (*p1)=(*p1)+(*p2);
    (*p2)=(*p1)-(*p2);
    (*p1)=(*p1)-(*p2);
    printf("Swapped values are %d and %d",*p1,*p2);
    return 0;
}

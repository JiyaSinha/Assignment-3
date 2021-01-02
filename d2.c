#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number till which square is to be found:\n");
    scanf("%d",&n);
    int *p1=(int *)malloc(n*sizeof(int));
    int *p2=(int *)calloc(n,sizeof(int));
    int i=0;
    for(;i<n;i++)
    {
        (*p1)=i+1;
        (*p2)=(i+1)*(i+1);
        p1++;
        p2++;
    }
    p1-=n,p2-=n;
    for(i=0;i<n;i++)
    {
        printf("(%d)^2=%d\n",*p1,*p2);
        p1++,p2++;
    }
    p1-=n,p2-=n;
    p1=(int *)realloc(p1,(n/2)*sizeof(int));
    p2=(int *)realloc(p2,(n/2)*sizeof(int));
    printf("After reallocation:\n");
    for(i=0;i<n/2;i++)
    {
        printf("(%d)^2=%d\n",*p1,*p2);
        p1++,p2++;
    }
    free(p1);
    free(p2);
    return 0;
}

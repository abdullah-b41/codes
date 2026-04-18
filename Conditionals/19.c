#include <stdio.h>

int main()
{
    int a,b,len,c,d;
    scanf("%d%d%d%d%d",&a,&b,&len,&c,&d);
    if (c<a || c>a+len && d<b || d>b+len) printf("Outside Square");
    else printf("Inside Square");
    return 0;
}
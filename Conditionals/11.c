#include <stdio.h>

int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float min = a;
    if(b<a) min = b;
    if(c<a) min = c;
    if(d<a) min = d;
    printf("%f",a+b+c+d-min);
}
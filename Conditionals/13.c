#include <stdio.h>

int main()
{
    float a,b;
    char sign;
    scanf("%f %c %f",&a,&sign,&b);
    if (sign=='+') printf("%g",a+b);
    else if (sign=='-') printf("%g",a-b);
    else if (sign=='*') printf("%g",a*b);
    else printf("%g",a/b);
    return 0;
}
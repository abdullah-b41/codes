#include <stdio.h>

int main(void)
{
    float a,b,rpm;
    scanf("%f %f" ,&a, &b);
    rpm = (1000*a)/(60*2*b*3.1416);
    printf("%.2f", rpm);
}
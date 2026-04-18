#include <stdio.h>

int main(void)
{
    int a;
    long long b;
    char c;
    float d;
    double e;
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%lld\n%c\n%f\n%lf\n", a, b, c, d, e);
}
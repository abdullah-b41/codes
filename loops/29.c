#include <stdio.h>

int main() // * GCD => greatest common divisor => n1 % gcm=0 && n2 % gcm=0
{
    // int n1, n2, gcd = 0;
    // scanf("%d %d", &n1, &n2);
    // int upto = (n1 > n2) ? n2 : n1;
    // for (int i = 1; i <= upto; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //         gcd = i;
    // }
    // printf("%d", gcd);

    int n1, n2, gcd = 1;
    scanf("%d %d", &n1, &n2);
    int min = (n1 > n2) ? n2 : n1, big = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (big % min != 0)
        {
            int rem = big % min;
            big = min;
            min = rem;
        }
        else
        {
            gcd = min;
            break;
        }
    }
    printf("%d", gcd);
}
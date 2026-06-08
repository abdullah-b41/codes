#include <stdio.h>

int main() // * LCM => least common multiple
{
    // int n1, n2;
    // scanf("%d %d", &n1, &n2);
    // int gcd = (n1 > n2) ? n2 : n1, upto = gcd;
    // for (int i = 1; i <= upto; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //         gcd = i;
    // }
    // printf("%d", (n1*n2)/gcd);   //! gcd * lcm = n1 * n2.

    int n1, n2; // * general rule => lcm % n1=0 && lcm % n2=0
    scanf("%d %d", &n1, &n2);
    int lcm = (n1 > n2) ? n1 : n2;
    while (1)
    {
        if (lcm % n1 == 0 && lcm % n2 == 0)
            break;
        else
            lcm++;
    }
    printf("%d", lcm);
}
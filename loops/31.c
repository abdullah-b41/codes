#include <stdio.h>

int main() // * Co-Prime => GCD == 1.
{
    // int n1, n2, gcd = 0;
    // scanf("%d %d", &n1, &n2);
    // int upto = (n1 > n2) ? n2 : n1;
    // for (int i = 1; i <= upto; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //         gcd = i;
    // }
    // if (gcd == 1)
    //     printf("Co-Prime");
    // else
    //     printf("Not Co-Prime");

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
    if (gcd == 1)
        printf("Co-Prime");
    else
        printf("Not Co-Prime");
}
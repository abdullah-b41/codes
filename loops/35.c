#include <stdio.h> //! not completed yet.
#include <math.h>

int main() //* a lot of series.....
{
    int n;
    double sum = 0, term = 1;
    scanf("%d", &n);
    for (double i = 1; i <= n; i++)
    {
        double num = 1, den = 1;
        // sum += i;     //* 1 + 2 +....+ n
        // sum += i*2;   //* 2 + 4 +....+ n
        // sum += i * i; //* 1 + 2^2 +....+ n^2
        // sum += 1 / i; //* 1 + 1/2 +....+ 1/n

        // for (double j = 1; j <= i; j++)
        // {
        //     den *= j; //* n!
        // }
        // sum += 1 / den; //* 1 + 1/2! +....+ 1/n!

        // if ((int)i % 2 == 0)
        //     sum += -i;
        // else
        //     sum += i;   //* 1 - 2 + 3 - 4 +....+ n

        // if ((int)i % 2 == 0)
        //     sum += -pow(i, 3);
        // else
        //     sum += pow(i, 2); //* 1 - 2^3 + 3^2 - 4^3 + 5^2 -....+ n

        // double sum2 = 0;
        // for (double j = 1; j <= i; j++)
        // {
        //     if ((int)j == 1)
        //         sum2 += 1;
        //     else if ((int)j % 2 == 0)
        //         sum2 += -(2 * j - 1);
        //     else
        //         sum2 += (2 * j - 1);
        // }
        // sum += sum2;         //* 1 + (1-3) + (1-3+5) +....+ n => same as 6th one...

        // for (int j = 1; j <= i; j++)
        // {
        //     // double numSum = 0;
        //     // for (int k = 1; k <= j; k++)
        //     // {
        //     //     numSum += 2 * k - 1;
        //     // }
        //     // num *= numSum; //* literally product of squares => 1 * 4 * 9 *......
        //     num *= j*j;
        //     den *= j;
        // }
        // if ((int)i % 2 == 0)
        //     sum += -num / den;
        // else
        //     sum += num / den; //* 1/1! - 1*(1+3)/2! + 1*(1+3)*(1+3+5)/3! -.........+ n
    }
    printf("%g", sum);
}
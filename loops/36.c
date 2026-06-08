#include <stdio.h> //* practise rest series
#include <math.h>
#include <stdlib.h>

double pie = 3.14159;

// int main() //* arcsin series
// {
//     double x, term = 1, sum = 0;
//     scanf("%lf", &x);
    // for (int i = 1; fabs(term) >= pow(10, -4); i++)
    // {
    //     double num = 1, den = 1;
    //     for (int j = 1; j <= i; j++) 
    //     {
    //         num *= (2 * j - 1);
    //         den *= (2 * j);
    //     }
    //     term = (num / den) * pow(x, 2 * i + 1) / (2 * i + 1);
    //     sum += term;
    // } //! time complexity onek beshi as nested loop.....

    // for (int i = 1; fabs(term) > pow(10, -4); i++)
    // {
    //     term *= x * x * (2 * i - 1) * (2 * i - 1) / ((2 * i) * (2 * i + 1));
    //     sum += term;
    // }
    // sum = sum * x + x; //! less time complexity.....
    // if (x == 1)
    //     printf("90");
    // else if (x == -1)
    //     printf("270");
    // else
    //     printf("%g", round(sum * (180 / pie)));
//}

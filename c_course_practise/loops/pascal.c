#include <stdio.h>

int main() //* Pascal Triangle
{
    // int total; //* Long but easy
    // scanf("%d", &total);
    // for (int i = 1; i <= total; i++)
    // {
    //     int r = 0;
    //     for (int j = 1; j <= total + i - 1; j++)
    //     {
    //         if (j <= total - i) //* 1
    //             printf(" ");
    //        //* 2 else if ((total % 2 == 0 && ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))) ||
    //                  (total % 2 != 0 && ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))))
    //        //* 2 else if((i+j-total)%2==1) //! same thing as line 14,15.
    //         {
    //             int n = i - 1, nPr = 1, den = 1;
    //             for (int k = 0; k < r; k++)
    //             {
    //                 nPr *= n - k;
    //                 den *= (k + 1);
    //             }
    //             int nCr = nPr / den;
    //             printf("%d", nCr);
    //             r++;
    //        //* 3 if ((i + j - total) % 2 == 1) //
    //         {
    //             int n = i - 1, nPr = 1, den = 1;
    //             for (int k = 0; k < r; k++)
    //             {
    //                 nPr *= n - k;
    //                den *= (k + 1);
    //             }
    //             int nCr = nPr / den;
    //             printf("%d", nCr);
    //             r++;
    //         }
    //         }
    //         //* 4 else
    //             printf(" ");
    //     } //! 1,2,4 or 3,4 both are correct.
    //     printf("\n");
    // }
    //! too much nested loops
    // int total; //* Long but easy
    // scanf("%d", &total);
    // for (int i = 1; i <= total; i++)
    // {
    //     int r = 0;
    //     for (int j = 1; j <= total + i - 1; j++)
    //     {
    //         if (i + j - total < 1 || (i + j - total) % 2 == 0)
    //             printf(" ");      //! targeted where to printf space.
    //         else
    //         {
    //             int n = i - 1, nPr = 1, den = 1;
    //             for (int k = 0; k < r; k++)
    //             {
    //                 nPr *= n - k;
    //                 den *= (k + 1);
    //             }
    //             int nCr = nPr / den;
    //             printf("%d", nCr);
    //             r++;
    //         }
    //     }
    //     printf("\n");
    // }
    //! too much nested loops
    // int n;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         printf(" ");
    //     }

    //     int val = 1;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", val);
    //         val = val * (i - j) / (j + 1);
    //     }
    //     printf("\n");
    // }
    //! that's smart
}

// int main()
// {
//     int n, r, nPr = 1;
//     scanf("%d %d", &n, &r);
//     for (int i = 0; i < r; i++)
//     {
//         nPr *= (n - i);
//     }
//     printf("%d", nPr);
// }
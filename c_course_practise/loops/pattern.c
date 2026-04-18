#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    // if (i == 0 || i == 4 || j == 0 || j == 4) //* 1
    //     printf("%d", n);
    // else
    //     printf(" ");
    //!
    // if (i == 0 || i == 4 || j == 0 || j == 4 || i==j) //* 2
    //     printf("%d", n);
    // else
    //     printf(" ");
    //!
    // if (i == 0 || i == 4 || j == 0 || j == 4 || i == j || (i + j) == (n - 1)) //* 3
    //     printf("%d", n);
    // else
    //     printf(" ");
    //!
    // if (j <= i) //* 4
    //     printf("*");
    //!
    // if (i + j >= n - 1) //* 5
    //     printf("*");
    // else
    //     printf(" ");
    //!
    // if (i + j <= n - 1) //* 6
    //     printf("*");
    // else
    //     printf(" ");
    //!
    // if (j >= i) //* 7 => look at 4
    //     printf("*");
    // else
    //     printf(" ");
    //         //!

    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 0; i < 2 * n - 1; i++) //* 8
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i < n && j <= i)
    //             printf("*");
    //         if (i >= n && j > (i-n)) //* or i+j < 2n
    //             printf("*");
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 0; i < 2 * n - 1; i++) //* 9
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i < n)
    //         {
    //             if (j >= (n - i - 1))
    //                 printf("*");
    //             else
    //                 printf(" ");
    //         }
    //         if (i >= n)
    //         {
    //             if (j <= (i - n))
    //                 printf(" ");
    //             else
    //                 printf("*");
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 0; i < 2 * n - 1; i++) //* 10
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i < n)
    //         {
    //             if (j >= i)
    //                 printf("*");
    //             else
    //                 printf("  ");
    //         }
    //         if (i >= n)
    //         {
    //             if (j >= 2 * n - i - 2)
    //                 printf("*");
    //             else
    //                 printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 0; i < 2 * n - 1; i++) //* 11
    // {
    //     for (int j = 0; j < 2 * n - 1; j++)
    //     {
    //         if (i < n)
    //         {
    //             if (j >= (n - i))
    //                 printf("*");
    //             else
    //                 printf(" ");
    //         }
    // if (i >= n)
    // {
    //     if (j < 2 * n - i - 2)
    //         printf("*");
    //     else
    //         printf("  ");
    // }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 0; i < 2 * n - 1; i++) //* 12
    // {
    //     for (int j = 0; j < 2 * n - 1; j++)
    //     {
    //         if (i == j || i + j== 2 * n - 2)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    // if (j <= i) //* 13
    //     printf("%d", j);
    //!
    // if (j <= i) //* 14
    //     printf("%d", i);
    //!
    // if (j <= i) //* 15
    //     printf("%d", i + 1 - j);
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= n; i++) //* 16
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j <= n)
    //         {
    //             if (i + j >= n + 1)
    //                 printf("%d", n - j + 1);
    //             else
    //                 printf(" ");
    //         }
    //         else
    //         {
    //             if (j < n + i)
    //                 printf("%d", j - n + 1);
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= n; i++) //* 17
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j <= n)
    //         {
    //             if (i + j >= n + 1)
    //                 printf("%d", i + j - n);
    //             else
    //                 printf(" ");
    //         }
    //         else
    //             printf("%d", n + i - j);
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= n; i++) //* 18
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    // if (j <= n)
    // {
    //     if (i + j == n + 1)
    //         printf("%d", i);
    //     else
    //         printf(" ");
    // }
    // else
    // {
    //     if (i + n == j + 1)
    //         printf("%d", i);
    //     else
    //         printf(" ");
    // }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= n; i++) //* 19
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j <= n)
    //         {
    //             if (i == j)
    //                 printf("%d", n - i + 1);
    //             else
    //                 printf(" ");
    //         }
    //         else
    //         {
    //             if (i + j == 2 * n)
    //                 printf("%d", j - n + 1);
    //             else
    //                 printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= 2 * n - 1; i++) //* 20
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (i <= n)
    //         {
    //             if (j <= n)
    //             {
    //                 if (i + j == n + 1)
    //                     printf("%d", i);
    //                 else
    //                     printf(" ");
    //             }
    //             else
    //             {
    //                 if (i + n == j + 1)
    //                     printf("%d", i);
    //                 else
    //                     printf(" ");
    //             }
    //         }
    //         else
    //         {
    //             if (j <= n)
    //             {
    //                 if (j + n == i + 1)
    //                     printf("%d", 2 * n - i);
    //                 else
    //                     printf(" ");
    //             }
    //             else
    //             {
    //                 if (i + j == 3 * n - 1)
    //                     printf("%d", 2 * n - i);
    //                 else
    //                     printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // for (int i = 1; i <= n; i++) //* 21
    // {
    //     int num = 1;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i + 1)
    //             printf("%d", i + j - 1);
    //         else
    //         {
    //             printf("%d", num);
    //             num++;
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // int num = 1;
    // for (int i = 1; i <= n; i++) //* 22
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j < n) //* long process
    //         {
    //             if (i + j == n + 1)
    //                 printf("%d", 2 * i - 2);
    //             else
    //                 printf(" ");
    //         }
    //         else
    //         {
    //             if (i + n == j + 1)
    //                 printf("%d", 2 * i - 1);
    //             else
    //                 printf(" ");
    //         }

    //         if (j < n) //* clever
    //         {
    //             if (i + j == n + 1)
    //             {
    //                 printf("%d", num);
    //                 num++;
    //             }
    //             else
    //                 printf(" ");
    //         }
    //         else
    //         {
    //             if (i + n == j + 1)
    //             {
    //                 printf("%d", num);
    //                 num++;
    //             }
    //             else
    //                 printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    // int num = 1;
    // for (int i = 1; i <= n; i++) //* 23
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j < n)
    //         {
    //             if (i == j)
    //             {
    //                 printf("%d", num);
    //                 num++;
    //             }
    //             else
    //                 printf(" ");
    //         }
    //         else
    //         {
    //             if (i + j == 2 * n)
    //             {
    //                 printf("%d", num);
    //                 num++;
    //             }
    //             else
    //                 printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    //!
    int num = 1;
    for (int i = 1; i <= n; i++) //* 24 incomplete, parini
    {
        for (int j = 1; j <= n; j++)
        {
            // if (i + j == n - 1 || //! the digits are only for n=5,
            //     j == i + n - 3 || //! need to convert them to n where for n=5, 3=(n+1)/2
            //     i == j + n - 3 || //! every digit be substituted where 1 = (n-3)/2
            //     i + j == 2*(n - 1))
            if (i + j == (n + 3) / 2 || //* after converting we get this and it satisfies for all odd values of n
                j == i + (n - 1) / 2 || //* the previous one was only for n=5.
                i == j + (n - 1) / 2 ||
                i + j == (3 * n + 1) / 2)
            {
                printf("%d", num);
                num++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    //!
    // int num = 1; //* 24 parini
    // int mid = (n + 1) / 2;
    // for (int i = 1; i <= n; i++)
    // {
    //     int dist = (i > mid) ? (i - mid) : (mid - i);
    //     int left = dist + 1;
    //     int right = n - dist;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j == left)
    //             printf("%d", num++);
    //         else if (j == right && right != left)
    //             printf("%d", num++);
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    return 0;
}
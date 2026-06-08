#include <stdio.h>

int main() //* Digit extractor !
{
    int a, digit, count = 0;    /// Conditions : a>0, a!=0, a
    scanf("%d", &a);
    // while (a > 0)   /// METHOD 1 : preferred while loop
    // {
    //     digit = a % 10;
    //     printf("%d ", digit);
    //     a = a / 10;
    //     count++;
    // }
    // printf("\n%d\n", count);

    // for (; a != 0; a /= 10)   /// METHOD 2 : for loop standard
    // {
    //     digit = a % 10;
    //     printf("%d ", digit);
    //     count++;
    // }
    // printf("\n%d\n", count);

    for (; a; a /= 10, count++)   /// METHOD 3 : for loop short, all changes at a time.
    {
        digit = a % 10;
        printf("%d ", digit);
    }
    printf("\n%d\n", count);
    return 0;
}
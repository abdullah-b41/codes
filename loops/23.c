#include <stdio.h>
#include <math.h>

int main() // * Rotate a number by k times where number is of 4 digits.
{
    // int n, k;
    // scanf("%d %d", &n, &k);
    // k = k % 4;
    // if (k == 1)
    // {
    //     n = n / 10 + (n % 10) * 1000;
    // }
    // else if (k == 2)
    // {
    //     n = n / 100 + (n % 100) * 100;
    // }
    // else if (k == 3)
    // {
    //     n = n / 1000 + (n % 1000) * 10;
    // }
    // printf("%d", n);

    int n, k;                       // *  Rotate any number by k times 
    scanf("%d %d", &n, &k);
    int temp = n, count = 0;        
    for (; temp > 0; temp /= 10)
    {
        count++;
    }

    k = k % count;
    if (k == 1)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 2)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 3)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 4)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 5)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 6)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 7)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 8)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    else if (k == 9)
    {
        n = n / pow(10, k) + (n % (int)pow(10, k)) * pow(10, count - k);
    }
    printf("%d", n);
}
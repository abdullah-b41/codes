#include <stdio.h>
#include <math.h>

int main() // * Palindrome => if a number is reversed, it is exactly same.
{
    int n, temp, digit, sum = 0, count = 0, rev = 0;
    scanf("%d", &n);
    // temp = n;
    // for (; temp > 0; temp /= 10)   // Method 1
    // {
    //     count++;
    // }
    // for (temp = n; count > 0; count--)
    // {
    //     digit = temp % 10;
    //     sum += digit * pow(10, count - 1);
    //     temp /= 10;
    // }
    // if(sum==n)
    //     printf("Palindrome Number");
    // else
    //     printf("Not Palindrome Number");

    temp = n;
    for (; temp > 0; temp /= 10) // Method 2
    {
        digit = n % 10;
        rev = rev * 10 + digit; // Not clear
    }
    if (n == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
    return 0;
}
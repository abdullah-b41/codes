#include <stdio.h>

int main() //* nCr, nPr
{
    long long n, r, num = 1, den = 1, nPr = 1, nCr = 1;
    scanf("%lld %lld", &n, &r);
    // for (int i = 0; i <= (r - 1); i++)
    // {
    //     num *= (n - i); //* n(n-1)...(n-(r-1))
    //     den *= (i + 1); //* r!
    // }
    for (int i = 0; i <= (r - 1); i++)
    {
        nPr *= (n - i);             //* n(n-1)...(n-(r-1))
        nCr = nCr*(n - i) / (i + 1); //* r!
    }
    // long long nPr = num, nCr = num / den;
    printf("nPr = %lld\nnCr = %lld", nPr, nCr);
}

//! why does nCr *= (n-i)/(i+1) not work????
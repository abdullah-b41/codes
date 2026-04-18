#include <stdio.h>

int main() //* between 2 numbers, in their binary, how many same place digits are same?
{          //* 2 = 10, 15 = 1111, from right, 2md digit of both is 1, so ans=1;
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int n = (n1 < n2) ? n1 : n2, cnt = 0;
    while (n > 0) //* did't use local_value as i need to go from lsb to msb ==> rightmost to leftmost
    {
        int d1 = n1 % 2, d2 = n2 % 2;
        n1 /= 2, n2 /= 2, n /= 2;
        if (d1 == d2)
            cnt++;
    }
    printf("%d", cnt);
}
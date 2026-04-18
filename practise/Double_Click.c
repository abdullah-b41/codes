#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long array[a];

    for(int i=0; i<a; i++)
    {
        scanf("%lld", &array[i]);
    }

    long long diff = 0;
    for(int i=0; i<(a-1); i++)
    {
        diff = array[i+1] - array[i];
        if (diff <= b)
        {
            printf("%lld\n", array[i+1]);
            break;
        }
    }
    if (diff > b || a == 1)
    {
        printf("-1\n");
    }
}
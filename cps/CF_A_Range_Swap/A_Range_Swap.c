#include <stdio.h>

int main()
{
    int n, p, q, r, s;
    scanf("%d%d%d%d%d", &n, &p, &q, &r, &s);
    int seq[n], final[n], diff = q - p + 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
        final[i] = seq[i];
    }

    for (int i = 1; i <= diff; i++)
    {
        final[q - i] = seq[s - i];
    }

    for (int i = 1; i <= diff; i++)
    {
        final[s - i] = seq[q - i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", final[i]);
    }
    return 0;
}
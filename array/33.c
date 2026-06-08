#include <stdio.h>

int main() // Print trace.
{
    int n, a[100][100], trace = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        trace += a[i][i];
    }
    printf("Trace: %d", trace);
}
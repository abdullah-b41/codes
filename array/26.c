#include <math.h>
#include <stdio.h>

int main() // Mean, median, mode, range, variance, sd.
{
    int n, a[10000] = {}, fa[10001] = {};
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        fa[a[i]]++;
        sum += a[i];
    }
    for (int i = 0; i < n - 1; i++) // sorted with exchange sort.
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < 10000; i++) // find max iteration
    {
        if (max < fa[i])
            max = fa[i];
    }
    printf("Mode: ");
    for (int i = 0; i < 10000; i++) // print mode/s
    {
        if (fa[i] == max)
            printf("%d ", i);
    }

    printf("\n");   // median
    if (n % 2 != 0) // if total odd terms
    {
        printf("Median: %d\n", a[(n + 1) / 2 - 1]);
    }
    else // if total even terms
    {
        printf("Median: %g\n", (a[n / 2 - 1] + a[n / 2]) / 2.0);
    }

    double mean = sum / n;
    printf("Mean: %.2f\n", mean); // mean

    int max_v = 0, min_v = 1000000;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < min_v)
            min_v = a[i];
        if (a[i] > max_v)
            max_v = a[i];
    }
    printf("Range: %d\n", max_v - min_v); // range

    double variance = 0;
    for (int i = 0; i < n; i++)
    {
        variance += (a[i] - mean) * (a[i] - mean);
    }
    variance /= n;
    printf("Variance: %.2f\n", variance); // variance

    printf("Standard deviation: %.2f\n", sqrt(variance)); // SD
    return 0;
}
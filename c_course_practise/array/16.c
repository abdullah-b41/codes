#include <stdio.h>

int main() //* Marksheet
{
    int n, roll[100000], mark[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &roll[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &mark[i]);

    for (int i = 0; i < n; i++) //* Exchange sort
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mark[i] < mark[j])
            {
                // Mark in descending
                int temp = mark[i];
                mark[i] = mark[j];
                mark[j] = temp;

                // Aligning corresponding roll.
                temp = roll[i];
                roll[i] = roll[j];
                roll[j] = temp;
            }
        }
    }

    printf("Merit Roll Marks\n");
    for (int i = 0; i < n; i++)
        printf("%4d  %4d  %4d\n", i + 1, roll[i], mark[i]); // %nd ensures the integer has n digits with previous blank.
}
#include <stdio.h>

int main() //* a lot of things to do. --> parini.
{
    int n, arr[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int step = 0;
    while (1)
    {
        scanf("%d", &step);
        if (step == 5)
            return 0;
        else if (step == 4)
        {
            int index, e;
            scanf("%d %d", &index, &e);
            arr[index] = e;
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
        }
        else if (step == 3)
        {
            int e, cnt = 0;
            scanf("%d", &e);
            for (int i = 0; i < n;)
            {
                if (arr[i] == e)
                {
                    for (int j = i; j < n; j++)
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                    cnt++;
                }
                else
                    i++;
            }
            n -= cnt;
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);

            printf("\n");
        }
        else if (step == 2)
        {
            int index, out[100000] = {0};
            scanf("%d", &index);
            for (int i = 0; i < n; i++)
            {
                if (i < index)
                    out[i] = arr[i];
                else if (i == index)
                    continue;
                else
                    out[i - 1] = arr[i];
            }
            for (int i = 0; i < n - 1; i++)
                printf("%d ", out[i]);

            printf("\n");
        }
        else if (step == 1)
        {
            int index, e, out[100000] = {0};
            scanf("%d %d", &index, &e);
            for (int i = 0; i < n + 1; i++)
            {
                if (i < index)
                    out[i] = arr[i];
                else if (i == index)
                    out[i] = e;
                else
                    out[i] = arr[i - 1];
            }
            for (int i = 0; i < n + 1; i++)
                printf("%d ", out[i]);

            printf("\n");
        }
    }
}
#include <stdio.h>

int main() // Find pairs not adjacent to each other
{
    int r, c, input[50][50] = {};
    scanf("%d %d", &c, &r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &input[i][j]);
    }

    int cnt = 0;
    for (int num = 1; num <= c; num++) // create frequency array for each number
    {
        int freq_num[51] = {0};
        freq_num[num] = 1; // mark the current number as found
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (input[i][j] == num && j != 0 && j != c - 1) // prior and next elements exist
                {
                    freq_num[input[i][j - 1]]++;
                    freq_num[input[i][j + 1]]++;
                }
                else if (input[i][j] == num && j == 0) // only next element exists
                {
                    freq_num[input[i][j + 1]]++;
                }
                else if (input[i][j] == num && j == c - 1) // only prior element exists
                {
                    freq_num[input[i][j - 1]]++;
                }
            }
        }
        for (int i = 1; i <= c; i++) // count how many numbers are not adjacent to the current number
        {
            if (freq_num[i] == 0)
            {
                cnt++;
            }
        }
    }
    cnt /= 2; // each pair is counted twice, so divide by 2
    printf("%d", cnt);
}
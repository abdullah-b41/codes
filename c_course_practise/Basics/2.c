#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int years = n/365, weeks, days;
    weeks = (n%365) / 7;
    days = ((n%365)%7);
    printf("Years : %d\nWeeks : %d\nDays : %d", years,weeks,days);
}
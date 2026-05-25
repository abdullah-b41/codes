#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[101] = {0}, b[101] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    int c = 1, d = 1;
    for (int i = 1; i <= m; i++)
    {
        if (b[i] > 1)
        {
            c = 0;
        }
        if (b[i] == 0)
        {
            d = 0;
        }
    }
    if (c)
        cout << "Yes\n";
    else
        cout << "No\n";
    if (d)
        cout << "Yes\n";
    else
        cout << "No\n";
}
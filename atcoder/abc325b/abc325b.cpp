#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[2000] = {};
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    int best = 0;
    for (int i = 0; i < 24; i++)
    {
        int cnt = 0;
        for (int j = 1; j < 2 * n; j += 2)
        {
            int d = (i + arr[j]) % 24;
            if (d >= 9 && d <= 17)
                cnt += arr[j - 1];
        }
        best = max(best, cnt);
    }
    cout << best << '\n';
}

int main()
{
    fast;

    int t = 1;

    while (t--)
        solve();

    return 0;
}
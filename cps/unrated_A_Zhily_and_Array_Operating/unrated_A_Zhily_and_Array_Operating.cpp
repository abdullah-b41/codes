// JHAMELA

#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

ll v[200000] = {0};

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll cnt = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i + 1] > 0)
            v[i] = v[i] + v[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            cnt++;
    }

    cout << cnt << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
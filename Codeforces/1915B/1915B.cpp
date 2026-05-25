#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += s[j];
        }
        if (sum != 'A' + 'B' + 'C')
        {
            sum -= '?';
            cout << char('A' + 'B' + 'C' - sum) << '\n';
        }
    }
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
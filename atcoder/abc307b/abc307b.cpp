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
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string t = s[i] + s[j], u = s[j] + s[i];
            string rev = t, rev2 = u;
            reverse(rev.begin(), rev.end());
            reverse(rev2.begin(), rev2.end());
            if (t == rev || rev2 == u)
            {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}
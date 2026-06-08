#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int best = 1;
    for (int i = 0; i < s.length() - 2; i++)
    {
        for (int j = 2; j <= s.length(); j++)
        {
            int len = 0;
            string t = s.substr(i, j);
            string check = t;
            reverse(t.begin(), t.end());
            if (check == t)
                len = check.length();
            if (len > best)
                best = len;
        }
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
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> total;

    for (int i = 0, k = n; i < n; i++)
    {
        if (i == 0)
            total.push_back(a);
        else if (i == n / 2)
            total.push_back(b);
        else
        {
            while (k == a || k == b)
                k--;
            total.push_back(k--);
        }
    }

    if (*min_element(total.begin(), total.begin() + n / 2) != a ||
        *max_element(total.begin() + n / 2, total.end()) != b)
    {
        cout << "-1\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << total[i] << ' ';
    }

    cout << '\n';
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
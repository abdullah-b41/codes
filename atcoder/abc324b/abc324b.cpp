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
    double d = log2(n), d2 = log(n) / log(3);
    cout << d << '\n';
    cout << d2 << '\n';
    if ((int)d == d || (int)d2 == d2)
        cout << "Yes\n";
    else
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
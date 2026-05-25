#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

ll a[300000] = {}, b[300000] = {}, sum_a = 0, sum_b = 0;

void solve()
{
    int n;
    cin >> n;
    sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_a += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum_b += b[i];
    }

    ll a_min = *min_element(a, a + n), b_min = *min_element(b, b + n);

    if (b_min * n + sum_a < a_min * n + sum_b)
        cout << b_min * n + sum_a << '\n';
    else
        cout << a_min * n + sum_b << '\n';
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
#include <bits/stdc++.h>
using namespace std;

// clang-format off
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cout(x) cout << x << "\n";
#define sort(v) sort(v.begin(), v.end());
#define cin(v) for (auto &i : v) cin >> i;
#define coutv(v) for(int i=0; i<(int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "" : " "); cout << "\n";
#define vct(v,n) vector<int> v(n); cin(v);
// clang-format on

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "0\n";
        return;
    }
    if (n == 2)
    {
        cout << "0 1\n";
        return;
    }
    vector<int> v(n);
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i < n; i++)
        v[i] = v[i - 1] + v[i - 2];
    coutv(v);
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}

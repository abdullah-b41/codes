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
    int sum = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            sum *= 2;
        n /= 2;
    }
    cout(sum - 1);
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

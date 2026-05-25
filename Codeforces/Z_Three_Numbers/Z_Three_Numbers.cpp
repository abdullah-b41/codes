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
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (s - i - j >= 0 && s - i - j <= k)
                cnt++;
        }
    }
    cout(cnt);
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}

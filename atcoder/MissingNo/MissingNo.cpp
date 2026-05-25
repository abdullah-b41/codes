#include <bits/stdc++.h>
using namespace std;

// clang-format off
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cout(x) cout << x << "\n";
#define rep(s,n) for(int i=s;i<n;i++)
#define sort(v) sort(v.begin(), v.end());
#define cin(x,n) for(int i=0;i<n;i++) cin >> x[i];
#define coutv(v) for(int i=0; i<(int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "" : " "); cout << "\n";
#define vct(v,n) vector<int> v(n); cin(v,n);
// clang-format on

void solve()
{
    int n;
    cin >> n;
    vct(v, n);
    int a[1000] = {};
    rep(0, n) a[v[i]]++;
    rep(*min_element(all(v)), *max_element(all(v)))
    {
        if (a[i] == 0)
        {
            cout(i);
            break;
        }
    }
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}

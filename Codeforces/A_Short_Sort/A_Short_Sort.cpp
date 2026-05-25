#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        if (s[0] == 'a')
            cnt++;
        if (s[1] == 'b')
            cnt++;
        if (s[2] == 'c')
            cnt++;
        if (cnt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
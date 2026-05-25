#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int arr[2][2] = {};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1] && arr[1][0] < arr[1][1])
    {
        cout << "YES\n";
        return;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            int x1 = arr[0][0], x2 = arr[0][1], x3 = arr[1][0], x4 = arr[1][1];
            arr[0][0] = x3;
            arr[0][1] = x1;
            arr[1][0] = x4;
            arr[1][1] = x2;
            if (arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1] && arr[1][0] < arr[1][1])
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[100] = {}, original[100] = {};

    for (int i = 0; i < n - 1; i++)
        cin >> original[i];

    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < n - 1; j++)
            arr[j] = original[j];

        arr[n - 1] = i;
        sort(arr, arr + n);

        int sum = 0;
        for (int j = 1; j < n - 1; j++)
            sum += arr[j];

        if (sum >= x)
        {
            cout << i << '\n';
            return;
        }
    }

    cout << "-1\n";
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}
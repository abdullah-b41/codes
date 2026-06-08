#include <bits/stdc++.h>
using namespace std;

// Find maximum using binary search
int main()
{
    int n = 11;
    vector<int> v = {12, 11, 9, 8, 6, 4, 3, 2, 1};

    int left = 0, right = n - 1, ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (mid == 0 || v[mid] > v[mid - 1])
        {
            ans = v[mid];
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << ans << '\n';
}

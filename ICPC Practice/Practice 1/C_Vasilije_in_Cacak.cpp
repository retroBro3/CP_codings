#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;
        int minX = 0, maxS = 0;
        int arr[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            arr[i] = i;
            if (i <= k)
                minX += i;
            if (i > n - k)
                maxS += i;
        }

        // cout << minX << " " << maxS << endl;
        if (minX <= s && maxS >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
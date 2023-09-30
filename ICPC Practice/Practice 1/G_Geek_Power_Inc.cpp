#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        long long n, freq = 0;
        cin >> n;
        map<long long, long long> mp;

        while (n--)
        {
            int a, b;
            cin >> a >> b;
            mp[b] += a;
            freq += a;
        }
        // cout << freq << endl;
        long long maxVal = INT32_MIN;

        for (auto i : mp)
        {
            // cout << i.first << 'D ' << i.second << endl;
            maxVal = max(maxVal, 1LL * i.first * freq);

            freq -= i.second;
        }
        cout << "Case " << i << ": " << maxVal << endl;
    }

    return 0;
}
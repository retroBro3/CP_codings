#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1'000'000'007;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        ll arrSum = 0;
        bool invalid = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] < i + 1)
                invalid = !invalid;

            arrSum += v[i];
        }

        ll sum = 0;
        sum += n * (n + 1) / 2;

        if (arrSum < sum || invalid)
        {
            cout << "Case " << i << ": " << 0 << endl;
            return 0;
        }

        ll extra = arrSum - sum;
        if (extra == 0)
            cout << "Case " << i << ": " << 1 << endl;
        else
        {
        }
    }

    return 0;
}
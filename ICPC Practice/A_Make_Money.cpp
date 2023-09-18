/*
Accepted by "Labyrinth_Leets"
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{ 
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c;
        cin >> n >> x >> c;

        ll sum = 0;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int y;
            cin >> y;
            v.push_back(y);
            sum += y;
        }

        sort(v.begin(), v.end());

        /// perfix sum
        for (int i = 1; i < v.size(); ++i)
        {
            v[i] += v[i - 1];
        }

        ll maxRes = sum;
        for (int i = 0; i < v.size(); ++i)
        {
            ll sum2 = sum - v[i] + (x * (i + 1)) - (c * (i + 1));
            maxRes = max(maxRes, sum2);
        }

        cout << maxRes << endl;
    }
}
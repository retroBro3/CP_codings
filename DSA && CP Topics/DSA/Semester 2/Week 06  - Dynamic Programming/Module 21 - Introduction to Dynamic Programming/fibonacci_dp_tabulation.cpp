#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> result(n + 1, -1);
    result[0] = result[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        result[i] = result[i - 1] + result[i - 2];
    }

    cout << result[n] << endl;

    return 0;
}

/*
--------
Testcase
--------
Input:
100
Output:
1298777728820984005

 */
/* Not done */

#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl
#define incr_loop(a, n) for (i = a; i < n; i++)
#define decr_loop(a, b) for (i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long ll;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define sort_all(v) sort(all(v));
#define PI 3.141592653589793238462
#define space cout << ' ';
#define gcd(a, b) __gcd(a, b);

#define fori(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i >= b; --i)
#define jfo(a, b) for (auto j = a; j < b; ++j)
#define njfo(a, b) for (auto j = a; j >= b; --j)
#define tt    \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.size(), n2 = s2.size();

        if (s1.size() < s2.size())
        {
            for (int i = 1; i <= abs(n1 - n2); ++i)
            {
                s1.insert(0, "0");
            }
        }
        else if (s2.size() < s1.size())
        {
            for (int i = 1; i <= abs(n1 - n2); ++i)
            {
                s2.insert(0, "0");
            }
        }

        n1 = n2 = s1.size();
        int ans = 0;

        int u = s1[0] - '0';
        int d = s2[0] - '0';
        if (u > d)
            swap(s1, s2);

        for (int i = 0; i < n1; ++i)
        {
            u = s1[i] - '0';
            d = s2[i] - '0';

            if (i == 0 && (u == d))
                continue;
            if (u < d)
                ans += abs(d - u);
            else
                ans += 9;
        }

        cout << ans << "\n";
    }
}
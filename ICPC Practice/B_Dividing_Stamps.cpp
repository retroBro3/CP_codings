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

#define fori(a,b) for(auto i=a;i<=b;++i)
#define nfo(a,b) for(auto i=a;i>=b;--i)
#define jfo(a,b) for(auto j=a;j<b;++j)
#define njfo(a,b) for(auto j=a;j>=b;--j)
#define tt ll t; cin>>t; while(t--)

int main()
{
    ll n, x = 0;
    cin >> n;

    fori(1, n) {
        int y;
        cin >> y;
        x += y;
    }

    ll expected = n * (n + 1) / 2;


    if(expected == x)
        cout<< "YES\n";
    else cout<< "NO\n";
    
}
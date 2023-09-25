#include <bits/stdc++.h>
using namespace std;

int extended_euclidean_gcd(int a, int b, int x, int y)
{

    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    /// going to the level until b gets to 0
    int d = extended_euclidean_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);

    return d;
}

int main()
{

    int a, b;
    while (cin >> a >> b)
    {
        int x, y;
        int gcd_res = extended_euclidean_gcd(a, b, x, y);
        cout << gcd_res << " ";
        cout << x << " " << y << endl;
        x = y = 0;
    }

    return 0;
}
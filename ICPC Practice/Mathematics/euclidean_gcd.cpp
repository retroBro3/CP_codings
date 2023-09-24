#include <bits/stdc++.h>
using namespace std;

int euclids_gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return euclids_gcd(b % a, a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << euclids_gcd(a, b) << endl;

    return 0;
}

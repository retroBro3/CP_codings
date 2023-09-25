#include <bits/stdc++.h>
using namespace std;
#define ll long long

void superSortDes(int &a, int &b, int &c)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a < c)
    {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b < c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
}

void superSortAsc(int &a, int &b, int &c)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int cnt = 0;
        int x, y, z;
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        while (1)
        {
            int sum = a + b + c;

            /// 2 kata
            superSortDes(a, b, c);
            a -= k, b -= k;

            // 2 jog kora
            superSortAsc(a, b, c);
            a += k, b += k;

            if (a == b && b == c)
            {
                cout << "Case " << i << ": Peaceful\n";
                break;
            }
            else
            {
                ++cnt;
                if (cnt == 1)
                {
                    x = a, y = b, z = c;
                    superSortAsc(x, y, z);
                }

                if (x == a && y == b && z == c)
                {
                    superSortAsc(a, b, c);
                    cout << "Case " << i << ": Fight\n";
                    break;
                }
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int a, b, c, k;
        cin >> a >> b >> c >> k;

        int maxJuice = max(max(a, b), c);
        int minJuice = min(min(a, b), c);

        if (a == b && b == c)
            cout << "Case " << i << ": Peaceful\n";
        else if (maxJuice - minJuice > k * 2)
        {
            cout << "Case " << i << ": Fight\n";
        }
        else
            cout << "Case " << i << ": Peaceful\n";
    }
    return 0;
}
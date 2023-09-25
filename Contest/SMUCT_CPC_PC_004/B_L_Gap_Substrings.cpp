#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        g += 2;

        string str;
        cin >> str;

        set<string> strs;
        int cnt = 0;

        int n = str.size();

        for (int i = 0; i < n - g + 1; i++)
        {
            for (int j = g; j <= n; j++)
            {
                strs.insert(str.substr(i, j));
            }
        }

        cout << strs.size() << endl;

        for (auto i : strs)
            cout << i << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool flag = 1;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        flag = (arr[i] % 2 != 0) ? 0 : 1;
    }

    int cnt = 0;
    while (flag)
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % 2 != 0)
            {
                flag = 0;
                break;
            }
            arr[i] /= 2;
        }
        if (flag)
            ++cnt;
    }

    cout << cnt << endl;

    return 0;
}
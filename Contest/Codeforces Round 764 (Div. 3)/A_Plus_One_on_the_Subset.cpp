#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int maxValue = *max_element(arr, arr + n);
        int minValue = *min_element(arr, arr + n);
        cout << maxValue - minValue << endl;
    }

    return 0;
}
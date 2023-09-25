#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        vector<int>values;
        values.push_back(a - k);
        values.push_back(b - k);
        values.push_back(c - k);
        values.push_back(a);
        values.push_back(b);
        values.push_back(c);
        values.push_back(a + k);
        values.push_back(b + k);
        values.push_back(c + k);
        if (a==b and b==c) {
            cout << "Case " << i << ": Peaceful" << endl;
        }
        else {
            if ((values[0] == values[4] && values[4] == values[8]) || 
            (values[0] == values[5] && values[5] == values[7]) ||
            (values[1] == values[3] && values[3] == values[8]) ||
            (values[1] == values[5] && values[5] == values[6]) ||
            (values[2] == values[3] && values[3] == values[7]) ||
            (values[2] == values[4] && values[4] == values[6])) {
            cout << "Case " << i << ": Peaceful" << endl;
        }
            else {
                cout << "Case " << i << ": Fight" << endl;
            }
        }
        
    }
    return 0;
}
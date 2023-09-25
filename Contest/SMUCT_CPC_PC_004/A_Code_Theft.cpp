#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<string> store;
    map<string, string> files;
    pair<string, string> devFile;

    while (cin >> t)
    {
        store.push_back(to_string(t));
        cin.ignore();
        string s;
        while (getline(cin, s))
        {
            store.push_back(s);
        }
    }

    /// work starts here
    for (int i = 1; i <= store.size(); ++i)
    {
        if (store[i - 1] >= "1" && store[i - 1] <= "9" || store[i] == "***END***")
        {
            cout << store[i] << endl;
        }
    }
}

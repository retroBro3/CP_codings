/* Done - Subodh Chandra Shil  */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cntL = 0, cntR = 0;
    vector<string> vecStr;
    queue<char> strQu;

    string temp = "";
    for (auto i : str)
    {
        if (strQu.empty())
        {
            if (!temp.empty())
            {
                vecStr.push_back(temp);
                temp = "";
            }
            strQu.push(i);
            temp += i;
        }
        else if (strQu.front() == i)
        {
            temp += i;
            strQu.push(i);
        }
        else if (strQu.front() != i)
        {
            temp += i;
            strQu.pop();
        }
    }
    if (!temp.empty())
        vecStr.push_back(temp);

    cout << vecStr.size() << endl;
    for (auto i : vecStr)
        cout << i << endl;

    return 0;
}
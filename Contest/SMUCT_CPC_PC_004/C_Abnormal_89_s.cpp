#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i, int j)
{
    while (i <= j)
    {
        if (str[i] != str[j])
            return false;

        ++i, --j;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;

        int n = a.size();
        int i = 0, j = n - 1;

        bool palindrome = 0, alindrome = 0, simple = 0;

        for (; i < j; ++i)
        {
            if (isPalindrome(a, 0, i) && isPalindrome(a, i + 1, j))
            {
                alindrome = 1;
                break;
            }
        }

        if (alindrome)
            cout << "alindrome\n";
        else if (!alindrome && isPalindrome(a, 0, j))
        {
            cout << "palindrome\n";
        }
        else
            cout << "simple\n";
    }

    return 0;
}
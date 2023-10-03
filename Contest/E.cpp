#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    while (1)
    {
        int n, cnt = 0;
        cin >> n;
        if (!n)
            break;

        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            int cnt = 0;
            // cout << s << " " << s.size() << endl;

            if (s[0] == 'D')
            {
                int s2 = s[2] - '0';
                if (s2 <= 9 && s[3] != ':')
                {
                    ++cnt;
                    continue;
                }

                int s4 = s[4] - '0';
                int s5 = s[5] - '0';
                if (s4 > 3 || (s4 == 3 && s5 > 0))
                {
                    ++cnt;
                    continue;
                }

                int s7 = s[7] - '0';
                int s8 = s[8] - '0';
                if (s2 == 9 && s4 == 3 && (s7 || s8))
                {
                    ++cnt;
                    continue;
                }

                if (s[11] == ':')
                    continue;

                int s10 = s[10] - '0', s11;
                s11 = s[11] - '0';

                int endT1 = s10 * 10 + s11;
            }
        }

        cout << endl;
    }

    return 0;
}
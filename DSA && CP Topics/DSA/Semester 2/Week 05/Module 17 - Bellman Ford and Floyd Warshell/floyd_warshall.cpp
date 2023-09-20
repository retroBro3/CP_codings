#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int dist[n + 1][n + 1];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            dist[i][j] = INT32_MAX;
            if (i == j)
                dist[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dist[a][b] = w;
    }

    for (int viaNode = 1; viaNode <= n; ++viaNode)
    {
        for (int i = 1; i <= n; ++i)
        {
            /// ignore if viaNode is similar as 'i'
            if (i == viaNode)
                continue;

            for (int j = 1; j <= n; ++j)
            {
                /* if (j == viaNode)
                    continue; */

                if (j == viaNode || dist[viaNode][j] == INT32_MAX || dist[i][viaNode] == INT32_MAX)
                    continue;

                int withViaNode = dist[i][viaNode] + dist[viaNode][j];
                int directWeight = dist[i][j];

                if (withViaNode < directWeight)
                {
                    dist[i][j] = withViaNode;
                }
            }
        }
    }

    /// display
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (dist[i][j] == INT32_MAX)
                cout << "INF\t";
            else
                cout << dist[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}

/*
----------
Testcase 1
----------
4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4

 */
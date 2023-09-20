#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, edges;
    cin >> n >> edges;
    bool undirected = false;

    int graph[n + 1][n + 1];
    /// initialize all cells with value 0
    memset(graph, 0, sizeof(graph));

    for (int i = 1; i <= edges; ++i)
    {
        int u, v, wt;
        cin >> u >> v >> wt;

        graph[u][v] = wt;
        if (undirected)
            graph[v][u] = wt;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << graph[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

/*
Input
5 17
1 1 10
1 4 33
1 5 5
2 3 7
2 5 1
3 1 34
3 3 45
3 4 60
4 2 70
4 3 80
4 4 90
4 5 2
5 1 11
5 2 20
5 3 5
5 4 1
5 5 17

Output:
10	0	0	33	5
0	0	7	0	1
34	0	45	60	0
0	70	80	90	2
11	20	5	1	17
 */
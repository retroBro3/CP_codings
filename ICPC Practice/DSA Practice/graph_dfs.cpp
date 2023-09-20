#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<pair<int, int>> graph[N];
vector<bool> visited(N, 0);

void dfs(int s)
{
    if (visited[s])
        return;

    visited[s] = 1;
    cout << s << " ";

    for (auto i : graph[s])
    {
        if (!visited[i.first])
            dfs(i.first);
    }
}

int main()
{
    int n, edges;
    cin >> n >> edges;

    bool undirected = 1;

    for (int i = 1; i <= edges; ++i)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        graph[u].push_back({v, wt});

        if (undirected)
            graph[v].push_back({u, wt});
    }

    dfs(1);

    return 0;
}

/*
Input:
6 6
1 2 10
2 5 13
2 6 33
1 3 20
3 4 11
4 5 12

Output:

  */
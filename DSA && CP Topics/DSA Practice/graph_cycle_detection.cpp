#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
vector<bool> visited(N, 0);

bool detect_cycle(int u, int parent = -1)
{
    visited[u] = 1;
    bool isCyclic = 0;

    for (int v : graph[u])
    {
        // ignore self loop and connection with parent node
        // in undirected graph`
        if (v == parent)
            continue;

        if (visited[v])
            return true;

        if (detect_cycle(u, v))
            return true;
    }

    return isCyclic;
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
        graph[u].push_back(v);

        if (undirected)
            graph[v].push_back(v);
    }

    // if we have to find cyclce in a multi-component graph
    for (int i = 1; i <= n; ++i)
    {
    }

    return 0;
}
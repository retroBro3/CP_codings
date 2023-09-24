/*
When to use dfs graph in tree:

1. In a tree question if it asked to find the height of each node

2. In a tree question if it asked to find the depth of each node
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<pair<int, int>> graph[N];
vector<bool> visited(N, 0);
vector<int> depth(N, 0);
vector<int> height(N, 0);

void dfs(int u)
{
    if (visited[u])
        return;

    // u is parent

    visited[u] = 1;
    cout << u << " ";

    // going through every children of 'u'
    for (auto i : graph[u])
    {
        int v = i.first;
        if (!visited[v])
        {
            depth[v] = depth[u] + 1;
            dfs(v);

            if (height[v] + 1 > height[u])
            {
                height[u] = height[v] + 1;
            }
        }
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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, edges;
    cin >> n >> edges;

    /// adjacency list
    vector<pair<int, int>> graph[n + 1];
    bool undirected = false;

    for (int i = 1; i <= edges; ++i)
    {
        int u, v, wt;
        cin >> u >> v >> wt;

        graph[u].push_back({v, wt});
        if (undirected)
            graph[v].push_back({u, wt});
    }

    for (int i = 1; i <= n; ++i)
    {
        if (graph[i].empty())
            continue;

        cout << "Node: " << i << " ";

        for (auto j : graph[i])
            cout << "[ " << j.first << ", " << j.second << " ]";

        cout << endl;
    }

    return 0;
}
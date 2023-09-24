#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
vector<int> visited(N);
vector<int> level(N);

void bfs(int s)
{
    queue<int> qu;
    qu.push(s);

    visited[s] = 1;
    level[s] = 1;

    while (!qu.empty())
    {
        int u = qu.front();
        cout << u << " ";

        for (auto i : graph[u])
        {
            if (!visited[i])
            {
                qu.push(i);
                level[i] = level[u] + 1;
            }
        }

        qu.pop();
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source = 1;
    bfs(source);

    return 0;
}
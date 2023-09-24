#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> result;

    void dfs(int s, int V, vector<int> adj[], vector<bool> &visited)
    {
        if (visited[s])
            return;

        visited[s] = 1;
        result.push_back(s);

        for (auto i : adj[s])
        {
            if (!visited[i])
                dfs(i, V, adj, visited);
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<bool> visited(V + 1, false);
        dfs(0, V, adj, visited);

        return result;
    }
};

int main()
{

    return 0;
}
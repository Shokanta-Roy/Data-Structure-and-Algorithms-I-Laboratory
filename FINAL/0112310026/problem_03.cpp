#include <bits/stdc++.h>

using namespace std;

void shortestPathBFS(int V, vector<pair<int, int>> edges, int start)
{
    vector<vector<int>> adj(V);

    for (auto edge : edges)
    {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    vector<int> distance(V, numeric_limits<int>::max());
    queue<int> q;

    distance[start] = 0;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node])
        {
            if (distance[neighbor] == numeric_limits<int>::max())
            {
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);
            }
        }
    }

    cout << "Distance from " << start << ": ";
    for (int d : distance)
    {
        cout << d << " ";
    }
    cout << endl;
}

int main()
{
    int V = 5, E = 6;
    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 4}, {3, 4}};
    int start = 0;

    shortestPathBFS(V, edges, start);

    return 0;
}

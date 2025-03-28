#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int nVertices;
    int nEdges;
    bool directed;
    int adj[100][100];
    bool visited[100];

public:
    // Constructor
    Graph(bool dir)
    {
        nVertices = 0;
        nEdges = 0;
        directed = dir;
    }

    // Set the number of vertices and initialize adjacency matrix
    void setnVertices(int n)
    {
        nVertices = n;
        for (int i = 0; i < nVertices; i++)
        {
            for (int j = 0; j < nVertices; j++)
            {
                adj[i][j] = 0;
            }
        }
    }

    // Add an edge to the graph
    void addEdge(int u, int v)
    {
        if (u < 0 || u >= nVertices || v < 0 || v >= nVertices)
        {
            return;
        }

        adj[u][v] = 1;
        nEdges++;

        if (!directed)
        {
            adj[v][u] = 1;
        }
    }

    // Initialize visited array
    void init()
    {
        for (int i = 0; i < nVertices; i++)
        {
            visited[i] = false;
        }
    }

    // Recursive DFS function
    void DFSRecursive(int start)
    {
        visited[start] = true;
        cout << start + 1 << " "; // Output 1-based index

        for (int i = 0; i < nVertices; i++)
        {
            if (adj[start][i] == 1 && !visited[i])
            {
                DFSRecursive(i);
            }
        }
    }

    // Wrapper function for DFS traversal
    void DFS(int start)
    {
        cout << "DFS Traversal: ";
        DFSRecursive(start);
        cout << endl;
    }
};

int main()
{
    Graph g(false); // Create an undirected graph

    // Input the number of vertices and edges
    int nVertices, nEdges;
    cout << "Enter the number of vertices: ";
    cin >> nVertices;
    g.setnVertices(nVertices);

    cout << "Enter the number of edges: ";
    cin >> nEdges;

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < nEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u - 1, v - 1); // Convert to 0-based index
    }

    int startNode;
    cout << "Enter the starting node: ";
    cin >> startNode;

    g.init();
    g.DFS(startNode - 1); // Convert to 0-based index

    return 0;
}

#include <iostream>
#include <list>

using namespace std;

class Graph
{
private:
    int vertices;       // Number of vertices
    int **adjMatrix;    // Adjacency matrix (dynamic 2D array)
    list<int> *adjList; // Adjacency list (array of linked lists)

public:
    // Constructor
    Graph(int v)
    {
        vertices = v;

        // Initialize adjacency matrix
        adjMatrix = new int *[vertices];
        for (int i = 0; i < vertices; i++)
        {
            adjMatrix[i] = new int[vertices];
            for (int j = 0; j < vertices; j++)
            {
                adjMatrix[i][j] = 0; // Set all entries to 0
            }
        }

        // Initialize adjacency list
        adjList = new list<int>[vertices];
    }

    // Function to add an edge
    void addEdge(int u, int v)
    {
        // Add to adjacency matrix
        adjMatrix[u - 1][v - 1] = 1; // Convert 1-based to 0-based
        adjMatrix[v - 1][u - 1] = 1; // For undirected graph

        // Add to adjacency list
        adjList[u - 1].push_back(v);
        adjList[v - 1].push_back(u);
    }

    // Function to display adjacency matrix
    void displayAdjMatrix()
    {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < vertices; i++)
        {
            for (int j = 0; j < vertices; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to display adjacency list
    void displayAdjList()
    {
        cout << "Adjacency List:" << endl;
        for (int i = 0; i < vertices; i++)
        {
            cout << i + 1 << ": ";
            for (auto neighbor : adjList[i])
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    // Destructor
    ~Graph()
    {
        // Deallocate adjacency matrix
        for (int i = 0; i < vertices; i++)
        {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;

        // Deallocate adjacency list
        delete[] adjList;
    }
};

int main()
{
    int vertices = 4; // Number of vertices
    Graph graph(vertices);

    // Edges to add
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    // Display graph representations
    graph.displayAdjMatrix();
    cout << endl;
    graph.displayAdjList();

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int nVertices;
    int nEdges;
    bool directed;
    int adj[100][100];
    bool visited[100];

public:
    Graph(bool dir)
    {
        nVertices=0;
        nEdges=0;
        directed=dir;
    }

    void setnVertices(int n)
    {
        nVertices=n;
        for(int i=0; i<nVertices;i++)
        {
            for(int j=0; j<nVertices;j++)
            {
                adj[i][j]=0;
            }
        }
    }

    void addEdge(int u, int v)
    {
        if(u<0 || u>=nVertices || v<0 || v>=nVertices)
        {
            return;
        }

        adj[u][v]=1;
        nEdges++;

        if(!directed)
        {
            adj[v][u]=1;
        }

    }


    void removeEdge(int u, int v)
    {
        if(u<0 || u>=nVertices || v<0 || v>=nVertices)
        {
            return;
        }

        adj[u][v]=0;
        nEdges--;

        if(!directed)
        {
            adj[v][u]=0;
        }

    }


    void printGraph()
    {
        for(int i=0; i<nVertices; i++)
        {
            for(int j=0; j<nVertices; j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void init()
    {
        for(int i=0; i<nVertices; i++)
        {
            visited[i]=false;
        }
    }


    void BFS(int start)
    {
        queue<int> q;
        q.push(start);
        visited[start]=true;

        while(!q.empty())
        {
            int current=q.front();
            q.pop();
            cout<<current<<" ";

            for(int i=0; i<nVertices;i++)
            {
                if(adj[current][i]==1 && !visited[i])
                {
                    q.push(i);
                    visited[i]=true;
                }
            }
        }

        cout<<endl;
    }


    void DFS(int start)
    {
        stack<int> s;
        s.push(start);
        visited[start]=true;

        while(!s.empty())
        {
            int current=s.top();
            s.pop();
            cout<<current<<" ";

            for(int i=0; i<nVertices;i++)
            {
                if(adj[current][i]==1 && !visited[i])
                {
                    s.push(i);
                    visited[i]=true;
                }
            }
        }

        cout<<endl;
    }
};



int main()
{
    Graph g(false);
    g.setnVertices(6);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,5);

    g.init();

    g.BFS(0);

    g.init();

    g.DFS(0);


}

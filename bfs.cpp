#include "bits/stdc++.h"
using namespace std;

 

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for(auto x : adj[v]){
           cout << "-> " << x;
        }
        printf("\n");
    }
}
 

void bfs(int v,vector<int>adj[]) // pass the vertex to start from 
{
    int V = 5;
    vector<bool>visi(V);
    for(int i =0;i<V;i++) visi[i] = 0;
    queue<int> list; // BFS queue 
    visi[v] = true;
    list.push(v);

    while(!list.empty())
    {
        v = list.front();
        cout << v << " ";
        list.pop();

        for(auto it = adj[v].begin(); it!= adj[v].end(); it++)
        {
            if(visi[*it] == 0)
            {
                visi[*it] = 1;
                list.push(*it);
            }
        }
    }
    
}
int main()
{
    int V = 8;
    
    

    vector<int> adj[V];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 4);
    addEdge(adj, 1, 6);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 5, 4);
    addEdge(adj, 3, 7);
    addEdge(adj, 5, 7);
    addEdge(adj, 5, 6);


    printGraph(adj, V);
    bfs(2,adj);
    return 0;
    
}
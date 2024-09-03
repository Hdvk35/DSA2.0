#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&adj, int s, vector<bool>&visited){
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto it:adj[node]){
            if(!visited[it]){
                visited[it]=true;
                q.push(it);
            }
        }
    }
                
}


void addEdge(vector<vector<int>>&adj,int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}

int main()
{
     int V = 5;

    // Adjacency list representation of the graph
    vector<vector<int>> adj(V);

    // Add edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    // Mark all the vertices as not visited
    vector<bool> visited(V, false);

    // Perform BFS traversal starting from vertex 0
    cout << "BFS starting from 0 : \n";
    bfs(adj, 0, visited);

    return 0;
}
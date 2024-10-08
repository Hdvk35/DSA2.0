#include<bits/stdc++.h>
using namespace std;

class graph{
   public:
        unordered_map<int,list<int>>adj;
        void addEdge(int u, int v, bool direction){
           // direction =0 -> undirected graph
           // direction =1 -> directed graph


           // create an edge from u to v;

            adj[u].push_back(v);

                 if(direction == 0){
                    adj[v].push_back(u);
                 }

        }

        void printGraph(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j: i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{   

    int n;
    cout<<"Enter the no. of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the no. of edges"<<endl;
    cin>>m;
    graph g;
    
    for(int i=0; i<m; i++){
        int u,v;
        cout<<"Enter the edge "<<i+1<<" : "<<endl;
        cin>>u>>v;
        g.addEdge(u, v, 0);
    }

        g.printGraph();

    return 0;
}
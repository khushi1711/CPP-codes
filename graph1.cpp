//representation of graph in matrix format
#include<bits/stdc++.h>
using namespace std;
//function to add edge in an undirescted graph
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}
//function for printing graph in matrix format
void printGraph(vector<int>adj[],int V){
    for(int v=0;v<V;v++){
        cout<<"\n adjacency list of vertex"<<v<<"\n head";
        for(auto x:adj[v])
        cout<<"->"<<x;
        printf("\n");
    }
}
int main(){
    int V;
    cout<<"enter number of edges"<<endl;
    cin>>V;
    vector<int> adj[V];
    //initialising adjacency matrix with initially all eelements 0
    vector<vector<int>>v(V,vector<int>(V,0));
    for(int i=0;i<V;i++){
        cout<<"enter node from and node to edges"<<endl;
        int x,y;
        cin>>x>>y;
        addEdge(adj,x,y);//adding edge to the undirected graph
        v[x][y]=1;
        v[y][x]=1;
    }
    printGraph(adj,V);
    for(int i=1;i<V;i++){
        for(int j=1;j<V;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;

}
return 0;
}
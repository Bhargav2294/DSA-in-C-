#include <bits/stdc++.h>
using namespace std;

void dfsrec(vector<int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout << s << " ";
    for(int u : adj[s]){
        if(visited[u]==false)
            dfsrec(adj,u,visited);
    }
}

void dfs(vector<int> adj[],int v,int s){
    bool visited[v];
    for(int i=0;i=v;i++)
        visited[i]=false;
    dfsrec(adj,s,visited);
}

void printgraph(vector<int> adj[], int n)
{
    for(int i=0;i<n;i++){
        cout << "Adjacency list of vertex " << i << ": ";
        for(int x: adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cin >> n >> m; // n=elements,m=edges
    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    printgraph(adj,m);
    dfs(adj,n,0);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adj, int start,int n)
{
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (int i = 0; i < n; ++i)
        {
            if (adj[current][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

void dfs(vector<vector<int>> &adj, int start,int n)
{
   
    vector<bool> visited(n, false);
    stack<int> s;

    visited[start] = true;
    s.push(start);

 
    while (!s.empty())
    {
        int current = s.top();
        cout << current << " ";
        s.pop();

        for (int i = 0; i < n; ++i)
        {
            if (adj[current][i] == 1 && !visited[i])
            {
                visited[i] = true;
                s.push(i);
            }
        }
    }
    cout << endl;
}

int main()
{
    cout << "nodes and edges: " ;
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n, vector<int>(n, 0));

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; 
    }

    int s;
    cout << "starting node: ";
    cin >> s;

    bfs(adj, s,n);
    dfs(adj, s,n);

    return 0;
}

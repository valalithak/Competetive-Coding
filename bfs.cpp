#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int n, e; // no of nodes and edges
vector<int>adj[1000];
queue<int>q;
int visited[1000];

void inputgraph(int n, int e)
{
    for(int i=0;i<e;i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y); // edge from x->y

    }
}

void bfs ( int root )
{
    visited[root] = 1;
    q.push(root);

    while(!q.empty())
    {
        root = q.front();
        cout << root << '\t';
        q.pop();

        for(int i=0; i< adj[root].size();i++)
        {
            if(visited[adj[root][i]]==0)
            {
                visited[adj[root][i]] = 1;
                q.push(adj[root][i]);

            }
        }

    }
    return;

}

int main()
{
    cin >> n >> e;
    inputgraph(n,e);
    bfs(1);
    return 0;
}

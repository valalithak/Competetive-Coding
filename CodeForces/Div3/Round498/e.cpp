#include "bits/stdc++.h"
#include "string"
using namespace std;
const long long MAXN = 2e5 + 5;

vector <int> adj[MAXN];
vector <int> com;
int start[MAXN];
int finish[MAXN];
int timer = 0;
bool visited[MAXN];

void dfs(int node)
{
    if (visited[node] == false)
    {
        start[node] = timer;
        timer++;
        visited[node] = true;
        com.push_back(node);
        int l = adj[node].size();
        for (int i=0; i<l; i++) 
        {
            dfs(adj[node][i]);
        }
        finish[node] = timer;
        timer++;
    }
    return;
}


int main()
{
    int n, q;
    cin >> n >> q;
    for (int i=1; i<=n; i++) visited[i] = false;
    for (int i=2; i<=n; i++)
    {
        int p;
        cin >> p;
        adj[p].push_back(i);
    }
    dfs(1);
    int ind[MAXN];
    int l = com.size();
    for (int i=0; i<l; i++) ind[com[i]] = i;
    while (q--)
    {
        int u, k;
        cin >> u >> k;
        k = ind[u] + k - 1;
        if (k >= n) cout << "-1" << endl;
        else if (start[u] <= start[com[k]] && finish[u] >= finish[com[k]]) cout << com[k] << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
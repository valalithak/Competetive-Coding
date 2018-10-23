#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include<queue>
// http://codeforces.com/problemset/problem/520/B
// red button = X2
// blue button = -1

using namespace std;

long long int n, m;
vector<long long int>adj[100005];
queue<long long int>q;
long long int visited[10004];

void createtree(long long int x)
{
    long long int red = 2*x;
    long long int blue = x-1;
    if(m>n)
    {
        adj[x].push_back(red);
        adj[x].push_back(blue);
    }
    else if(m<n)
        adj[x].push_back(blue);
    if ( red == m || blue == m)
            return;
    else
        createtree(blue);
}
long long int c = 0;
void bfs(int x)
{
    visited[x] = 1;
    q.push(x);

    while(!q.empty())
    {
        x = q.front();
        //cout << x << endl;
        c++;
        //cout << "COUNT: " << c << endl;
        q.pop();

        for(int i=0; i< adj[x].size();i++)
        {
            if(visited[adj[x][i]]==0)
            {
                visited[adj[x][i]] = 1;
                q.push(adj[x][i]);
                if(adj[x][i]==m)
                {
                    if(m>n)
                        cout << c-1 << endl;
                    else
                        cout << c << endl;
                    return;
                }

            }
        }

    }

}

int main()
{
    cin >> n >> m;
    createtree(n);
    bfs(n);
    return 0;
}

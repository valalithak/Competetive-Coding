#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long rooms[200005];
    long long sum[200005];
    for (int i=0; i<20005; i++)
    {
        sum[i] = 0;
    }
    for (int i=1; i<=n; i++)
    {
        cin >> rooms[i];
        sum[i] = sum[i-1] + rooms[i];
    }
    long long find[200005];
    for (int i=1; i<=m; i++)
    {
        scanf ("%lld", &find[i]);
    }
    int p = n;
    int f[200005];
    long long k[200005];
    for (int i=m; i>=1; i--)
    {
        if (find[i] <= sum[p] && find[i] > sum[p-1])
        {
            f[i] = p;
            k[i] = find[i] - sum[p-1];
        }
        else 
        {
            p--;
            i++;
        }
    }
    for (int i=1; i<=m; i++)
    {
        cout << f[i] << " " << k[i] << "\n";
    }
    return 0;
}
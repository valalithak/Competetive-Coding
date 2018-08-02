#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x = m+1;
    int pts[x];
    for (int i=0; i<=x; i++) pts[i] = 0;
    for (int i=0; i<n; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j=l; j<=r; j++) pts[j]++;
    }
    int cnt = 0;
    for (int i=1; i<=m; i++)
    {
        if (pts[i] == 0) cnt++;
    }
    cout << cnt << endl;
    for (int i=1; i<=m; i++)
    {
        if (pts[i] == 0) cout << i << " ";
    }
    cout << endl;
    return 0;
}
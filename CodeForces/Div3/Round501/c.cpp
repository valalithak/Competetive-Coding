#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n;
    long long m;
    cin >> n >> m;
    long long a[n], b[n], diff[n];
    long long suma=0, sumb=0;
    for (int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        diff[i] = a[i]-b[i];
        suma+=a[i];
        sumb+=b[i];
    }
    if (suma <= m) 
    {
        cout << "0\n";
        return 0;
    }
    if (sumb > m)
    {
        cout << "-1\n";
        return 0;
    }
    sort(diff, diff+n);
    int cnt = 0;
    long long d = suma - m;
    int x = n-1;
    while (d>0)
    {
        cnt++;
        d -= diff[x];
        x--;
    }
    cout << cnt << endl;
    return 0;
}
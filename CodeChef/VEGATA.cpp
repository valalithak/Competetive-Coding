#include <bits/stdc++.h>
using namespace std;

#define N 1000000

static int factorCount[N+1];

int main()
{
    int i, j;

    for (i = 0; i <= N; i++) 
    {
        factorCount[i] = 0;
    }

    for (i = 2; i <= N; i++) {
        if (factorCount[i] == 0)
        { 
            for (j = i; j <= N; j += i) 
            {
                factorCount[j]++;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long ans=0;
        for (i=n; i<m; i++)
        {
            ans += factorCount[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int c[105];
    vector <int> ind;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<105; i++)
    {
        c[i] = 0;
    }
    for (int i=0; i<n; i++)
    {
        c[a[i]]++;
        if (c[a[i]] == 1)
            ind.push_back(i+1);
    }
    int tot = 0;
    for (int i=0; i<105; i++)
    {
        if (c[i] != 0)
        {
            tot++;
        }
    }
    if (tot >= k) cout << "YES\n";
    else cout << "NO";
    if (tot >= k)
    {
        for (int i=0; i<k; i++)
        {
            cout << ind[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}
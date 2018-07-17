#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    vector <pair<int, int> > ind;
    for (int i=0; i<n; i++)
    {
        ind.push_back(make_pair(arr[i], i));
    }
    sort(ind.begin(), ind.end());
    int inx[k];
    long long max = 0;
    int x = 0;
    for (int i=(n-1); i>=(n-k); i--)
    {
        inx[x] = ind[i].second;
        max += ind[i].first;
        x++;
    }
    cout << max << endl;
    sort(inx, inx+k);
    if (k == 1) cout << n << endl;
    else 
    {
        cout << inx[0] + 1 << " ";
        for (int i=1; i<k; i++)
        {
            if (inx[k-1]!=(n-1))
            {
                if (i!=(k-1)) cout << inx[i] - inx[i-1] << " ";
                else cout << (n-1) - inx[k-2] << " ";
            }
            else 
            {
                if (i!=(k-1)) cout << inx[i] - inx[i-1] << " ";
                else cout << inx[k-1] - inx[k-2] << " ";            
            }
        }
        cout << endl;
    }
    return 0;
}
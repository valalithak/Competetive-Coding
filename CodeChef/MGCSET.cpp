#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        int k = 0;
        for (int i=0; i<n; i++)
        {
            if (arr[i]%m == 0) k++;
        }
        long long ans = pow(2,k) - 1;
        cout << ans << endl;
    }
    return 0;
}
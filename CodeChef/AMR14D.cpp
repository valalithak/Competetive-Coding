#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count[1005];
        for (int i=0; i<1005; i++)
        {
            count[i] = 0;
        }
        int flag = 0;
        for (int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            count[x] ++;
        }
        for (int i=0; i<1005; i++)
        {
            if (count[i] > 1) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
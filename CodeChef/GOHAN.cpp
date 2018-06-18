#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long r, l, c, vi;
        cin >> r >> l >> c >> vi;
        long double ans;
        ans = r*r*c;
        ans /= 4;
        ans /= l;
        ans = 1 - ans;
        printf ("%.5Lf\n", ans);
    }
    return 0;
}
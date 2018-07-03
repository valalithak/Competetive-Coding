#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long c, d, l;
        cin >> c >> d >> l;
        int flag = 0;
        long long max, min;
        max = 4*(c+d);
        if (c > 2*d) min = 4*(c-d);
        else min = 4*d;
        if (l>=min && l<=max && l%4==0) flag = 1;
        if (flag == 1) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
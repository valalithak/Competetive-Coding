#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x, y;
    cin >> x >> y;
    long double l, r;
    l = log(y) + log(log(x));
    //l = l/x;
    r = log(x) + log(log(y));
    //r = r/y;
    if (l < r) cout << "<\n";
    else if (l > r) cout << ">\n";
    else cout << "=\n";
    return 0;
}
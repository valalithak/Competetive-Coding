#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int size = n / 2;
    int in[size], e[size], o[size];
    int ed = 0, od = 0;
    int c = 1;
    for (int i=0; i<size; i++)
    {
        cin >> in[i];
    }
    sort (in, in + size);
    for (int i=0; i<size; i++)
    {
        e[i] = c + 1;
        o[i] = c;
        c += 2;
    }
    for (int i=0; i<size; i++)
    {
        ed += abs(in[i] - e[i]);
        od += abs(in[i] - o[i]);
    }
    if (ed <= od)
        cout << ed << "\n";
    else
        cout << od << "\n";
    return 0;
}
#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    int pre = 0;
    for (int i=0; i<n; i++)
    {
        if (i!=(n-i-1))
        {
            if (a[i]==a[n-i-1] && b[i]==b[n-i-1])
            {
                char tmp = a[i];
                a[i] = b[i];
                b[i] = tmp;
            }
            else if (b[i] == b[n-i-1])
            {
                a[i] = a[n-i-1];
                pre++;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if (i==(n-i-1))
        {
            if (a[i] != b[i]) pre++;
        }
        else
        {
            if (a[i]==b[i] && a[n-i-1]==b[n-i-1])
            {}
            else if (a[i]==b[n-i-1] && a[n-i-1]==b[i])
            {
                char tmp = a[i];
                a[i] = a[n-i-1];
                a[n-i-1] = tmp;
            }
            else if (a[i]==b[i] && a[n-i-1]!=b[n-i-1])
            {
                a[n-i-1] = b[n-i-1];
                pre++;
            }
            else if (a[i]==b[n-i-1] && a[n-i-1]!=b[i])
            {
                a[n-i-1] = a[i];
                a[i] = b[i];
                pre++;
            }
            else if (a[n-i-1]==b[n-i-1] && a[i]!=b[i])
            {
                a[i] = b[i];
                pre++;
            }
            else if (a[n-i-1]==b[i] && a[i]!=b[n-i-1])
            {
                a[i] = a[n-i-1];
                a[n-i-1] = b[n-i-1];
                pre++;
            }
            else 
            {
                a[i] = b[i];
                a[n-i-1] = b[n-i-1];
                pre += 2;
            }
        }
    }
    cout << pre << endl;
    return 0;
}
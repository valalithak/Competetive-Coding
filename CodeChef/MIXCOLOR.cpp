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
        vector <long long> arr;
        for (int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        int u = 1;
        for (int i=1; i<n; i++)
        {
            if (arr[i] != arr[i-1]) u++;
        }
        cout << (n-u) << "\n";
    }
    return 0;
}
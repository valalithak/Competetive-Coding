#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n; i++)
    {
        if (arr[i]%2 == 1) arr[i] = arr[i] + 1;
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]%2 == 0) arr[i] = arr[i] - 1;
    }
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
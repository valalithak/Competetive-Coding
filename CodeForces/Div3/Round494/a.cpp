#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count[105];
    for (int i=0; i<105; i++) count[i] = 0;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    int max = 0;
    for (int i=0; i<105; i++)
    {
        if (count[i] > max) max = count[i];
    }
    cout << max << "\n";
    return 0;
}
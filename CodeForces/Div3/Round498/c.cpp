#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    long long sum1[n], sum2[n];
    sum1[0] = arr[0];
    sum2[n-1] = arr[n-1];
    for (int i=1; i<n; i++) sum1[i] = sum1[i-1] + arr[i];
    for (int i=(n-2); i>=0; i--) sum2[i] = sum2[i+1] + arr[i];
    int l = 0, r = (n-1);
    long long sum = 0;
    while (l < r)
    {
        if (sum1[l] == sum2[r]) 
        {
            sum = sum1[l];
            l++;
            r--;
        }
        else if (sum1[l] < sum2[r])
        {
            l++;
        }
        else 
        {

            r--;
        }
    }
    cout << sum << endl;
    return 0;
}
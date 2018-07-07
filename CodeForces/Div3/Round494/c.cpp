#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int temp[n];
    vector <double> avg;
    for (int i=0; i<n; i++) cin >> temp[i];
    for (int i=k; i<=n; i++)
    {
        long long sum = 0;
        for (int j=0; j<i; j++)
        {
            sum += temp[j];
        }
        double tmp = (double) sum / (double) i;
        avg.push_back(tmp);
        for (int j=i; j<n; j++)
        {
            sum = sum + temp[j] - temp[j-i];
            double tmp = (double) sum / (double) i;
            avg.push_back(tmp);
        }
    }
    sort (avg.begin(), avg.end());
    int l = avg.size();
    printf ("%.10lf", avg[l-1]);
    cout << endl;
    return 0;
}
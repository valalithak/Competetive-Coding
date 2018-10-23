//binary search
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n;
int size;
vector<int> arr;
int binarysearch (int n, int low, int high)
{
    if(high>=low)
    {
            int mid = low + (high-low)/2;
            if(arr[mid]==n)
                return mid;
            if(arr[mid] > n)
                return binarysearch(n,low,mid-1);
            else if(arr[mid] < n)
                return binarysearch(n,mid+1,high);
    }
    return -1;
}

int main()
{
    cin >> size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cin >> n;
    int ans = binarysearch(n,0,size-1);
    cout << ans << endl;
    return 0;
}

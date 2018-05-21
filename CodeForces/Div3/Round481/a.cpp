#include <bits/stdc++.h>
using namespace std;

int c[1005];
int arr[55];
int n;
int total;

int main(){
    cin >> n;
    for (int i=0; i<1005; i++){
        c[i] = 0;
    }
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    for (int i=n-1; i>=0; i--){
        if (c[arr[i]] == 0){
            c[arr[i]] = 1;
            continue;
        }
        else if (c[arr[i]] == 1){
            arr[i] = 0;
        }
    }
    total = 0;
    for (int i=0; i<n; i++){
        if (arr[i] != 0){
            total ++;
        }
    }
    cout << total << "\n";
    for (int i=0; i<n; i++){
        if (arr[i] != 0){
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}
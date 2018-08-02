#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    vector <int> pos;
    for (int i=0; i<n; i++)
    {
        if (s[i] != t[i])
        {
            int ind = s.find(t[i]);
            if (ind > i)
            {
                cnt += (ind-i);
                for (int j=ind; j>i; j--) 
                {
                    pos.push_back(j);
                    char tmp = s[j];
                    s[j] = s[(j-1)];
                    s[(j-1)] = tmp;
                }
            }
            else 
            {
                cout << "-1\n";
                return 0;
            }
        }
    }
    int l = pos.size();
    cout << cnt << endl;
    for (int i=0; i<cnt; i++) cout << pos[i] << " ";
    cout << endl;
    return 0;
}
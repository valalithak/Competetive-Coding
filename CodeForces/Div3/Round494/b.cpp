#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    int n = a + b;
    vector <int> s;
    int reqa = 0, reqb = 0;
    int flag = 0;
    if (a>b) flag = 0;
    else flag = 1;

    if (flag == 1)
    {
        for (int i=1; i<=x; i++)
        {
            if (i%2 == 1) 
            {
                s.push_back(1);
                reqb++;
            }
            else 
            {
                s.push_back(0);
                reqa++;
            }
        }
        int ra = a-reqa;
        int rb = b-reqb;
        if (x%2 == 1) 
        {
            if (rb > 0)
            {
            s.push_back(1);
            reqb++;
            }
        }
        else 
        {
            if (ra > 0)
            {
            s.push_back(0);
            reqa++;
            }
        }
        ra = a-reqa;
        rb = b-reqb;
        if (x%2 == 1)
        {
        for (int i=1; i<=rb; i++) s.push_back(1);
        for (int i=1; i<=ra; i++) s.push_back(0);
        }
        else 
        {
        for (int i=1; i<=ra; i++) s.push_back(0);
        for (int i=1; i<=rb; i++) s.push_back(1);
        }
        for (int i=0; i<n; i++) cout << s[i];
        cout << endl;
    }
    else 
    {
        for (int i=1; i<=x; i++)
        {
            if (i%2 == 1) 
            {
                s.push_back(0);
                reqa++;
            }
            else 
            {
                s.push_back(1);
                reqb++;
            }
        }
        int ra = a-reqa;
        int rb = b-reqb;
        if (x%2 == 1) 
        {
            if (ra > 0)
            {
            s.push_back(0);
            reqa++;
            }
        }
        else 
        {
            if (rb >0)
            {
            s.push_back(1);
            reqb++;
            }
        }
        ra = a-reqa;
        rb = b-reqb;
        if (x%2 == 1)
        {
        for (int i=1; i<=ra; i++) s.push_back(0);
        for (int i=1; i<=rb; i++) s.push_back(1);
        }
        else 
        {
        for (int i=1; i<=rb; i++) s.push_back(1);
        for (int i=1; i<=ra; i++) s.push_back(0);
        }
        for (int i=0; i<n; i++) cout << s[i];
        cout << endl;
    }
    return 0;
}
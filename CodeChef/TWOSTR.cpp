#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int s = str1.size();
        int flag = 0;
        for (int i=0; i<s; i++)
        {
            if (str1[i]!='?' && str2[i]!='?')
            {
                if (str1[i] != str2[i])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
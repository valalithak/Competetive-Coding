#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int tally = 0;
    int flag = 0;
    int rem = 0;
    for (int i=0; i<n; i++)
    {
        if (str[i] == 'x')
        {
            tally ++;
            if (tally == 3){
                flag = 1;
                str.erase(str.begin()+i);
                i--;
                n--;
                rem ++;
                tally = 2;
            }
        }
        else 
        {
            tally = 0;
        }
    }
    if (flag == 0){
        cout << "0\n";
    }
    else {
        cout << rem << "\n";
    }
    return 0;
}

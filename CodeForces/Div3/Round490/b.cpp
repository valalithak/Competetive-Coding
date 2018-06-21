#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string str;
  cin >> str;
  vector <int> d;
  for (int i=1; i<=n; i++)
  {
    if (n%i == 0)
    {
      d.push_back(i);
    }
  }
  int l = d.size();
  for (int i=0; i<l; i++)
  {
    reverse(str.begin(), str.begin()+d[i]);
  }
  cout << str << "\n";
  return 0;
}

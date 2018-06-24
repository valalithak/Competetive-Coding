#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int n, k, counts[26], i;
  cin >> n >> k;
  string str;
  cin >> str;
  for (i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		counts[str[i] - 'a'] ++;
	}
  for (i=0; i<26; i++)
  {
    if (counts[i] <= k)
    {
      for (int j=0; j<n; j++)
      {
        if (str[j] == static_cast<char>(i + 'a'))
        str[j]=' ';	
      }
      k -= counts[i];
    }
    else break;
  }
  if (k != 0)
  {
    for (int j=0; j<n; j++)
    {
      if (str[j] == static_cast<char>(i + 'a'))
      {
        str[j]=' ';	
        k--;
        if (k <= 0) break;
      }
    }
  }
  for (i=0; i<n; i++)
  {
    if (str[i] != ' ') cout << str[i];
  }
  cout << "\n";
  return 0;
}
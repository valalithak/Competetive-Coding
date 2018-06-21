#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  deque <int> q;
  for (int i=0; i<n; i++)
  {
    int x;
    cin >> x;
    q.push_back(x);
  }
  int count = 0;
  while (!q.empty())
  {
    if (q.front() > k && q.back() > k) break;
    else if (q.front() <= k)
    {
      count ++;
      q.pop_front();
    }
    else if (q.back() <= k)
    {
      count ++;
      q.pop_back();
    }
  }
  cout << count << "\n";
  return 0;
}

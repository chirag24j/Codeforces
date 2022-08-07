#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  string odd, even, total;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      odd += i;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      even += i;
    }
  }
  total = odd + even;
  cout << total[k - 1];
}

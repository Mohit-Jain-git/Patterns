#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, k, n, l, m;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 2 * n; j++)
    {
      if (i >= j || i >= (2 * n) + 1 - j)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  for (i = 1; i < n; i++)
  {
    for (j = 1; j <= 2 * n; j++)
    {
      if ((i + j) <= n || (i + n) < j)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
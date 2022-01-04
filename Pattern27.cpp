#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, k, n, l, m;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j < 2 * n; j++)
    {
      if ((i + j) == (n + 1) || (i + j) == 2 * n || (i == n && j <= n) || (i == 1 && (i + j) > n))
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
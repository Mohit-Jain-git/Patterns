#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, k, n;
  cin >> n;
  for (i = 1; i < 2 * n; i++)
  {
    int c = i <= n ? i : 2 * n - i;
    for (k = 1; k <= n - c; k++)
    {
      cout << "  ";
    }
    for (j = c; j >= 1; j--)
    {
      cout << j << " ";
    }
    for (j = 2; j <= c; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
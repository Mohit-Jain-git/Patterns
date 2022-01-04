#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, n, k;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (k = 1; k <= n - i; k++)
    {
      cout << "  ";
    }
    for (j = i; j >= 1; j--)
    {
      cout << i << " ";
    }
    for (j = 2; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
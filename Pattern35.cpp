#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, j, k;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (i = 1; i <= n; i++)
  {
    for (k = n + 1; k <= 2 * n - 2 * i; k++)
    {
      cout << " ";
    }
    for (j = n + 1; j <= 2 * i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
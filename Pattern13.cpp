#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, j, k;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (k = i; k < n; k++)
    {
      cout << " ";
    }
    for (j = 1; j <= 2 * i - 1; j++)
    {
      if (i == n || j == 1 || j == (2 * i - 1))
        cout << "*";
      else
        cout << " ";
    }

    cout << endl;
  }
  return 0;
}

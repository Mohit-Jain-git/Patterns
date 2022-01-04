#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, k = 1, n, l, m;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 3 * n; j++)
    {
      if ((n + j) % 2 == 0)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
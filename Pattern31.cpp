#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, n, k;
  cin >> n;
  for (i = 1; i < 2 * n; i++)
  {
    for (j = 1; j < 2 * n; j++)
    {
      int index = n + 1 - min(min(i, j), min(2 * n - i, 2 * n - j));
      cout << index << " ";
    }

    cout << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, n, k = 1;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      if (k % 2 != 0)
      {
        printf("%c ", 64 + k + 32);
        k++;
      }
      else
      {
        printf("%c ", 64 + k);
        k++;
      }
    }
    cout << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, n, k;
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    k = 1;
    for (j = 1; j <= i; j++)
    {
      printf("%c ", 64 + n - i + k);
      k++;
    }
    cout << endl;
  }
  return 0;
}
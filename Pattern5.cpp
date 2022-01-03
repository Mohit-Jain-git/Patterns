#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, j;
  cin >> n;
  for (i = 1; i <= 2 * n - 1; i++)
  {
    int col = i <= n ? i : 2 * n - i;
    for (j = 1; j <= col; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
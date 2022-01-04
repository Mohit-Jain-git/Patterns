#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j, k = 1, n, l, m;
  cin >> n;
  for (i = n; i >= 1; i--)
  {
    for (int spaces = 1; spaces <= n - i; spaces++)
    {
      cout << "";
    }
    for (j = 1; j <= i; j++)
    {
      cout << n - i + 1 << " ";
    }
    cout << endl;
  }
  return 0;
}
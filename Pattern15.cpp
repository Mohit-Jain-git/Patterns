#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, j, k;
  cin >> n;
  for (i = 1; i <= 2 * n - 1; i++)
  {
    for (j = 1; j <= 2 * n - 1; j++)
    {
      if (i + j == (n + 1) || i - j == (n - 1) || i + j == (3 * n - 1) || j - i == (n - 1))
        cout << "*";
      else
        cout << " ";
    }

    cout << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;
int main()
{
  int a, n, sum = 0;
  cin >> a >> n;
  while (1)
  {
    if (n > 0)
    {
      break;
    }
    else
    {
      cin >> n;
    }
  }
  for (int i = a, j = 1; j <= n; i++, j++)
  {
    sum += i;
  }
  cout << sum << endl;

  return 0;
}
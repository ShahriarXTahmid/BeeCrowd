#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if (x > y)
  {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
  }
  for (int i = x+1; i <= y-1; i++)
  {
    if (i % 5 == 2 || i % 5 == 3)
    {
      cout << i << endl;
    }
  }

  return 0;
}

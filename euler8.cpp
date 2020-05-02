
#include <iostream>
#include <string>
using namespace std;
int main()
{
  unsigned int t;
  cin >> t;
  while (t--)
  {
    unsigned int x;
    unsigned int y;
    string num;
    cin >> x >> y >> num;
    unsigned long long r = 0;
    for (int i = 0; i + y < x; i++)
    {
      unsigned long long c = 1;
      for (unsigned int j = 0; j < y; j++)
        c *= num[i + j] - '0';

      if (r < c)
        r = c;
    }

    cout << r <<endl;
  }
  return 0;
}

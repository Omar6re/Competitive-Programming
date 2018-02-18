#include <iostream>

using namespace std;

int
main ()
{
  int a;
  cin >> a;
  int b[a];
  int o[a];
  for (int i = 0; i < a; i++)
    {
      cin >> b[i];
      if (b[i] == i + 1)
	{
	  o[i] = i + 1;
	}
      else
	{
	  o[b[i] - 1] = i + 1;
	}
    }
  for (int i = 0; i < a; i++)
    {
      cout << o[i] << " ";
    }
  return 0;
}

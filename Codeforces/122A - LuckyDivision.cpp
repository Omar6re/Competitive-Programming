#include <iostream>
#include <string>

using namespace std;

int
main ()
{
  int a;
  cin >> a;
  string number = to_string (a);
  for (int i = 0; i < number.size (); i++)
    {
      if (number[i] != 4 && number[i] != 7)
	{
	  if (a % 4 == 0 || a % 7 == 0 || a % 47 == 0 || a % 74 == 0
	      || a % 44 == 0 || a % 47 == 0 || a % 444 == 0 || a % 447 == 0
	      || a % 474 == 0 || a % 477 == 0 || a % 744 == 0 || a % 747 == 0)
	    {
	      cout << "YES";
	      return 0;
	    }
	  else
	    {
	      cout << "NO";
	      return 0;
	    }
	  return 0;
	}
    }
  cout << "YES";
  return 0;
}

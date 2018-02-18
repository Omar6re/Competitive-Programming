#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>

using namespace std;

int
main ()
{
  string chain1, chain2;
  cin >> chain1 >> chain2;
  for (int i = 0; i < chain1.size (); i++)
    {
      if (tolower (chain1[i]) == tolower (chain2[i]))
	{
	  if (i == chain1.size () - 1)
	    {
	      cout << 0;
	    }
	}
      else
	{
	  break;
	}
    }

  for (int i = 0; i < chain1.size (); i++)
    {
      if (tolower (chain1[i]) < tolower (chain2[i]))
	{
	  cout << -1;
	  exit (0);
	}
      else if (tolower (chain1[i]) > tolower (chain2[i]))
	{
	  cout << 1;
	  exit (0);
	}
    }
}

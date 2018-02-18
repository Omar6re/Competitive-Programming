#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int
main ()
{
  string chain;
  cin >> chain;
  int i = 0;
  for (int j = 0; j < chain.size (); j++)
    {
      if (chain[i] == 'a' || chain[i] == 'e' || chain[i] == 'i'
	  || chain[i] == 'o' || chain[i] == 'u' || chain[i] == 'y'
	  || chain[i] == 'A' || chain[i] == 'E' || chain[i] == 'I'
	  || chain[i] == 'O' || chain[i] == 'U' || chain[i] == 'Y')
	{
  i ++;
	}
      else
	{
	  cout << "." << (char)tolower(chain[i]);
    i ++;
	}
    }
  return 0;
}

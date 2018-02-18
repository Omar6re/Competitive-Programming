#include <iostream>
//#include <string>
using namespace std;

int
main ()
{
  int b[26];
  char a[1000];
  //string a;
  //cin.clear();
  //cin >> a;
  for (int i = 0; i < 1000; i++){
    a[i] = '0';
  }
  cin.getline(a, sizeof(a));
  int letters = 0;
  for (int i = 0; i < 26; i++)
    {
      b[i] = 0;
    }
  for (int i = 1; i < sizeof(a); i += 3)
    {
      b[a[i] - 97]++;
    }
  for (int i = 0; i < 26; i++)
    {
      if (b[i] != 0)
	{
	  letters++;
	}
    }
  cout << letters;
  return 0;
}

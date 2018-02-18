//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*void
Ordena (int array[], int n)
{
  int temp;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n - 1; j++)
	{
	  if (array[j] < array[j + 1])
	    {
	      temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;
	    }
	}
    }
}*/

int
main ()
{
  int c;
  int tp;
  int mayor;
  vector<int> v;
  cin >> c;
  int a[c];
  for (int i = 0; i < c; i++)
    {
      cin >> a[i];
    }
  //Ordena (v, c);
  sort (a,a+c);
  reverse (a,a+c);
  /*for (int i = 0; i < c; i++){
    cout << a[i];
  }*/

  /*if (c == 2 && v[0] == v[1])
     {
     cout << '2';
     return 0;
     }
     else if (c == 2 && v[0] != v[1])
     {
     cout << '1';
     return 0;
     } */

  for (int j = 1; j < c; j++)
    {
      tp += a[j];
    }
  mayor = a[0];       


  /*if (mayor[0] > tp[0]){
     cout << '1';
     return 0;
     }
     tp[1] = tp[0] - v[1];
     mayor[1] = mayor [0] + v[1];
     if (mayor[1] > tp[1]){
     cout << '2';
     return 0;
     } */

  for (int i = 0; i < c; i++)     
    {
      if (mayor > tp)
	{
	  cout << i + 1;
	  return 0;
	}
      mayor = mayor + a[i + 1];
      tp = tp - a[i + 1]; 
    }
  return 0;
}
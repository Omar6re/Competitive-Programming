#include <iostream>
using namespace std;

int
main ()
{
  int n, m, a, b;		//n viajes totales, m viajes ticket premium, a ticket normal, b costo premium.
  cin >> n >> m >> a >> b;
  int r = (n % m) * a;
  if (m * a > b){
    if (r > b){
      cout << (n/m) * b + b;
    }
    else {
      cout << (n/m) * b + r;
    }
  } else{
  cout << n * a;
  }
  return 0;
}

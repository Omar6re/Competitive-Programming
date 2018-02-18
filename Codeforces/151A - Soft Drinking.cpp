#include <iostream>

using namespace std;

int main () {
	int n,k,l,c,d,p,nl,np;
	int result[4];
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	result[0] = (k * l) / nl;
	result[1] = c * d;
	result[2] = p / np;
	result[4] = (min (result[0], min(result[2],result[1]))) / n;
	cout << result[4] << endl;
	return 0;
}
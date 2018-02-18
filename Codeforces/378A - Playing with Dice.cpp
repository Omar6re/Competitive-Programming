#include <bits/stdc++.h>

using namespace std;

int main () {
	int a,b,a_aux,b_aux,first = 0,draw = 0,second = 0;
	cin >> a >> b;
	for (int i = 1; i <= 6; i++) {
		a_aux = abs(a - i);
		b_aux = abs(b - i);
		if (a_aux > b_aux) {
			second++;
		}
		else if (b_aux > a_aux) {
			first++;
		}
		else {
			draw++;
		}
	}
	cout << first << " " << draw << " " << second << endl;
	return 0;
}
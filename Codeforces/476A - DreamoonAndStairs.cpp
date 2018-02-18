#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, m, movements;
	cin >> n >> m;
	int i = 0;
	int temp = 0;
	movements = n / 2;
	if (n == m) {
		cout << n << endl;
		return 0;
	}
	if (n % 2 == 0) {
		while (i < n / 2) {
			if ((movements) % m == 0) {
				cout << movements << endl;
				return 0;
			} else {
				movements++;
				i++;
			}
		}
	} else {
		movements++;
		temp = movements - 1;
		while (i < temp) {
			if (movements % m == 0) {
				cout << movements << endl;
				return 0;
			}
			else {
				movements++;
				i++;
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
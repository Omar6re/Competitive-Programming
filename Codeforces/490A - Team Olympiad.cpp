#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	int n1 = 0, n2 = 0, n3 = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int b[3];
	cin >> n;
	int a[n];
	int n11[n];
	int n22[n];
	int n33[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			n1++;
			n11[c1] = i + 1;
			c1++;
		}
		if (a[i] == 2) {
			n2++;
			n22[c2] = i + 1;
			c2++;
		}
		if (a[i] == 3) {
			n3++;
			n33[c3] = i + 1;
			c3++;
		}
	}
	b[0] = n1;
	b[1] = n2;
	b[2] = n3;
	sort (b, b + 3);
	cout << b[0] << endl;
	if (b[0] > 0) {
		for (int i = 0; i < b[0]; i++) {
			cout << n11[i] << " " << n22[i] << " " << n33[i] << endl;
		}
	}
	return 0;
}
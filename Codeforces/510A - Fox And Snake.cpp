#include <bits/stdc++.h>
using namespace std;

void print_a (char a[50], int m) {
	for (int i = 0; i < m; i++) {
		cout << a[i];
	}
	cout << endl;
}

void print_b (char b[50], int m) {
	for (int i = 0; i < m; i++) {
		cout << b[i];
	}
	cout << endl;
}

void print_c (char c[50], int m) {
	for (int i = 0; i < m; i++) {
		cout << c[i];
	}
	cout << endl;
}

int main () {
	int n, m;
	cin >> n >> m;
	char a[50];
	char b[50];
	char c[50];
	int n1 = 2, n2 = 4;
	for (int i = 0; i < m; i++) {
		a[i] = '#';
	}
	for (int i = 0; i < m; i++) {
		if (i != m - 1) {
		b[i] = '.';
		} else {
			b[i] = '#';
		}
	}
	for (int i = 0; i < m; i++) {
		if (i == 0) {
		c[i] = '#';
		} else {
			c[i] = '.';
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			print_a (a, m);
		}
		if (i == n1) {
			print_b (b, m);
			n1 += 4;
		}
		if (i == n2) {
			print_c (c, m);
			n2 += 4;
		}
	}
	return 0;
}
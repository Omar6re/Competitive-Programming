#include <bits/stdc++.h>
using namespace std;

int main () {
	int r, c, pieces = 0, frec = 0, frec1 = 0;
	bool count;
	cin >> r >> c;
	string a[r];
	for (int i = 0; i < r; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < r; i++) {
		count = 1;
		for (int j = 0; j < c; j++) {
			if (a[i][j] == 'S') {
				count = 0;
			}
			if (j == c - 1 && count == 1) {
				pieces += c;
				frec++;
			}
		}
	}
	for (int i = 0; i < c; i++) {
		count = 1;
		for (int j = 0; j < r; j++) {
			if (a[j][i] == 'S') {
				count = 0;
			}
			if (j == r - 1 && count == 1) {
				pieces += r;
				frec1++;
			}
		}
	}
	cout << pieces - (frec1 * frec) << endl;
	return 0;
}
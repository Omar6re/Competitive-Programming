#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, c, res = 0;
	cin >> n >> c;
	int a[n];
	int ar[n - 1];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}	
	for (int i = 0; i < n - 1; i++){
		ar[i] = a[i] - a[i + 1];
	}
	sort (ar, ar + (n - 1));
	if (ar[n - 2] < 0) {
		cout << 0 << endl;
		return 0;
	}
	res = ar[n - 2] - c;
	if (res < 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << res << endl;
	return 0;
}
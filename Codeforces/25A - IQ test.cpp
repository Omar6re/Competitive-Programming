#include <bits/stdc++.h>
using namespace std;

int main () {
	int n; 
	cin >> n;
	int a[n];
	int par = 0, impar = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			par++;
		} else {
			impar++;
		}
	}
	if (par > impar) {
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 1) {
				cout << i + 1 << endl;
				return 0;
			}
		}
	} else if (impar > par){
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0) {
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
	return 0;
}
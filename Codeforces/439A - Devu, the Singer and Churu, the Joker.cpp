#include <iostream>
using namespace std;

int main () {
	int n, d;
	cin >> n >> d;
	int a[n];
	int middle;
	int tiempo_restante;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	middle = (n - 1) * 10;
	for (int i = 0; i < n; i++) {
		middle += a[i];
	}
	if (middle > d) {
		cout << -1 << endl;
		return 0;
	}
	if (middle == d) {
		cout << (n - 1) * 2 << endl;
		return 0;
	}
	if (middle < d) {
		tiempo_restante = d - middle;
		tiempo_restante /= 5;
		cout << ((n - 1) * 2) + tiempo_restante << endl;
		return 0;
	}
	return 0;
}
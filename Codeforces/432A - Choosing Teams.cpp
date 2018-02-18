#include <iostream>
#include <algorithm>
using namespace std;

struct r
{
	int first, second, third;
};

int main () {
	int n, k;
	cin >> n >> k;
	int a[n];
	int p, j = 0, resultado = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort (a, a + n);
	p = n / 3;
	r teams[p];
	for (int i = 0; i < n - 2; i += 3) {
		teams[j].first = a[i];
		teams[j].second = a[i + 1];
		teams[j].third = a[i + 2];
		j++;
	}
	for (int i = 0; i < p; i++) {
		if (teams[i].first + k <= 5 && teams[i].second + k <= 5 && teams[i].third + k <= 5) {
			resultado++;
		}
	}
	cout << resultado << endl;
	return 0;
}
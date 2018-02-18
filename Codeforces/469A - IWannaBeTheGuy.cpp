#include <iostream>
using namespace std;

int main(){
	int n, p, q;
	cin >> n >> p;
	int x[p];
	int j = 0;
	for (int i = 0; i < p; i++){
		cin >> x[i];
	}
	cin >> q;
	int y[q];
	int t[p + q];
	int z[n];
	for (int i = 0; i < q; i++){
		cin >> y[i];
	}
	for (int i = 0; i < p; i++){
		t[i] = x[i];
	}
	for (int i = p; i < p + q; i++, j++){
		t[i] = y[j];
	}
	for (int i = 0; i < n; i++){
		z[i] = 0;
	}
	for (int i = 0; i < p + q; i++){
		z[t[i] - 1]++;
	}
	for (int i = 0; i < n; i++){
		if (z[i] == 0){
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";
	return 0;
}
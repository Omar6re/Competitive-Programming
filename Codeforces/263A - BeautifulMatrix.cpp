#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main (){
	int t = 4;
	int z[t];
	int x[t];
	int w[t];
	int y[t];
	int g[t];
	int i;
	int b;
	int c;
	int r1;
	int r2;
	int r;
	b = 0;
	c = 0;
	r1 = 0;
	r2 = 0;
	r = 0;
	i = 0;
	for (i = 0; i < 5; i++){
		cin >> z[i];
		if (z[i] != 0){
			b = i;
			c = 0;
		}
	}
	for (i = 0; i < 5; i++){
		cin >> x[i];
		if (x[i] != 0){
			b = i;
			c = 1;
		}
	}
	for (i = 0; i < 5; i++){
		cin >> w[i];
		if (w[i] != 0){
			b = i;
			c = 2;
		}
	}
	for (i = 0; i < 5; i++){
		cin >> y[i];
		if (y[i] != 0){
			b = i;
			c = 3;
		}
	}
	for (i = 0; i < 5; i++){
		cin >> g[i];
		if (g[i] != 0){
			b = i;
			c = 4;
		}
	}
	if (b == 2 && c == 2){
		cout << 0;
		return 0;
	} else {
		r1 = 2 - b;
		r2 = 2 - c;
		r1 = abs (r1);
		r2 = abs (r2);
		r = r1 + r2;
		cout << r;
		return 0;
	}
}

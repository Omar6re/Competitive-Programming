#include <iostream>
using namespace std;

struct a
{
	int c[3];
};

int main () {
	int n;
	int r[3];
	cin >> n;
	a b[n];
	for (int i = 0; i < 3; i++){
		r[i] = 0;
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 3; j++){
			cin >> b[i].c[j];
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < n; j++){
			r[i] += b[j].c[i];
		}
	}
	if (r[0] == 0 && r[1] == 0 && r[2] == 0){
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
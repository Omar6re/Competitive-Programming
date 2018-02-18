#include <iostream>
using namespace std;

int main (){
	int a[3];
	int resultado = 0;
	int r1, menor, nose, t;
	for(int i = 0; i < 3; i++){
		cin >> a[i];
	}
	t = a[0] + a[1] + a[2];
	if (a[0] < a[2]){
		menor = a[0];
		nose = a[2];
	} else {
		menor = a[2];
		nose = a[0];
	}
	resultado = (menor + a[1]) * nose;
	r1 = a[0] * a[1] * a[2];
	if (resultado < r1){
		cout << r1;
		return 0;
	}
	if (resultado < t){
		cout << t;
		return 0;
	}
	cout << resultado;
	return 0;
}
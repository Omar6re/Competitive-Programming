#include <iostream>

using namespace std;

int main (){
	int n,m;
	int menor;
	cin >> n >> m;
	if(n == m && n % 2 == 0){
		cout << "Malvika";
		return 0;
	} else if (n == m && n % 2 != 0){
		cout << "Akshat";
		return 0;
	}
	if (n > m){
		menor = m;
	} else {
		menor = n;
	}
	if (menor % 2 == 0){
		cout << "Malviak";
		return 0;
	} else {
		cout << "Akshat";
		return 0;
	}
	return 0;
}

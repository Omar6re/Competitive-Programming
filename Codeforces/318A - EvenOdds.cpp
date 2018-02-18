#include <iostream>
using namespace std;

int main () {
	unsigned long long n, k, r;
	cin >> n >> k;
	if (n % 2 == 0){
		if(k <= n / 2){
			r = 1;
			for (int i = 0; i < k - 1; i++){
				r += 2;
			}
			cout << r;
			return 0;
		} else
		{
			r = 0;
			for (int i = 0; i < k - (n / 2); i++){
				r += 2;
			}
			cout << r;
			return 0;
		}
	} else if (n % 2 == 1){
		if(k <= (n/2) + 1){
			r = 1;
			for(int i = 0; i < k - 1; i++){
				r += 2;
			}
			cout << r;
			return 0;
		}
		else {
			r = 0;
			for (int i = 0; i < (k - ((n / 2) + 1)); i++){
				r += 2;
			}
			cout << r;
			return 0;
		}
	}
	return 0;
}
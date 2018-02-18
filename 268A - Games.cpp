#include <iostream>
#include <vector>

using namespace std;

int main(){
	int teams;
	cin >> teams;
	int host[teams - 1];
	int guest[teams - 1];
	int coincidences = 0;
	for (int i = 0; i < teams; i++){
		cin >> host[i];
		cin >> guest[i];
	}
	for (int i = 0; i < teams; i++){
		for (int j = 0; j < teams; j++){
			if(host[i] == guest[j] && i != j)
				coincidences++;
		}	
	}
	cout << coincidences;
	return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int soldiers;
	cin >> soldiers;
	int height[soldiers-1];
	int indiceMayor = 0;
	int indiceMenor = 0;
	int indiceTotal = 0;
	int Mayor = 0;
	int temp1,temp2;
	int Menor = 0;
	//int c = 0;
	for (int i = 0; i < soldiers; i++){
		cin >> height[i];
	}

	for (int i = 0; i < soldiers - 1; i++){
		if (i == 0){
			Menor = height[i];
			indiceMenor = i + 1;
		}
		if (Menor == height[i + 1]){
			indiceMenor = i + 2;
		}
		if(Menor > height[i + 1]){
			Menor = height[i + 1];
			indiceMenor = i + 2;
		}
	}
	for (int i = soldiers - 1; i > 0; i--){
		if (i == soldiers - 1){
			Mayor = height[i];
			indiceMayor = i + 1;
		}
		if (Mayor == height[i - 1]){
			indiceMayor = i;
		}
		if(Mayor < height[i - 1]){
			Mayor = height[i - 1];
			indiceMayor = i;
		}
	}
	//cout << indiceMayor << endl;
	//cout << indiceMenor << endl;
	if(indiceMenor < indiceMayor){
		indiceMayor -= 1;
	}
	indiceMayor = abs (1 - indiceMayor);
	indiceMenor = soldiers - indiceMenor;
	indiceTotal = indiceMayor + indiceMenor;
	cout << indiceTotal;
	return 0;
}

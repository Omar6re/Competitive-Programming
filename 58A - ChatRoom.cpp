#include <iostream>
#include <string>

using namespace std;

int main (){
	//int b,c,d,e;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	string word;
	cin >> word;
	if (word.size() >= 5)
		for (int i = 0; i < word.size(); i++){
			if (word[i] == 104){
				b++;
			}
			if (word[i] == 101 && b > 0){
				c++;
			}
			if (word[i] == 108 && b > 0 && c > 0){
				d++;
			}
			if (word[i] == 111 && b > 0 && c > 0 && d > 0){
				e++;
			}
			if (b > 0 && c > 0 && d > 1 && e > 0){
				cout << "YES";
				return 0;
			}
		}
	cout << "NO";
	return 0;
} 
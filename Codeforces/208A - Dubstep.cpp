#include <iostream>
#include <string>

using namespace std;

int main (){
	string a;
	//char b[1000];
	string b;
	cin >> a;
	int c = 0;
	int spaces = 0;
	pair <bool,int> flag;
	//flag = make_pair(false,0);
	flag.first = false;
	flag.second = 0;
	for (int i = 0, c = 0; i < a.size(); i++){
		if (flag.first == true && flag.second > 0){
			flag.second--;
			if(flag.second == 0){
				flag.first = false;
			}
			continue;
		}
		if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B'){
			flag.first = true;
			flag.second = 2;
			if (spaces == 1){
				b.push_back(' ');
				c++;
				spaces = 0;
			}
			continue;
		}
		b.push_back(a[i]);
		c++;
		spaces = 1;
	}
	cout << b;
	return 0;
}

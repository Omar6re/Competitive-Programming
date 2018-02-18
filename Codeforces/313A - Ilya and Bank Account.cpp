#include <bits/stdc++.h>
using namespace std;

int main (){
	int long long a, r1, r2;
	cin >> a;
	string b, c;
	if (a >= 0){
		cout << a << endl;
		return 0;
	}
	string str = to_string(a);
	b = str;
	c = str;
	b.resize (str.size() - 1);
	c.resize (str.size() - 1);
	c[c.size () - 1] = str[str.size () - 1];
	r1 = atof (b.c_str());
	r2 = atof (c.c_str());
	if (r1 > r2){
		cout << r1;
		return 0;
	}
	if (r2 == 0){
		r2 = abs(r2);
	}
	cout << r2;
	return 0;
}
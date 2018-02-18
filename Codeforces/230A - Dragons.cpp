#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
	int s, n, n1, n2;
	cin >> s >> n;
	vector< pair<int,int> > vec;
	for (int i = 0; i < n; i++) {
		cin >> n1 >> n2;
		vec.push_back(make_pair(n1,n2));
	}
	sort (vec.begin(), vec.end());
	/*for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << endl;
	}*/
	for (int i = 0; i < n; i++) {
		if (s > vec[i].first) {
			s += vec[i].second;
		} else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	int p1,p2;
	vector < pair <int, int> > Laptops;
	for (int i = 0; i < n; i++) {
		cin >> p1 >> p2;
		Laptops.push_back(make_pair(p1,p2));
	}
	sort (Laptops.begin(), Laptops.end());
	for (int i = 0; i < Laptops.size() - 1; i++) {
		if (Laptops[i].second > Laptops[i + 1].second) {
			cout << "Happy Alex" << endl;
			return 0;
		}
	}
	cout << "Poor Alex" << endl;
	return 0;
}
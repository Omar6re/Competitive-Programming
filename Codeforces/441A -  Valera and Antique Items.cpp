#include <bits/stdc++.h>
using namespace std;

struct seller
{
	int antiques;
	vector<int long> p;
};

int main () {
	int n, answer = 0;
	vector<int> s;
	int long v, aux;
	bool flag = 0;
	cin >> n >> v;
	seller sellers[n];
	for (int i = 0; i < n; i++) {
		cin >>  sellers[i].antiques;
		for (int j = 0; j < sellers[i].antiques; j++) {
			cin >> aux;
			sellers[i].p.push_back(aux);
		}
	}
	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 0; j < sellers[i].p.size(); j++) {
			if (flag == 1) {
				continue;	
			}
			if (v > sellers[i].p[j]) {
				answer++;
				s.push_back(i + 1);
				flag = 1;
			}
		}
	}
	cout << answer << endl;
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}
}
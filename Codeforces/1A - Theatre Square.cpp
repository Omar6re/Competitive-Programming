#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n,m,a,r1,r2;
	long long result;
	cin >> n >> m >> a;
	r1 = ceil(n/a);
	r2 = ceil(m/a);
	r1 = (long long)r1;
	r2 = (long long)r2;
	result = r1 * r2;
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a,b,c,d,r1,r2,r3,r4,r5,r6;
	cin >> a >> b >> c >> d;
	r1 = a * 3 / 10;
	r2 = a - (a / 250 * c);
	r3 = b * 3 / 10;
	r4 = b - (b / 250 * d);
	r5 = max(r1,r2);
	r6 = max(r3,r4);
	if (r5 > r6)
	{
		cout << "Misha" << endl;
	}
	else if (r5 < r6)
	{
		cout << "Vasya" << endl;
	}
	else
	{
		cout << "Tie" << endl;
	}
	return 0;
}
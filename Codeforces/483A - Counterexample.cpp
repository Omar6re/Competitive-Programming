#include <bits/stdc++.h>
using namespace std;
int long long l,r,a,b,c;
bool Comp (int s)
{
	a = l + s - 2;
	b = l + s - 1;
	c = l + s;
	bool flag = false;
	for (int i = s; i <= r - l; i++)
		{
			if (__gcd(b,c) == 1 && __gcd(a,c) != 1)
			{
				flag = true;
				return flag;
			}
			c++;
		}
	return flag;		
}

int main ()
{
	cin >> l >> r;
	if (r - l < 2)
	{
		cout << -1 << endl;
		return 0;
	}
	else
	{
		for (int j = 2; j <= r - l; j++)
		{
			if (Comp(j))
			{
				cout << a << " " << b << " " << c << endl;
				return 0;
			}
		}
		cout << -1 << endl;
	}
	return 0;
}

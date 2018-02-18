#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,aux1,aux2,aux3,result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aux1;
		cin >> aux2;
		cin >> aux3;
		if (aux1 + aux2 + aux3 >= 2)
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}
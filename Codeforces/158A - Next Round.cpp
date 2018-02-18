#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,result = 0;
	cin >> n >> k;
	int aux[n];
	for (int i = 0; i < n; i++)
	{
		cin >> aux[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (aux[i] > 0 && aux[i] >= aux[k - 1])
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}
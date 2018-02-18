#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n, x, aux, current = 1, minutes = 0;
	cin >> n >> x;
	pair<int,int> parts[n];
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		parts[i].first = aux;
		cin >> aux;
		parts[i].second = aux;
	}
	for (int i = 0; i < n; i++)
	{
		while (current + x <= parts[i].first)
		{
			current += x;
		}
		minutes += (parts[i].second - current) + 1;
		current = parts[i].second + 1;
	}
	cout << minutes << endl;
}

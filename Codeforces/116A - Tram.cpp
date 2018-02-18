#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, max_capacity = 0;
	cin >> n;
	pair<int,int> people[n];
	for (int i = 0; i < n; i++)
	{
		cin >> people[i].first;
		cin >> people[i].second;
	}
	int current = people[0].second;
	max_capacity = current;
	for (int i = 1; i < n; i++)
	{
		current = current - people[i].first + people[i].second;
		max_capacity = max(max_capacity,current);
	}
	cout << max_capacity << endl;
	return 0;
}
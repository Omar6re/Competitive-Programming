#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n,aux,result = 0;
	bool left, right, top, bottom;
	cin >> n;
	pair<int,int> cords[n];
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		cords[i].first = aux;
		cin >> aux;
		cords[i].second = aux;
	}
	for (int i = 0; i < n; i++)
	{
		left = false;
		right = false;
		top = false;
		bottom = false;
		for(int j = 0; j < n; j++)
		{
			if(i == j)
				continue;
			if(cords[i].first == cords[j].first)
			{
				if(cords[i].second > cords[j].second)
				{
					top = true;
				}
				else if(cords[i].second < cords[j].second)
				{
					bottom = true;
				}
			}
			if(cords[i].second == cords[j].second)
			{
				if (cords[i].first > cords[j].first)
				{
						right = true;
				}
				else if(cords[i].first < cords[j].first)
				{
					left = true;
				}
			}
		}
		if(left == true && right == true && top == true && bottom == true)
		{
			result++;
		}
	}
	cout << result << endl;
}

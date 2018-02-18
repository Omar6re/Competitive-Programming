#include <iostream>
#include <string>

using namespace std;

int main () 
{
	int n, chest, biceps, back, max, i_aux;
	string a;
	cin >> n;
	int training[n];
	for (int i = 0; i < n; i++) 
	{
		cin >> training[i];
	}
	chest = 0;
	biceps = 0;
	back = 0;
	for (int i = 0; i < n; i++)
	{
		i_aux = i % 3;
		if (i_aux == 0)
		{
			chest += training[i];
		}
		if (i_aux == 1)
		{
			biceps += training[i];
		}
		if (i_aux == 2)
		{
			back += training[i];
		}
	}
	if (chest > biceps)
	{
		a = "chest";
		max = chest;
	}
	else
	{
		a = "biceps";
		max = biceps;
	}

	if (back > max)
	{
		max = back;
		a = "back";
	}

	cout << a << endl;
	return 0;
}
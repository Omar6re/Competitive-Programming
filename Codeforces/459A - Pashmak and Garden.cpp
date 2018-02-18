#include <iostream>
#include <math.h>
using namespace std;

int Is_Square (int x1, int y1, int x2, int y2) {
	int a = 0;
	if (x1 ==  x2) {
		a = 1;
		return a;
	}
	if (y1 == y2) {
		a = 2;
		return a;
	}
	/*if (x1 == y1 && x2 == y2) {
		a = 3;
		return a;
	}*/
	if (fmod(sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)),1) != 0) {
		a = 3;
		return a;
	}
	return a;
}

int main () {
	int x1, y1, x2, y2, x3, y3, x4, y4, d1;
	float d2, d3, d4, d5, d6;
	d2 = 0;
	d3 = 0;
	d4 = 0;
	d5 = 0;
	int b = 0;
	x3 = 0;
	y3 = 0;
	x4 = 0;
	y4 = 0;
	d1 = 0;
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	b = Is_Square (x1, y1, x2, y2);
	d1 = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	if (b == 1) {
		x3 = d1 + x1;
		x4 = d1 + x1;
		y3 = y2;
		y4 = y1;
		cout << x3 << " " << y3 << " " <<  x4 << " " << y4 << endl;
		return 0;
	}
	if (b == 2) {
		y3 = d1 + y1;
		y4 = d1 + y1;
		x3 = x2;
		x4 = x1;
		cout << x3 << " " << y3 << " " <<  x4 << " " << y4 << endl;
		return 0;
	}
	if (b == 3) {
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
		d2 = sqrt(pow((x3 - x1),2) + pow((y3 - y1),2));
		d3 = sqrt(pow((x4 - x1),2) + pow((y4 - y1),2));
		d4 = sqrt(pow((x2 - x3),2) + pow((y2 - y3),2));
		d5 = sqrt(pow((x2 - x4),2) + pow((y2 - y4),2));
		if (d2 != d3 || d2 != d4 || d2 != d5) {
			cout << -1 << endl;
			return 0;
		}
		/*d2 = fmod(sqrt(pow((x3 - x1),2) + pow((y3 - y1),2)),1);
		d3 = fmod(sqrt(pow((x4 - x1),2) + pow((y4 - y1),2)),1);
		d4 = fmod(sqrt(pow((x2 - x3),2) + pow((y2 - y3),2)),1);
		d5 = fmod(sqrt(pow((x2 - x4),2) + pow((y2 - y4),2)),1);
		d6 = fmod(sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)),1);*/
		//cout << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
		cout << x3 << " " << y3 << " " <<  x4 << " " << y4 << endl;
		return 0;
	}
	cout << -1 << endl;
	return 0;
}
/*
	if (a == TRUE) {
		
		if (fmod(sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)),1) == 0) {
			if ((x1 - x2) == 0) {
				x3 = d1 + x1;
				x4 = d1 + x1;
				y3 = y2;
				y4 = y1;
			} else if ((y1 - y2) == 0) {
				y3 = d1 + y1;
				y4 = d1 + y1;
				x3 = x2;
				x4 = x1;
			}
		} else {
			x3 = x1;
			y3 = x2;
			x4 = x2;
			y4 = x1;
		}
		cout << x3 << " " << y3 << " " <<  x4 << " " << y4 << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
	*/
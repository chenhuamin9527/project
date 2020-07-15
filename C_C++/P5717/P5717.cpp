#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

int main() 
{
	cin >> a >> b >> c;
	int d[4] = {0, a, b, c};
	sort(d + 1, d + 4);
	if(d[1] + d[2] <= d[3]) {
		cout << "Not triangle" << endl;
		return 0;
	}
	if(d[1] * d[1] + d[2] * d[2] == d[3] * d[3])	cout << "Right triangle" << endl;
	else if(d[1] * d[1] + d[2] * d[2] > d[3] * d[3])	cout << "Acute triangle" << endl;
	else if(d[1] * d[1] + d[2] * d[2] < d[3] * d[3])	cout << "Obtuse triangle" << endl;
	if(a == b || b == c || a == c)	cout << "Isosceles triangle" << endl;
	if(a == b && b == c)	cout << "Equilateral triangle" << endl;
	return 0;
}
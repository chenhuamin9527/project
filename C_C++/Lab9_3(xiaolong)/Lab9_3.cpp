#include "date.h"
#include "date.cpp"
#include<bits/stdc++.h>
using namespace std;
//date1 Ϊ������ڣ�date2 Ϊס������

int main()
{
	Date d1(2020,5,20);
	d1.show();
	Date d2=d1.AddorSubInteger(d1,-100);
	Date d3=d1.AddorSubInteger(d1,100);
	d2.show();
	d3.show();
	cout<<"d1: ";
	d1.show();
	cout<<"d1++: ";
	(d1++).show();
	cout<<"++d1: ";
	(++d1).show();
	cout<<"d1--: ";
	(d1--).show();
	cout<<"--d1: ";
	(--d1).show();
	cout<<'\n'<<"the distance between d1 and d2: "<<d1.distance(d2);
	cout<<'\n'<<"SubDate in d1 and d2: "<<d1.SubDate(d2,d1);
	d1.HotelCharge(d1.SubDate(d2,d1));
	return 0;
}

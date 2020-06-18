#include "date.h"
#include<bits/stdc++.h>
using namespace std;
namespace
{
	const int DAYS_BEFORE_MONTH[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
}

Date::Date(int year,int month,int day):year(year),month(month),day(day)
{
	if(day<=0||day>=getMaxDay()||month<=0||month>12||year<0)
	{
		cout<<"Invaild Date!"<<endl;
		exit(1);
	}
	int lastyear=year-1;
	totalDays=lastyear*365+lastyear/4-lastyear/100+lastyear/400+DAYS_BEFORE_MONTH[month-1]+day;
	if(isLeapYear()&&month>2)
	{
		totalDays++;
	}
}

Date Date::AddorSubInteger(const Date& date,int a)
{
	if(a>=0)
	{
		int newtotalDays=date.gettotalDays()+a;	    
		int newyear = 0;/*当前年份*/
    	int newmonth = 0;/*月份*/
    	int newday = 0;/*存储逝去的天数*/
    	int yT = 0;  /*标识平年还是润年*/
    	for(newyear=0; day >= yd[yT=yType(newyear)]; newyear ++)/*算出当前年份，从yType（）函数处可得知本年属于平年还是润年*/
    	{
   	    	newtotalDays -= yd[yT];/*减去本年天数*/
    	}
    	for(newmonth = 1; day >= monthOfY[yT][month]; newmonth++)/*month对应月份，判断当前剩余天数是否大于本月所含天数，小于的话就退出for循环*/
    	{
    	    newtotalDays -=monthOfY[yT][month]; /*day是剩余天数，每次循环减去本月天数*/
    	}
    	newday=newtotalDays;
    	Date D1(newyear,newmonth,newday+1);
    	return D1;
	}
	if(a<0)
	{
		int newtotalDays=date.gettotalDays()-a;	    
		int newyear = 0;/*当前年份*/
    	int newmonth = 0;/*月份*/
    	int newday = 0;/*存储逝去的天数*/
    	int yT = 0;  /*标识平年还是润年*/
    	for(newyear=0; day >= yd[yT=yType(newyear)]; newyear ++)/*算出当前年份，从yType（）函数处可得知本年属于平年还是润年*/
    	{
   	    	newtotalDays -= yd[yT];/*减去本年天数*/
    	}
    	for(newmonth = 1; day >= monthOfY[yT][month]; newmonth++)/*month对应月份，判断当前剩余天数是否大于本月所含天数，小于的话就退出for循环*/
    	{
    	    newtotalDays -=monthOfY[yT][month]; /*day是剩余天数，每次循环减去本月天数*/
    	}
    	newday=newtotalDays;
    	Date D1(newyear,newmonth,newday+1);
    	return D1;
	}



int Date::getMaxDay() const
{
	if(isLeapYear()&&month==2)
		return 29;
	else
		return DAYS_BEFORE_MONTH[month]-DAYS_BEFORE_MONTH[month-1];
}
 
void Date::show() const
{
	cout<<getYear()<< '-' ;
	cout<< setw(2) << setfill('0') <<getMonth() << '-' << setw(2) << setfill('0') << getDay() << ' ' <<endl;
}

Date & Date::operator++()
{
	day++;
	if(day>monthOfY[yType(year)][month])
	{
		day=1;
		month++;
		if(month>12)
		{
			month=1;
			year++;
		}
	}	
	return * this;
}

Date Date::operator++(int)
{
	Date old=* this;
	++(* this);
	return old;
}

Date & Date::operator--()
{
	day--;
	if(day<=0)
	{
		day=monthOfY[yType(year)][month-1];
		month--;
		if(month<=0)
		{
			month=12;
			year--;
		}
	}	
	return * this;
}

Date Date::operator--(int)
{
	Date old=* this;
	--(* this);
	return old;
}

//date1 为离店日期，date2 为住店日期 
int Date::SubDate(const Date& date1,const Date& date2) const 
{
	{
		if(date1.year<=date2.year)
			if(date1.month<=date2.month)
				if(date1.day<date2.day)
					return date2.totalDays-date1.totalDays;
		else
			cout<<"The date you cin is wrong!";
			exit(1);
	}
}

void Date::HotelCharge(int b)const
{
	int k;
	cout<<"cin the Room Rate: "<<endl;
	cin>>k;
	cout<<"The charge of hotel room is : ";
	cout<<b*k<<endl;
}
	
}

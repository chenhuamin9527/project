#include<bits/stdc++.h>
using namespace std;
namespace
{
	const int DAYS_BEFORE_MONTH[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
}

class Date
{
private:
	int year;
	int month;
	int day;
	int totalDays;
	int monthOfY[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
                            {0,31,29,31,30,31,30,31,31,30,31,30,31} };//monthOfY[0]表示平年每月天数，monthOfY[1]表示闰年每月天数
    int yd[2] = {365,366};/*yd[1]表示润年，yd[0]表示平年*/
public:
	Date(int year,int month,int day);
	int getYear()const {return year;}
	int getMonth()const {return month;}
	int getDay()const {return day;}
	int gettotalDays()const {return totalDays;}
	int getMaxDay() const;
	int yType(int y)/*判断y年份是平年还是润年*/
	{
    	if( (y%400==0) || (y%4==0 && y%100!=0) )/*如果能被400整除的话就不用判断后边的了，否则判断是否是能被4整除不能被100整除*/
        {
           	return 1;/*是润年*/
        }
		else
		{
           return 0;/*不是润年*/
        }
	}
	bool isLeapYear()const
	{
		return year%4==0 && year&100!=0||year%400==0;
	}
	void show() const;
	int distance(const Date& date) const
	{
		return totalDays-date.totalDays;
	}
	Date AddorSubInteger(const Date& date,int a);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	int SubDate(const Date& date1,const Date& date2) const;
	//date1 为离店日期，date2 为住店日期
	void HotelCharge(int b)const;
};

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
	int newtotalDays=date.gettotalDays()+a;	    
	int newyear = 1;/*当前年份*/
    int newmonth = 0;/*月份*/
   	int newday = 0;/*存储逝去的天数*/
    int yT = 0;  /*标识平年还是润年*/
    for(newyear=1; newtotalDays >= yd[yT]; newyear ++)/*算出当前年份，从yType（）函数处可得知本年属于平年还是润年*/
    {
   		if( (newyear%400==0) || (newyear%4==0 && newyear%100!=0) )/*如果能被400整除的话就不用判断后边的了，否则判断是否是能被4整除不能被100整除*/
        {
        	yT=1;/*是润年*/
        }
		else
		{
           yT=0;/*不是润年*/
        }
		newtotalDays -= yd[yT];/*减去本年天数*/
    }
    for(newmonth = 1; newtotalDays >= monthOfY[yT][newmonth]; newmonth++)/*month对应月份，判断当前剩余天数是否大于本月所含天数，小于的话就退出for循环*/
    {
        newtotalDays -=monthOfY[yT][newmonth]; /*day是剩余天数，每次循环减去本月天数*/
    }
    newday=newtotalDays;
    if(a>=0)
    {
    	cout<<"加了"<<-a<<"天之后的日期是："<<endl; 
	}
	if(a<0)
    {
    	cout<<"减了"<<a<<"天之后的日期是："<<endl; 
	}
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
	cout<<'\n'<<"cin the Room Rate: "<<endl;
	cin>>k;
	cout<<"The charge of hotel room is : ";
	cout<<b*k<<endl;
}

int main()
{
	Date d1(2020,5,20);
	d1.show();
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
	cout<<d1.gettotalDays()<<endl;
	Date d4(2020,2,9);
	cout<<'\n'<<"the distance between d1 and d2: "<<d1.distance(d4);
	cout<<'\n'<<"SubDate in d1 and d2: "<<d1.SubDate(d4,d1);
	d1.HotelCharge(d1.SubDate(d4,d1));
	Date d2=d1.AddorSubInteger(d1,-100);
	d2.show();
	Date d3=d1.AddorSubInteger(d1,100);
	d3.show();
	return 0;
}

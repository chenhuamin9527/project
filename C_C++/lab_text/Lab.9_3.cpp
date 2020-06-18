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
                            {0,31,29,31,30,31,30,31,31,30,31,30,31} };//monthOfY[0]��ʾƽ��ÿ��������monthOfY[1]��ʾ����ÿ������
    int yd[2] = {365,366};/*yd[1]��ʾ���꣬yd[0]��ʾƽ��*/
public:
	Date(int year,int month,int day);
	int getYear()const {return year;}
	int getMonth()const {return month;}
	int getDay()const {return day;}
	int gettotalDays()const {return totalDays;}
	int getMaxDay() const;
	int yType(int y)/*�ж�y�����ƽ�껹������*/
	{
    	if( (y%400==0) || (y%4==0 && y%100!=0) )/*����ܱ�400�����Ļ��Ͳ����жϺ�ߵ��ˣ������ж��Ƿ����ܱ�4�������ܱ�100����*/
        {
           	return 1;/*������*/
        }
		else
		{
           return 0;/*��������*/
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
	//date1 Ϊ������ڣ�date2 Ϊס������
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
	int newyear = 1;/*��ǰ���*/
    int newmonth = 0;/*�·�*/
   	int newday = 0;/*�洢��ȥ������*/
    int yT = 0;  /*��ʶƽ�껹������*/
    for(newyear=1; newtotalDays >= yd[yT]; newyear ++)/*�����ǰ��ݣ���yType�����������ɵ�֪��������ƽ�껹������*/
    {
   		if( (newyear%400==0) || (newyear%4==0 && newyear%100!=0) )/*����ܱ�400�����Ļ��Ͳ����жϺ�ߵ��ˣ������ж��Ƿ����ܱ�4�������ܱ�100����*/
        {
        	yT=1;/*������*/
        }
		else
		{
           yT=0;/*��������*/
        }
		newtotalDays -= yd[yT];/*��ȥ��������*/
    }
    for(newmonth = 1; newtotalDays >= monthOfY[yT][newmonth]; newmonth++)/*month��Ӧ�·ݣ��жϵ�ǰʣ�������Ƿ���ڱ�������������С�ڵĻ����˳�forѭ��*/
    {
        newtotalDays -=monthOfY[yT][newmonth]; /*day��ʣ��������ÿ��ѭ����ȥ��������*/
    }
    newday=newtotalDays;
    if(a>=0)
    {
    	cout<<"����"<<-a<<"��֮��������ǣ�"<<endl; 
	}
	if(a<0)
    {
    	cout<<"����"<<a<<"��֮��������ǣ�"<<endl; 
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

//date1 Ϊ������ڣ�date2 Ϊס������ 
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

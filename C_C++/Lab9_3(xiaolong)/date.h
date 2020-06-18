# ifndef __DATE_H__
# define __DATE_H__

class Date
{
private:
	int year;
	int month;
	int day;
	int totalDays;
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
    int monthOfY[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
                            {0,31,29,31,30,31,30,31,31,30,31,30,31} };//monthOfY[0]表示平年每月天数，monthOfY[1]表示闰年每月天数
    int yd[2] = {365,366};/*yd[1]表示润年，yd[0]表示平年*/
public:
	Date(int year,int month,int day);
	int getYear()const {return year;}
	int getMonth()const {return month;}
	int getDay()const {return day;}
	int gettotalDays() {return totalDays;}
	int getMaxDay() const;
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

#endif

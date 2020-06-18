# ifndef __DATE_H__
# define __DATE_H__

class Date
{
private:
	int year;
	int month;
	int day;
	int totalDays;
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
    int monthOfY[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
                            {0,31,29,31,30,31,30,31,31,30,31,30,31} };//monthOfY[0]��ʾƽ��ÿ��������monthOfY[1]��ʾ����ÿ������
    int yd[2] = {365,366};/*yd[1]��ʾ���꣬yd[0]��ʾƽ��*/
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
	//date1 Ϊ������ڣ�date2 Ϊס������
	void HotelCharge(int b)const;
};

#endif

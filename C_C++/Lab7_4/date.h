#ifndef __DATE_H__
#define __DATE_H__
class Date  //日期类
{
private:
    int year;   //年
    int month;  //月
    int day;    //日
    int totalDays;  //该日期是从公元元年1年1日开始的第几天
public:
    Date(int year, int month, int day); //用年、月、日构造日期
    int getYear() const {return year;}
    int getMonth() const {return month;}
    int getDay() const {return day;}
    int getMaxDay() const;  //获得当月有多少天
    bool isLeapyear() const{
        return year%4==0 &&year%100!=0||year%400==0;
    }
    void show() const;  //输出当前日期
    //计算两个日期之间查多少天
    int distance(const Date& date) const{
        return totalDays-date.totalDays;
    }
};

#endif

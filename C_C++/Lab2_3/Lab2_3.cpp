#include<bits/stdc++.h>
using namespace std;
//包含年、月、日、时、分、秒等属性
//具有适当的成员函数用于设置时间、显示时间
class ElectronicClock
{
private:
    int year, month, day, hour, minute, second;
public:
    void set_time(int newY, int newMo, int newD, int newH, int newM, int newS);
    void show_time();
};
void ElectronicClock::show_time()
    {
        cout << year << "." << month <<"." << day << " " << hour << ":" << minute << ":" << second;
    }

void ElectronicClock::set_time(int newY, int newMo, int newD, int newH, int newM, int newS)
{
    year = newY;
    month = newMo;
    day = newD;
    hour = newH;
    minute = newM;
    second = newS;
}
int main()
{
    ElectronicClock Myclock;
    Myclock.set_time(2020,3,18,18,9,30);
    Myclock.show_time();
    return 0;
}
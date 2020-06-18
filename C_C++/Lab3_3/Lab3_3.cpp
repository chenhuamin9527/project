#include <bits/stdc++.h>
using namespace std;
//3、阅读并理解P133综合实例4.7，思考本实例的设计思想，然后抄写P134-138例4-9，测试通过并保存。
//面向对象的思想符合工程式项目的思想，可以将一个整体项目分成各个功能模块分别实现，最后再整合在一起
class SavingsAccount         //储蓄账户类
{
private:
    int id;                 //账户
    double balance;         //余额
    double rate;            //存款的年利率
    int lastDate;           //上次变更余额的时期
    double accumulation;    //余额按日累加之和
    //记录一笔账，date为日期，amount为金额，desc为说明
    void record(int date, double amount);
    //获得到指定日期为止得存款金额按日累积值
    double accumulate(int date) const
    {
        return accumulation + balance * (date - lastDate);
    }
public:
    //构造函数
    SavingsAccount(int date, int id, double rate);
    int getId()
    {
        return id;
    }
    double getBalance(){return balance;}
    double getRate(){return rate;}
    void desposit(int date, double amount);     //存入现金
    void withdraw(int date, double amount);     //取出现金
    //结算利息，每年1月1日调用一次该函数
    void settle(int date);
    //显示账户信息
    void show();
};
//SavingsAccount类相关成员函数的实现
SavingsAccount::SavingsAccount(int date, int id, double rate)
    :id(id), balance(0), rate(rate), lastDate(date), accumulation(0)
    {
        cout << date << "\t#" << id << "is created" << endl;
    }

void SavingsAccount::record(int date, double amount)
{
    accumulation = accumulate(date);
    lastDate = date;
    amount = floor(amount * 100 + 0.5) / 100;
    balance += amount;
    cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

void SavingsAccount::desposit(int date, double amount)
{
    record(date, amount);
}

void SavingsAccount::withdraw(int date, double amount)
{
    if (amount > getBalance())
        cout << "Error: not enough money" << endl;
    else
        record(date, -amount);
}

void SavingsAccount::settle(int date)
{
    double interest = accumulate(date) * rate/365;  //计算年息
    if (interest!=0)
        record(date, interest);
    accumulation = 0;
}

void SavingsAccount::show()
{
    cout << "#" << id << "\tBalance:" << balance << endl; 
}
int main()
{
    //建立几个账户
    SavingsAccount sa0(1, 21325302, 0.015);
    SavingsAccount sa1(1, 58320212, 0.015);
    //几笔账目
    sa0.desposit(5, 5000);
    sa1.desposit(25, 10000);
    sa0.desposit(45, 5500);
    sa1.withdraw(60, 4000);
    //开户后第90天到了银行的计息日，结算所有账号的年息
    sa0.settle(90);
    sa1.settle(90);
    //输出各个账号的信息
    sa0.show();
    sa1.show();
    return 0;
}
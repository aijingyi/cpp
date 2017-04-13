#include <iostream>
using namespace std;

class Time
{
public:
	Time(int, int, int);
	int hour;
	int minute;
	int sec;
	void get_time();
};
Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}
void Time::get_time()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
	Time t1(10, 13,56);  //定义Time类对象t1并初始化
	int *p1 = &t1.hour;  //定义指向整型数据的指针变量，并指向t1.hour
	cout<<*p1<<endl;    //输出p1所指向的数据成员t1.hour
	t1.get_time();    //调用对象t1的成员函数get_time()
	Time *p2=&t1;    //定义指向Time类对象的指针变量p2，并是p2指向t1
	p2->get_time();   //调用p2所指向对象的get_time()函数
	void (Time::*p3)();    //定义指向Time类公用成员函数的指针变量p3
	p3= &Time::get_time;    //使p3指向Time类公用成员函数get_time
	(t1.*p3)();    //调用对象t1中p3所指的成员函数即t1.get_time()
	return 0;
}


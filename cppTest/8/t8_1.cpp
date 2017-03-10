#include <iostream>

using namespace std;

class Time
{
public:
    void set_time(void);
    void show_time(void);
private:
    int hour;
    int minute;
    int sec;
};

int main()
{
Time t;
t.set_time();
t.show_time();
return 0;
}

void Time::set_time(void)
{
    cin>>hour;
    cin>>minute;
    cin>>sec;

}
void Time::show_time(void)
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

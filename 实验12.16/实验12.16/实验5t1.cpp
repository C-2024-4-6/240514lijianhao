#include <iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
    int hour;
    int minute;
    int sec;
public:
    Time(int hour = 0, int minute = 0, int sec = 0)
    {
        this->hour = hour;
        this->minute = minute;
        this->sec = sec;
    }
    void settime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        sec = s;
    }
    void showtime()
    {
        cout << hour << ":" << minute << ":" << sec<<endl;
    }
};

int main()
{
    Time t1;          //定义t1为Time类对象
    t1.showtime();
    int h, m,s;
    cin >> h >> m >> s;
    t1.settime(h, m, s);
    t1.showtime();
    return 0;
}

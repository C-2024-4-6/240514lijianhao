 #include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入一个华氏温度：";
	float t, t1;
	cin >> t;
	t1 = (t - 32) / 1.8;
	cout <<fixed<< setprecision(2);
	cout << "对应的摄氏温度为：" << t1;
	return 0;
}

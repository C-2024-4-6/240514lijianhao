#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	if (a < b)
	{
		int t;
		t = b;
		b = a;
		a = t;
	}
	int c=a%b, d=a;
	while (d % b != 0)
	{
		d += a;
	}
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	cout << "两数的最大公约数和最小公倍数分别为：" << b << ' ' << d;
	return 0;
}
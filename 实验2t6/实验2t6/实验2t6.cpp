#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "������������������";
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
	cout << "���������Լ������С�������ֱ�Ϊ��" << b << ' ' << d;
	return 0;
}
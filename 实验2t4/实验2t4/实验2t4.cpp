#include<iostream>
using namespace std;
int main()
{
	float a, c;
	char b;
	cin >> a >> b >> c;
	if (b == '+')
	{
		cout << a + c;
	}
	else if (b == '-')
	{
		cout << a - c;
	}
	else if (b == '*')
	{
		cout << a * c;
	}
	else if (b == '/')
	{
		if (c == 0)
		{
			cout << "��������Ϊ0";
		}
		else
		{
			cout << a / c;
		}
	}
	else if (b == '%')
	{
		if (c == 0)
		{
			cout << "ģ������Ϊ0";
		}
		else
		{
			cout <<int( a) % int(c);
		}
	}
	else
	{
		cout << "�зǷ��ַ�";
	}
	return 0;
}

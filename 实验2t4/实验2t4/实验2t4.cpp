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
			cout << "除数不能为0";
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
			cout << "模数不能为0";
		}
		else
		{
			cout <<int( a) % int(c);
		}
	}
	else
	{
		cout << "有非法字符";
	}
	return 0;
}

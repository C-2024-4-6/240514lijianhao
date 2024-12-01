#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << a + b + c;
	}
	else
	{
		cout << "无法组成三角形";
	}
	return 0;
}

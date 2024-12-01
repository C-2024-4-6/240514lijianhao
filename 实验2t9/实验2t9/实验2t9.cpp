#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int sum = 0, a = 2, day = 0;
	double b;
	while (sum <= 100)
	{
		sum += a;
		a = a * 2;
		day += 1;
	}
	b = (sum - a / 2) * 0.8 / (day - 1);
	cout << "平均值为：" << b;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double z, a, b;
	cout << "请输入初始值：";
	cin >> z;
	if (z > 0)
	{
		a = z;
		b = (z / a + a) / 2;
		double c = (a - b > 0 ? a - b : b - a);
		while (c >= 1e-10)
		{
			a = b;
			b = (z / a + a) / 2;
			c = (a - b > 0 ? a - b : b - a);
		}
		cout << "平方根为" << fixed << setprecision(10) << b;
	}
	else cout << "该初始值无平方根" << endl;
	return 0;
}

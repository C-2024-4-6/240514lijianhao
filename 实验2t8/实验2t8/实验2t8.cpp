#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double z, a, b;
	cout << "�������ʼֵ��";
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
		cout << "ƽ����Ϊ" << fixed << setprecision(10) << b;
	}
	else cout << "�ó�ʼֵ��ƽ����" << endl;
	return 0;
}

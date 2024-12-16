#include <iostream>
using namespace std;
int gys(int a, int b)
{
	if (a < b)
	{
		int n;
		n = a;
		a = b;
		b = n;
	}
	int t;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}
int gbs(int a, int b)
{
	int t;
	t = a * b / gys(a, b);
	return t;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << gys(m, n) << endl;
	cout << gbs(m, n) << endl;
	return 0;
}
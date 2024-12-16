#include<iostream>
using namespace std;
void mp(double a[])
{
	for (int i = 0;i <=9;i++)
	{
		for (int j = 0;j <=9- 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				double t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	
}
int main()
{
	double a[10];
	for (int i = 0;i <= 9;i++)
	{
		cin >> a[i];
	}
	mp(a);
	for (int i = 0;i <= 9;i++)
		cout << a[i] << " ";
}
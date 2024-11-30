#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int n = 10,i=0;
	while (n--)
	{
		int b;
		bool c = true;
		cin >> b;
		int j = 0;
		while (j < i)
		{
			if (a[j] == b)
				c = false;
			j++;
		}
		if (c)
		{
			a[i] = b;
			i++;
		}
	}
	for (int q = 0;q < i;q++)
	{
		cout << a[q] << " ";
	}
	return 0;
}
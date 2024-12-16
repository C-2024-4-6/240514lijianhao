#include<iostream>
using namespace std;
int main()
{
	int n = 3;
	bool a[100];
	for (int i = 0;i <= 99;i++)
		a[i] = true;
	for (int i = 1;i <= 99;i += 3)
		a[i] = false;
	while (n < 99)
	{
		for (int i = n;i <= 99;i += (n+1))
		{
			if (a[i] == true)
				a[i] = false;
			else
				a[i] = true;
		}
		n++;
	}
	for (int i = 0;i <= 99;i++)
	{
		if (a[i] == true)
			cout << i + 1 << " ";
	}

}
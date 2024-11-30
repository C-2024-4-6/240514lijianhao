#include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 2)return true;
	for (int i = 2;i < num;i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int i = 1,n=0,num=0,a;
	cin >> a;
	if (is_prime(a))
		cout << "true"<<endl;
	else
		cout << "false"<<endl;
		while (i++)
		{
			if (is_prime(i))
			{
				cout << i << " ";
				n++;
				num++;
			}
			if (n == 10)
			{
				cout << endl;
				n = 0;
			}
			if (num == 200)
			{
				break;
			}
		}
		return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	while (a--)
	{
		int b = 5-a;
		while (b--)
		{
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}